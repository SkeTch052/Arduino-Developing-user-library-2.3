#include "LEDControl.h"

// Определяем пины для светодиодов
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

const int brightnessStep = 50;
const int maxBrightness = 250;

// Функция для обновления состояния светодиода
void updateLED(int redBrightness, int greenBrightness, int blueBrightness) {
    analogWrite(redPin, redBrightness);
    analogWrite(greenPin, greenBrightness);
    analogWrite(bluePin, blueBrightness);
}

// Функция для изменения яркости
void changeBrightness(int &brightness, bool increase) {
    if (increase) {
        brightness = min(brightness + brightnessStep, maxBrightness);
    } else {
        brightness = max(brightness - brightnessStep, 0);
    }
}

// Функция обработки нажатий кнопок
void button(int pin, int &brightness, bool increase) {
    if (digitalRead(pin) == LOW) {
        delay(5);
        if (digitalRead(pin) == LOW) {
            changeBrightness(brightness, increase);
            while (digitalRead(pin) == LOW) {}
        }
    }
}