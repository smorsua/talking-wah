################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_sru_driver/bm_sru.c 

SRC_OBJS += \
./src/drivers/bm_sru_driver/bm_sru.o 

C_DEPS += \
./src/drivers/bm_sru_driver/bm_sru.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_sru_driver/bm_sru.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_sru_driver/bm_sru.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_sru_driver/bm_sru.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


