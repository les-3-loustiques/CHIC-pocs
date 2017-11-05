################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
ti/targets/arm/rtsarm/auto_init.obj: ../ti/targets/arm/rtsarm/auto_init.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/targets/arm/rtsarm/auto_init.d_raw" --obj_directory="ti/targets/arm/rtsarm" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ti/targets/arm/rtsarm/auto_init_515.obj: ../ti/targets/arm/rtsarm/auto_init_515.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/targets/arm/rtsarm/auto_init_515.d_raw" --obj_directory="ti/targets/arm/rtsarm" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ti/targets/arm/rtsarm/boot.obj: ../ti/targets/arm/rtsarm/boot.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/targets/arm/rtsarm/boot.d_raw" --obj_directory="ti/targets/arm/rtsarm" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ti/targets/arm/rtsarm/boot_515.obj: ../ti/targets/arm/rtsarm/boot_515.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/bin/armcl" -mv7M3 --code_state=16 -me --include_path="D:/Utilisateurs/Pierre/Mes documents/Prog/CHIC-pocs/CC2640R2/blueTest" --include_path="C:/Program Files (x86)/ti/ccs730/ccsv7/tools/compiler/ti-cgt-arm_16.9.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="ti/targets/arm/rtsarm/boot_515.d_raw" --obj_directory="ti/targets/arm/rtsarm" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


