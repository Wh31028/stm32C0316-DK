################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/src/led.c \
../App/src/pwm.c \
../App/src/utils.c 

OBJS += \
./App/src/led.o \
./App/src/pwm.o \
./App/src/utils.o 

C_DEPS += \
./App/src/led.d \
./App/src/pwm.d \
./App/src/utils.d 


# Each subdirectory must supply rules for building sources it contributes
App/src/%.o App/src/%.su App/src/%.cyclo: ../App/src/%.c App/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32C031xx -c -I../Core/Inc -I../Drivers/STM32C0xx_HAL_Driver/Inc -I../Drivers/STM32C0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32C0xx/Include -I../Drivers/CMSIS/Include -I"/Users/wh31028/repos/stm32C0316-DK/stm32c0_pwm/App/include" -I"/Users/wh31028/repos/stm32C0316-DK/stm32c0_pwm/App/src" -I"/Users/wh31028/repos/stm32C0316-DK/stm32c0_pwm/App" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-App-2f-src

clean-App-2f-src:
	-$(RM) ./App/src/led.cyclo ./App/src/led.d ./App/src/led.o ./App/src/led.su ./App/src/pwm.cyclo ./App/src/pwm.d ./App/src/pwm.o ./App/src/pwm.su ./App/src/utils.cyclo ./App/src/utils.d ./App/src/utils.o ./App/src/utils.su

.PHONY: clean-App-2f-src

