#pragma once
#include <Arduino.h>

#define BUTTON_PIN D2  // Adjust this for your hardware

class InputManager {
public:
    void init();
    void update(unsigned long dt);
    bool isButtonClicked();     // True on press and release 
    bool isButtonPressed();     // True on press
    bool isButtonReleased();    // True on release
    bool isButtonDown();        // True while button is pressed

private:
    bool click_start;
};
