################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/allpass_filter.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/amplitude_modulation.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/audio_utilities.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/biquad_filter.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/clickless_volume_ctrl.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/clipper.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/compressor.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/integer_delay_lpf.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/integer_delay_multitap.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/oscillators.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/simple_synth.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/variable_delay.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/zero_crossing_detector.c 

SRC_OBJS += \
./src/audio_processing/audio_elements/allpass_filter.doj \
./src/audio_processing/audio_elements/amplitude_modulation.doj \
./src/audio_processing/audio_elements/audio_utilities.doj \
./src/audio_processing/audio_elements/biquad_filter.doj \
./src/audio_processing/audio_elements/clickless_volume_ctrl.doj \
./src/audio_processing/audio_elements/clipper.doj \
./src/audio_processing/audio_elements/compressor.doj \
./src/audio_processing/audio_elements/integer_delay_lpf.doj \
./src/audio_processing/audio_elements/integer_delay_multitap.doj \
./src/audio_processing/audio_elements/oscillators.doj \
./src/audio_processing/audio_elements/simple_synth.doj \
./src/audio_processing/audio_elements/variable_delay.doj \
./src/audio_processing/audio_elements/zero_crossing_detector.doj 

C_DEPS += \
./src/audio_processing/audio_elements/allpass_filter.d \
./src/audio_processing/audio_elements/amplitude_modulation.d \
./src/audio_processing/audio_elements/audio_utilities.d \
./src/audio_processing/audio_elements/biquad_filter.d \
./src/audio_processing/audio_elements/clickless_volume_ctrl.d \
./src/audio_processing/audio_elements/clipper.d \
./src/audio_processing/audio_elements/compressor.d \
./src/audio_processing/audio_elements/integer_delay_lpf.d \
./src/audio_processing/audio_elements/integer_delay_multitap.d \
./src/audio_processing/audio_elements/oscillators.d \
./src/audio_processing/audio_elements/simple_synth.d \
./src/audio_processing/audio_elements/variable_delay.d \
./src/audio_processing/audio_elements/zero_crossing_detector.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio_processing/audio_elements/allpass_filter.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/allpass_filter.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/allpass_filter.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/amplitude_modulation.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/amplitude_modulation.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/amplitude_modulation.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/audio_utilities.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/audio_utilities.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/audio_utilities.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/biquad_filter.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/biquad_filter.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/biquad_filter.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/clickless_volume_ctrl.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/clickless_volume_ctrl.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/clickless_volume_ctrl.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/clipper.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/clipper.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/clipper.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/compressor.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/compressor.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/compressor.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/integer_delay_lpf.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/integer_delay_lpf.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/integer_delay_lpf.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/integer_delay_multitap.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/integer_delay_multitap.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/integer_delay_multitap.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/oscillators.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/oscillators.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/oscillators.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/simple_synth.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/simple_synth.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/simple_synth.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/variable_delay.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/variable_delay.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/variable_delay.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_elements/zero_crossing_detector.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_elements/zero_crossing_detector.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_elements/zero_crossing_detector.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


