################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_serial_eeprom_driver/bm_serial_eeprom.c 

SRC_OBJS += \
./src/drivers/bm_serial_eeprom_driver/bm_serial_eeprom.o 

C_DEPS += \
./src/drivers/bm_serial_eeprom_driver/bm_serial_eeprom.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_serial_eeprom_driver/bm_serial_eeprom.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_serial_eeprom_driver/bm_serial_eeprom.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_serial_eeprom_driver/bm_serial_eeprom.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


