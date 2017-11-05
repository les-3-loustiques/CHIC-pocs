################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-1343083151:
	@$(MAKE) -Onone -f ti/sysbios/rom/cortexm/cc26xx/agama/subdir_rules.mk build-1343083151-inproc

build-1343083151-inproc: ../ti/sysbios/rom/cortexm/cc26xx/agama/CC26xx.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/Program Files (x86)/ti/ccs730/xdctools_3_50_03_33_core/xs" --xdcpath= xdc.tools.configuro -o configPkg -r debug -b "D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld" -c "C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS" "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: build-1343083151 ../ti/sysbios/rom/cortexm/cc26xx/agama/CC26xx.cfg D:/Utilisateurs/Pierre/Mes\ documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld
configPkg/compiler.opt: build-1343083151 D:/Utilisateurs/Pierre/Mes\ documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld
configPkg/: build-1343083151 D:/Utilisateurs/Pierre/Mes\ documents/Prog/CHIC-pocs/CC2640R2/blueTest/xdc/rov/runtime/config.bld


