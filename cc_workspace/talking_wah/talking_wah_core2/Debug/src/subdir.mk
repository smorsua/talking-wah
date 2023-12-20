################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/callback_audio_processing.cpp \
../src/startup_code_core2.cpp 

SRC_OBJS += \
./src/callback_audio_processing.doj \
./src/startup_code_core2.doj 

CPP_DEPS += \
./src/callback_audio_processing.d \
./src/startup_code_core2.d 


# Each subdirectory must supply rules for building sources it contributes
src/callback_audio_processing.doj: ../src/callback_audio_processing.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-b5f3a1991b53c10a5165072ca304da06.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/callback_audio_processing.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/startup_code_core2.doj: ../src/startup_code_core2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-b5f3a1991b53c10a5165072ca304da06.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/startup_code_core2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


