################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1452_configurations.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1761_configurations.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1966_configurations.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1977_configurations.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1979_configurations.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/ssm3582_configuration.c 

SRC_OBJS += \
./src/drivers/bm_adau_driver/configurations/adau1452_configurations.o \
./src/drivers/bm_adau_driver/configurations/adau1761_configurations.o \
./src/drivers/bm_adau_driver/configurations/adau1966_configurations.o \
./src/drivers/bm_adau_driver/configurations/adau1977_configurations.o \
./src/drivers/bm_adau_driver/configurations/adau1979_configurations.o \
./src/drivers/bm_adau_driver/configurations/ssm3582_configuration.o 

C_DEPS += \
./src/drivers/bm_adau_driver/configurations/adau1452_configurations.d \
./src/drivers/bm_adau_driver/configurations/adau1761_configurations.d \
./src/drivers/bm_adau_driver/configurations/adau1966_configurations.d \
./src/drivers/bm_adau_driver/configurations/adau1977_configurations.d \
./src/drivers/bm_adau_driver/configurations/adau1979_configurations.d \
./src/drivers/bm_adau_driver/configurations/ssm3582_configuration.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_adau_driver/configurations/adau1452_configurations.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1452_configurations.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_adau_driver/configurations/adau1452_configurations.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/drivers/bm_adau_driver/configurations/adau1761_configurations.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1761_configurations.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_adau_driver/configurations/adau1761_configurations.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/drivers/bm_adau_driver/configurations/adau1966_configurations.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1966_configurations.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_adau_driver/configurations/adau1966_configurations.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/drivers/bm_adau_driver/configurations/adau1977_configurations.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1977_configurations.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_adau_driver/configurations/adau1977_configurations.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/drivers/bm_adau_driver/configurations/adau1979_configurations.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/adau1979_configurations.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_adau_driver/configurations/adau1979_configurations.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/drivers/bm_adau_driver/configurations/ssm3582_configuration.o: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_adau_driver/configurations/ssm3582_configuration.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/drivers/bm_adau_driver/configurations/ssm3582_configuration.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


