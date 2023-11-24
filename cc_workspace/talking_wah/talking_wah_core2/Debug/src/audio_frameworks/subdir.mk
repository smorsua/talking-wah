################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_core2.c \
../src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_core2.c 

CPP_SRCS += \
../src/audio_frameworks/audio_framework_faust_extension_core2.cpp 

SRC_OBJS += \
./src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_core2.doj \
./src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_core2.doj \
./src/audio_frameworks/audio_framework_faust_extension_core2.doj 

C_DEPS += \
./src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_core2.d \
./src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_core2.d 

CPP_DEPS += \
./src/audio_frameworks/audio_framework_faust_extension_core2.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_core2.doj: ../src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_core2.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-1d4f3bb45db67787308fcb8b1ec6b881.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_frameworks/audio_framework_16ch_sam_and_automotive_fin_core2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_core2.doj: ../src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_core2.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-1d4f3bb45db67787308fcb8b1ec6b881.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_frameworks/audio_framework_8ch_sam_and_audioproj_fin_core2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_frameworks/audio_framework_faust_extension_core2.doj: ../src/audio_frameworks/audio_framework_faust_extension_core2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-1d4f3bb45db67787308fcb8b1ec6b881.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_frameworks/audio_framework_faust_extension_core2.d" -c++ -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


