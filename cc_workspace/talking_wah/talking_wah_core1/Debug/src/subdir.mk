################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/callback_audio_processing.cpp \
../src/callback_midi_message.cpp \
../src/peak_filter.cpp \
../src/startup_code_core1.cpp 

SRC_OBJS += \
./src/callback_audio_processing.doj \
./src/callback_midi_message.doj \
./src/peak_filter.doj \
./src/startup_code_core1.doj 

CPP_DEPS += \
./src/callback_audio_processing.d \
./src/callback_midi_message.d \
./src/peak_filter.d \
./src/startup_code_core1.d 


# Each subdirectory must supply rules for building sources it contributes
src/callback_audio_processing.doj: ../src/callback_audio_processing.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/callback_audio_processing.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/callback_midi_message.doj: ../src/callback_midi_message.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/callback_midi_message.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/peak_filter.doj: ../src/peak_filter.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/peak_filter.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/startup_code_core1.doj: ../src/startup_code_core1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/startup_code_core1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


