################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
W:/4TO/DSP/talking-wah/cc_workspace/talking_wah/drivers/bm_gpio_driver/bm_gpio.c 

SRC_OBJS += \
./src/drivers/bm_gpio_driver/bm_gpio.doj 

C_DEPS += \
./src/drivers/bm_gpio_driver/bm_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_gpio_driver/bm_gpio.doj: W:/4TO/DSP/talking-wah/cc_workspace/talking_wah/drivers/bm_gpio_driver/bm_gpio.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-b5f3a1991b53c10a5165072ca304da06.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/drivers/bm_gpio_driver/bm_gpio.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


