#include <LEDControl.h> // Подключаем библиотеку

const int redDecreasePin = 2;
const int redIncreasePin = 3;
const int greenDecreasePin = 4;
const int greenIncreasePin = 5;
const int blueDecreasePin = 6;
const int blueIncreasePin = 7;

int redBrightness = 250;
int greenBrightness = 250;
int blueBrightness = 250;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    pinMode(redDecreasePin, INPUT_PULLUP);
    pinMode(redIncreasePin, INPUT_PULLUP);
    pinMode(greenDecreasePin, INPUT_PULLUP);
    pinMode(greenIncreasePin, INPUT_PULLUP);
    pinMode(blueDecreasePin, INPUT_PULLUP);
    pinMode(blueIncreasePin, INPUT_PULLUP);
}

void loop() {
    button(redDecreasePin, redBrightness, false);
    button(redIncreasePin, redBrightness, true);
    button(greenDecreasePin, greenBrightness, false);
    button(greenIncreasePin, greenBrightness, true);
    button(blueDecreasePin, blueBrightness, false);
    button(blueIncreasePin, blueBrightness, true);

    updateLED(redBrightness, greenBrightness, blueBrightness);
}