################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/string\ sample.c 

OBJS += \
./src/string\ sample.o 

C_DEPS += \
./src/string\ sample.d 


# Each subdirectory must supply rules for building sources it contributes
src/string\ sample.o: ../src/string\ sample.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/string sample.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


