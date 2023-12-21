################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_autowah.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_guitar_synth.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_multiband_compressor.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_ring_modulator.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_stereo_flanger.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_stereo_reverb.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_tremelo.c \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_tube_distortion.c 

SRC_OBJS += \
./src/audio_processing/audio_effects/effect_autowah.doj \
./src/audio_processing/audio_effects/effect_guitar_synth.doj \
./src/audio_processing/audio_effects/effect_multiband_compressor.doj \
./src/audio_processing/audio_effects/effect_ring_modulator.doj \
./src/audio_processing/audio_effects/effect_stereo_flanger.doj \
./src/audio_processing/audio_effects/effect_stereo_reverb.doj \
./src/audio_processing/audio_effects/effect_tremelo.doj \
./src/audio_processing/audio_effects/effect_tube_distortion.doj 

C_DEPS += \
./src/audio_processing/audio_effects/effect_autowah.d \
./src/audio_processing/audio_effects/effect_guitar_synth.d \
./src/audio_processing/audio_effects/effect_multiband_compressor.d \
./src/audio_processing/audio_effects/effect_ring_modulator.d \
./src/audio_processing/audio_effects/effect_stereo_flanger.d \
./src/audio_processing/audio_effects/effect_stereo_reverb.d \
./src/audio_processing/audio_effects/effect_tremelo.d \
./src/audio_processing/audio_effects/effect_tube_distortion.d 


# Each subdirectory must supply rules for building sources it contributes
src/audio_processing/audio_effects/effect_autowah.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_autowah.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_autowah.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_guitar_synth.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_guitar_synth.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_guitar_synth.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_multiband_compressor.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_multiband_compressor.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_multiband_compressor.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_ring_modulator.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_ring_modulator.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_ring_modulator.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_stereo_flanger.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_stereo_flanger.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_stereo_flanger.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_stereo_reverb.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_stereo_reverb.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_stereo_reverb.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_tremelo.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_tremelo.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_tremelo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/audio_processing/audio_effects/effect_tube_distortion.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/audio_processing/audio_effects/effect_tube_distortion.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core1" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -O -Ov100 -g -DCORE1 -D_DEBUG -DADI_DEBUG @includes-116a21481c2a5ce2dd3241251661a105.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/audio_processing/audio_effects/effect_tube_distortion.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


