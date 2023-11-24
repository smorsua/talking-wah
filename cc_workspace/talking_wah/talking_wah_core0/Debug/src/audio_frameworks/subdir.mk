################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_arm.c \
../src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_arm.c \
../src/audio_frameworks/audio_framework_a2b_bypass_sc589_arm.c 

SRC_OBJS += \
./src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_arm.o \
./src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_arm.o \
./src/audio_frameworks/audio_framework_a2b_bypass_sc589_arm.o 

C_DEPS += \
./src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_arm.d \
./src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_arm.d \
./src/audio_frameworks/audio_framework_a2b_bypass_sc589_arm.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_arm.o: ../src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_arm.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_arm.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_arm.o: ../src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_arm.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_arm.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_frameworks/audio_framework_a2b_bypass_sc589_arm.o: ../src/audio_frameworks/audio_framework_a2b_bypass_sc589_arm.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-07441f603bc8b9f76dbd9491552ef50f.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/audio_frameworks/audio_framework_a2b_bypass_sc589_arm.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


