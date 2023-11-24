################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_audio_flow_driver/bm_audio_flow.c 

SRC_OBJS += \
./src/drivers/bm_audio_flow_driver/bm_audio_flow.doj 

C_DEPS += \
./src/drivers/bm_audio_flow_driver/bm_audio_flow.d 


# Each subdirectory must supply rules for building sources it contributes
src/drivers/bm_audio_flow_driver/bm_audio_flow.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/drivers/bm_audio_flow_driver/bm_audio_flow.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -DNDEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/drivers/bm_audio_flow_driver/bm_audio_flow.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


