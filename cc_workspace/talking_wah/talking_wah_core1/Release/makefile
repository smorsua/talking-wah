################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := ${ComSpec}

-include ../makefile.init

RM := clean

# All of the sources participating in the build are defined here
-include sources.mk
-include system/startup_ldf/subdir.mk
-include system/subdir.mk
-include src/faust/subdir.mk
-include src/drivers/bm_uart_driver/subdir.mk
-include src/drivers/bm_sysctrl_driver/subdir.mk
-include src/drivers/bm_gpio_driver/subdir.mk
-include src/drivers/bm_event_logging_driver/subdir.mk
-include src/drivers/bm_audio_flow_driver/subdir.mk
-include src/common/subdir.mk
-include src/audio_processing/audio_elements/subdir.mk
-include src/audio_processing/audio_effects/subdir.mk
-include src/audio_processing/subdir.mk
-include src/audio_frameworks/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DSP_DEPS)),)
-include $(DSP_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LINKER_LOG_OUTPUTS += \
linker_log.xml \

OBJS := $(SRC_OBJS)
# Quote makefile variable : OBJS 
OBJS := $(subst \ ,@, $(OBJS))
OBJS := $(foreach var, $(OBJS), "$(subst @, ,$(var))")
# Quote makefile variable : DSP_DEPS 
DSP_DEPS := $(subst \ ,@, $(DSP_DEPS))
DSP_DEPS := $(foreach var, $(DSP_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : CC_DEPS 
CC_DEPS := $(subst \ ,@, $(CC_DEPS))
CC_DEPS := $(foreach var, $(CC_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : C++_DEPS 
C++_DEPS := $(subst \ ,@, $(C++_DEPS))
C++_DEPS := $(foreach var, $(C++_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : C_UPPER_DEPS 
C_UPPER_DEPS := $(subst \ ,@, $(C_UPPER_DEPS))
C_UPPER_DEPS := $(foreach var, $(C_UPPER_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : CXX_DEPS 
CXX_DEPS := $(subst \ ,@, $(CXX_DEPS))
CXX_DEPS := $(foreach var, $(CXX_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : ASM_DEPS 
ASM_DEPS := $(subst \ ,@, $(ASM_DEPS))
ASM_DEPS := $(foreach var, $(ASM_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : S_DEPS 
S_DEPS := $(subst \ ,@, $(S_DEPS))
S_DEPS := $(foreach var, $(S_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : C_DEPS 
C_DEPS := $(subst \ ,@, $(C_DEPS))
C_DEPS := $(foreach var, $(C_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : CPP_DEPS 
CPP_DEPS := $(subst \ ,@, $(CPP_DEPS))
CPP_DEPS := $(foreach var, $(CPP_DEPS), "$(subst @, ,$(var))")

# All Target
all: talking_wah_core1.dxe

# Tool invocations
talking_wah_core1.dxe: $(LDF_SRCS) $(SRC_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: CrossCore SHARC Linker'
	cc21k -proc ADSP-SC589 -si-revision 1.0 -TC:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/talking_wah_core1/system/startup_ldf/app.ldf -no-mem -map talking_wah_core1.map.xml -flags-link -ip -LC:/Users/acustica/Documents/smorsua/talking-wah/cc_workspace/talking_wah/talking_wah_core1/Release/system/startup_ldf -flags-link -MDCORE1,-MDOTHERCORE,-MDRELEASE -flags-link -e -o talking_wah_core1.dxe @input-file.txt  -flags-link -od,.\.
	@echo 'Finished building target: $@'
	@echo ' '

linker_log.xml: talking_wah_core1.dxe $(LDF_SRCS) $(SRC_OBJS)

# Other Targets
clean:
	-$(RM) $(DXE)$(DSP_DEPS)$(CC_DEPS)$(LINKER_LOG_OUTPUTS)$(C++_DEPS)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(ASM_DEPS)$(S_DEPS)$(C_DEPS)$(CPP_DEPS) talking_wah_core1.dxe
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
