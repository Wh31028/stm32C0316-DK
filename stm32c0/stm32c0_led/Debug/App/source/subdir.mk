################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/source/led.c \
../App/source/utils.c 

OBJS += \
./App/source/led.o \
./App/source/utils.o 

C_DEPS += \
./App/source/led.d \
./App/source/utils.d 


# Each subdirectory must supply rules for building sources it contributes
App/source/%.o App/source/%.su App/source/%.cyclo: ../App/source/%.c App/source/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32C031xx -c -I../Core/Inc -I../Drivers/STM32C0xx_HAL_Driver/Inc -I../Drivers/STM32C0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32C0xx/Include -I../Drivers/CMSIS/Include -I"C:/repos/stm32/stm32c0/stm32c0_led/App" -I"C:/repos/stm32/stm32c0/stm32c0_led/App/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-App-2f-source

clean-App-2f-source:
	-$(RM) ./App/source/led.cyclo ./App/source/led.d ./App/source/led.o ./App/source/led.su ./App/source/utils.cyclo ./App/source/utils.d ./App/source/utils.o ./App/source/utils.su

.PHONY: clean-App-2f-source

