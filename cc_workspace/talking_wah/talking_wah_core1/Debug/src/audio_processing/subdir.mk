################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects_selector.cpp 

SRC_OBJS += \
./src/audio_processing/audio_effects_selector.doj 

CPP_DEPS += \
./src/audio_processing/audio_effects_selector.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio_processing/audio_effects_selector.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects_selector.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects_selector.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


