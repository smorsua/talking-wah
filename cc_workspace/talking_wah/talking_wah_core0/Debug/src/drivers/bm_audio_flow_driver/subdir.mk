################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
W:/4TO/DSP/talking-wah/cc_workspace/talking_wah/drivers/bm_audio_flow_driver/bm_audio_flow.c 

SRC_OBJS += \
./src/drivers/bm_audio_flow_driver/bm_audio_flow.o 

C_DEPS += \
./src/drivers/bm_audio_flow_driver/bm_audio_flow.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_audio_flow_driver/bm_audio_flow.o: W:/4TO/DSP/talking-wah/cc_workspace/talking_wah/drivers/bm_audio_flow_driver/bm_audio_flow.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-4f92b0caa564922802c5f239434fbcb7.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_audio_flow_driver/bm_audio_flow.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


