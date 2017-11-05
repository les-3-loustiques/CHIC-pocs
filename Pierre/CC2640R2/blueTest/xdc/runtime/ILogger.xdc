/* 
 *  Copyright (c) 2008 Texas Instruments. All rights reserved.
 *  This program and the accompanying materials are made available under the
 *  terms of the Eclipse Public License v1.0 and Eclipse Distribution License
 *  v. 1.0 which accompanies this distribution. The Eclipse Public License is
 *  available at http://www.eclipse.org/legal/epl-v10.html and the Eclipse
 *  Distribution License is available at
 *  http://www.eclipse.org/org/documents/edl-v10.php.
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 * */
/*!
 *  ======== ILogger ========
 *  Interface to service Log events
 *
 *  A logger is responsible for recording, transmitting, or otherwise
 *  handling `{@link Log#EventDesc Log Events}` generated by clients of the
 *  `{@link Log}` module. The `Log` module uses modules that implement the
 *  `ILogger` interface to record the log events. Most application code will
 *  use the `Log` module instead of directly calling the specific `ILogger`
 *  module implementation.
 *
 *  All logger implementations must inherit from this interface. The
 *  derived implementations must implement the functions defined in this
 *  interface but may also add additional configuration parameters and
 *  functions.
 *
 *  Events may be defined with a detail level, but the Log interface does not
 *  inherently provide support for filtering of events based on detail level.
 *  Instead, this is left to the ILogger implementation. ILogger
 *  implementations which wish to support filtering based on detail level
 *  should implement the IFilterLogger interface, which extends the ILogger
 *  interface to include APIs for getting and setting the current filter level.
 */
@DirectCall
interface ILogger {

    /*!
     *  ======== getMetaArgs ========
     *  Returns any meta data needed to support RTA.
     *
     *  This meta data should be returned in the form of a structure which
     *  can be converted into XML. This data is added to the RTA XML file
     *  during the application's configuration, and can be accessed later
     *  through the xdc.rta.MetaData module.
     *
     *  The MetaData is returned per instance of the ILogger module. The
     *  instance object is passed to the function as the first argument.
     *
     *  The second argument is the index of the instance in the list of 
     *  the ILogger's static instances.
     */
    function getMetaArgs(inst, instNum);
     
instance:

    /*!
     *  ======== enable ========
     *  Enable a log
     *
     *  @a(returns)
     *  The function returns the state of the log (`TRUE` if enabled,
     *  `FALSE` if disabled) before the call. This return value allows 
     *  clients to restore the previous state.  
     *  Note: not thread safe.
     */
    Bool enable();
    
   /*!
     *  ======== disable ========
     *  Disable a log
     *
     *  Events written to a disabled log are silently discarded.
     *
     *  @a(returns)
     *  The function returns the state of the log (`TRUE` if enabled,
     *  `FALSE` if disabled) before the call. This return value allows 
     *  clients to restore the previous state.
     *  Note: not thread safe.
     */
    Bool disable(); 
        
    /*! 
     *  ======== write0 ========
     *  Process a log event with 0 arguments.
     *
     *  Same as `write4` except with 0 arguments rather than 4.
     *
     *  @see ILogger#write4()
     */
    Void write0(Log.Event evt, Types.ModuleId mid);
     
    /*! 
     *  ======== write1 ========
     *  Process a log event with 1 arguments.
     *
     *  Same as `write4` except with 1 arguments rather than 4.
     *
     *  @see ILogger#write4()
     */
    Void write1(Log.Event evt, Types.ModuleId mid, IArg a1);

    /*! 
     *  ======== write2 ========
     *  Process a log event with 2 arguments.
     *
     *  Same as `write4` except with 2 arguments rather than 4.
     *
     *  @see ILogger#write4()
     */
    Void write2(Log.Event evt, Types.ModuleId mid, IArg a1, IArg a2);

    /*! 
     *  ======== write4 ========
     *  Process a log event with up to 4 arguments.
     *
     *  The `evt` argument is of type Log.Event, which encodes the 
     *  `{@link Log#EventId}`, the `{@link Diags#Mask}`, and the 
     *  `{@link Diags#EventLevel}` of the event. The event ID can be obtained
     *  via `{@link Types#getEventId}(evt)`, the Diags mask can be obtained via
     *  `{@link Diags#getMask}(evt)`, and the event level can be obtained via
     *  `{@link Diags#getLevel}(evt)`.
     *  
     *  The `modId` argument is the module ID of the module that logged the
     *  event.
     *  
     *  The event information can be used by the logger to handle different 
     *  events specially. For example, the event ID can be used to compare 
     *  against other known `Log.Event`s.
     *  @p(code)
     *      if (Log_getEventId(MY_EVENT) == Log_getEventId(evt)) {
     *          :
     *      }
     *  @p
     *  The Diags mask and event level can be used for filtering of events 
     *  based on event level (see {@link IFilterLogger}), or even routing 
     *  events to separate loggers based on diags category (see, for example, 
     *  {@link LoggerBuf#statusLogger}). 
     *
     *  The Diags mask and event level are useful for handling the event, but 
     *  are generally not recorded by the logger because they are not needed in
     *  decoding and displaying the event. A more suitable value to record is a
     *  `{@link Types#Event}`, which encodes the event ID and module ID. For
     *  example, the `{@link Log#EventRec}` type stores a `{@link Types#Event}`
     *  in its record definition. A `{@link Types#Event}` can be created using
     *  the `{@link Types#makeEvent}` API given the event ID and module ID.
     *
     *  The event ID value of `0` is used to indicate an event triggered by a
     *  call to one of the `{@link Log#print0 Log_print[0-6]}` methods. These
     *  methods take a format string rather than a `Log_Event` argument and,
     *  as a result, the event ID encoded in `evt` is `0` and the parameter 
     *  `a1` is the format string.
     *
     *  Non-zero event IDs can also be used to access the `msg` string
     *  associated with the `{@link Log#EventDesc}` that originally
     *  defined the `Log` event.
     *  @p(code)
     *      Log_EventId id = Log_getEventId(evt));
     *      if (id != 0) {
     *          String msg = Text_ropeText(id);
     *          System_aprintf(msg, a1, a2, a3, a4);
     *      }
     *  @p
     *  This works because an event's ID is simply an offset into a table
     *  of characters (maintained by the `{@link Text}` module)
     *  containing the event's msg string.
     *
     *  The arguments a1, a2, etc. are parameters that are to be interpreted
     *  according to the message format string associated with `evt`.
     *
     *  @param(evt) event to be logged
     *  @param(mid) module ID of the module which logged the event
     *  @param(a1)  arbitrary argument passed by caller
     *
     *  @see Log#Event
     *  @see Log#EventDesc
     *  @see Text#ropeText
     *  @see Log#getEventId
     */
    Void write4(Log.Event evt, Types.ModuleId mid, IArg a1, IArg a2,
                IArg a3, IArg a4);

    /*! 
     *  ======== write8 ========
     *  Process a log event with up to 8 arguments.
     *
     *  Same as `write4` except with 8 arguments rather than 4.
     *
     *  @see ILogger#write4()
     */
    Void write8(Log.Event evt, Types.ModuleId mid, IArg a1, IArg a2,
                IArg a3, IArg a4, IArg a5, IArg a6, IArg a7, IArg a8);
}
/*
 *  @(#) xdc.runtime; 2, 1, 0,0; 8-8-2017 17:30:59; /db/ztree/library/trees/xdc/xdc-D20/src/packages/
 */

