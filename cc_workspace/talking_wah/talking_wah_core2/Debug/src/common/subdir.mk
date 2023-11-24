################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/common/multicore_shared_memory.c 

SRC_OBJS += \
./src/common/multicore_shared_memory.doj 

C_DEPS += \
./src/common/multicore_shared_memory.d 


# Each subdirectory must supply rules for building sources it contributes
src/common/multicore_shared_memory.doj: C:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/common/multicore_shared_memory.c
	@echo 'Building file: $<'
	@echo 'Invoking: CrossCore SHARC C/C++ Compiler'
	cc21k -c -file-attr ProjectName="talking_wah_core2" -proc ADSP-SC589 -flags-compiler --no_wrap_diagnostics -si-revision 1.0 -g -DCORE2 -D_DEBUG @includes-1d4f3bb45db67787308fcb8b1ec6b881.txt -structs-do-not-overlap -no-const-strings -no-multiline -warn-protos -double-size-32 -char-size-8 -swc -gnu-style-dependencies -MD -Mo "src/common/multicore_shared_memory.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


