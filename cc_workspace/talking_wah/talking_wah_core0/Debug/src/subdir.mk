################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/startup_code_core0.c 

CPP_SRCS += \
../src/callback_midi_message.cpp \
../src/callback_pushbuttons.cpp 

SRC_OBJS += \
./src/callback_midi_message.o \
./src/callback_pushbuttons.o \
./src/startup_code_core0.o 

C_DEPS += \
./src/startup_code_core0.d 

CPP_DEPS += \
./src/callback_midi_message.d \
./src/callback_pushbuttons.d 


# Each subdirectory must supply rules for building sources it contributes
src/callback_midi_message.o: ../src/callback_midi_message.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C++ Compiler'
	arm-none-eabi-g++ -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 @includes-015dbb65ddbeaf066b7a2d5416b99698.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/callback_midi_message.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/callback_pushbuttons.o: ../src/callback_pushbuttons.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C++ Compiler'
	arm-none-eabi-g++ -g -gdwarf-2 -ffunction-sections -fdata-sections -DCORE0 @includes-015dbb65ddbeaf066b7a2d5416b99698.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/callback_pushbuttons.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/startup_code_core0.o: ../src/startup_code_core0.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore ARM Bare Metal C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -ffunction-sections -fdata-sections -D_DEBUG -DCORE0 @includes-4f92b0caa564922802c5f239434fbcb7.txt -Wall -c -mproc=ADSP-SC589 -msi-revision=1.0 -MMD -MP -MF"src/startup_code_core0.d" -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


