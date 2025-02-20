#pragma once
#include <Arduino.h>

#define BUTTON_PIN D2  // Adjust this for your hardware

class InputManager {
public:
    void init();
    void update(unsigned long dt);
    bool isButtonPressed(int button_num=0);
    bool isButtonDown(int button_num=0);
    bool isButtonReleased(int button_num=0);

private:
    bool buttonState;
    bool lastButtonState;
};
