#ifndef LEDControl_h
#define LEDControl_h

#include <Arduino.h>

// Определяем пины для светодиодов
extern const int redPin;
extern const int greenPin;
extern const int bluePin;

// Функция для обновления состояния светодиода
void updateLED(int redBrightness, int greenBrightness, int blueBrightness);

// Функция для изменения яркости
void changeBrightness(int &brightness, bool increase);

// Функция обработки кнопок
void button(int pin, int &brightness, bool increase);

#endif