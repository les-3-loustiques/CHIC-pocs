################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
ti/sysbios/family/arm/v7r/tms570/Boot.obj: ../ti/sysbios/family/arm/v7r/tms570/Boot.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/sysbios/family/arm/v7r/tms570/Boot.d_raw" --obj_directory="ti/sysbios/family/arm/v7r/tms570" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ti/sysbios/family/arm/v7r/tms570/Core.obj: ../ti/sysbios/family/arm/v7r/tms570/Core.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/sysbios/family/arm/v7r/tms570/Core.d_raw" --obj_directory="ti/sysbios/family/arm/v7r/tms570" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


