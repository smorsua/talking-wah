################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
W:/4TO/DSP/talking-wah/cc_workspace/talking_wah/drivers/bm_sysctrl_driver/bm_system_control.c 

SRC_OBJS += \
./src/drivers/bm_sysctrl_driver/bm_system_control.doj 

C_DEPS += \
./src/drivers/bm_sysctrl_driver/bm_system_control.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_sysctrl_driver/bm_system_control.doj: W:/4TO/DSP/talking-wah/cc_workspace/talking_wah/drivers/bm_sysctrl_driver/bm_system_control.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/drivers/bm_sysctrl_driver/bm_system_control.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


