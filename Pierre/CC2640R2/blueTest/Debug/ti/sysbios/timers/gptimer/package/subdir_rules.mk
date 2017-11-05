################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-121537761:
	@$(MAKE) -Onone -f ti/sysbios/timers/gptimer/package/subdir_rules.mk build-121537761-inproc

build-121537761-inproc: ../ti/sysbios/timers/gptimer/package/build.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/Program Files (x86)/ti/ccs730/xdctools_3_50_03_33_core/xs" --xdcpath= xdc.tools.configuro -o configPkg -r debug -b "D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld" -c "C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS" "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: build-121537761 ../ti/sysbios/timers/gptimer/package/build.cfg D:/Utilisateurs/Pierre/Mes\ documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld
configPkg/compiler.opt: build-121537761 D:/Utilisateurs/Pierre/Mes\ documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld
configPkg/: build-121537761 D:/Utilisateurs/Pierre/Mes\ documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld

ti/sysbios/timers/gptimer/package/package_ti.sysbios.timers.gptimer.obj: ../ti/sysbios/timers/gptimer/package/package_ti.sysbios.timers.gptimer.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/sysbios/timers/gptimer/package/package_ti.sysbios.timers.gptimer.d_raw" --obj_directory="ti/sysbios/timers/gptimer/package" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


