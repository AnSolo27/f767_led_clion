//
// Created by ASolonovich on 02.10.2021.
//
#include "some_lib_cxx.h"
#include "main.h"
#include "cmsis_os.h"

extern "C" void main_thread();

void main_thread(void) {

    while(1) {
        HAL_GPIO_TogglePin(Led_Blue_GPIO_Port, Led_Blue_Pin);
        osDelay(100);
    }
}

