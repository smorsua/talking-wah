################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := ${ComSpec}

-include ../makefile.init

RM := clean

# All of the sources participating in the build are defined here
-include sources.mk
-include system/sru/subdir.mk
-include system/pinmux/GeneratedSources/subdir.mk
-include system/subdir.mk
-include src/drivers/bm_uart_driver/subdir.mk
-include src/drivers/bm_twi_driver/subdir.mk
-include src/drivers/bm_sysctrl_driver/subdir.mk
-include src/drivers/bm_sru_driver/subdir.mk
-include src/drivers/bm_spi_driver/subdir.mk
-include src/drivers/bm_serial_eeprom_driver/subdir.mk
-include src/drivers/bm_gpio_driver/subdir.mk
-include src/drivers/bm_event_logging_driver/subdir.mk
-include src/drivers/bm_audio_flow_driver/subdir.mk
-include src/drivers/bm_adau_driver/configurations/subdir.mk
-include src/drivers/bm_adau_driver/subdir.mk
-include src/drivers/bm_a2b_driver/subdir.mk
-include src/common/subdir.mk
-include src/audio_frameworks/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
OBJS := $(SRC_OBJS)
# Quote makefile variable : OBJS 
OBJS := $(subst \ ,@, $(OBJS))
OBJS := $(foreach var, $(OBJS), "$(subst @, ,$(var))")
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
# Quote makefile variable : C_DEPS 
C_DEPS := $(subst \ ,@, $(C_DEPS))
C_DEPS := $(foreach var, $(C_DEPS), "$(subst @, ,$(var))")
# Quote makefile variable : CPP_DEPS 
CPP_DEPS := $(subst \ ,@, $(CPP_DEPS))
CPP_DEPS := $(foreach var, $(CPP_DEPS), "$(subst @, ,$(var))")

# All Target
all: talking_wah_core0

# Tool invocations
talking_wah_core0: $(USER_OBJS) $(SRC_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: CrossCore ARM Bare Metal C++ Linker'
	arm-none-eabi-g++ -mproc=ADSP-SC589 -msi-revision=1.0 -Wl,--gc-sections -mdebug-libs -o  "talking_wah_core0" @input-file.txt $(USER_OBJS) -lm
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(C_DEPS)$(CPP_DEPS) talking_wah_core0
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
