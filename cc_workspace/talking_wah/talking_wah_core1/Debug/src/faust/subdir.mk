################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/faust/samFaustDSP.cpp 

SRC_OBJS += \
./src/faust/samFaustDSP.doj 

CPP_DEPS += \
./src/faust/samFaustDSP.d 


# Each subdirectory must supply rules for building sources it contributes
src/faust/samFaustDSP.doj: ../src/faust/samFaustDSP.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -w -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/faust/samFaustDSP.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


