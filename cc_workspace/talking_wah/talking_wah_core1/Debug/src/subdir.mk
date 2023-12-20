################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AutoWah.cpp \
../src/LevelDetector.cpp \
../src/callback_audio_processing.cpp \
../src/callback_midi_message.cpp \
../src/peak_filter.cpp \
../src/startup_code_core1.cpp 

SRC_OBJS += \
./src/AutoWah.doj \
./src/LevelDetector.doj \
./src/callback_audio_processing.doj \
./src/callback_midi_message.doj \
./src/peak_filter.doj \
./src/startup_code_core1.doj 

CPP_DEPS += \
./src/AutoWah.d \
./src/LevelDetector.d \
./src/callback_audio_processing.d \
./src/callback_midi_message.d \
./src/peak_filter.d \
./src/startup_code_core1.d 


# Each subdirectory must supply rules for building sources it contributes
src/AutoWah.doj: ../src/AutoWah.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/AutoWah.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/LevelDetector.doj: ../src/LevelDetector.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/LevelDetector.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/callback_audio_processing.doj: ../src/callback_audio_processing.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/callback_audio_processing.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/callback_midi_message.doj: ../src/callback_midi_message.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/callback_midi_message.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/peak_filter.doj: ../src/peak_filter.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/peak_filter.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/startup_code_core1.doj: ../src/startup_code_core1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE1 -D_DEBUG @includes-df17e1cdd34a087704489c917e2f897d.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/startup_code_core1.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


