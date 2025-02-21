#include <Button.h>
#include "InputManager.h"

Button button(BUTTON_PIN);

void InputManager::init() {
    button.begin();
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    buttonState = false;
    lastButtonState = false;
}

void InputManager::update(unsigned long dt) {
}

bool InputManager::isButtonPressed(int button_num) {
    return button.pressed();
}

bool InputManager::isButtonDown(int button_num) {
    return button.read() == Button::PRESSED;
}

bool InputManager::isButtonReleased(int button_num) {
    return button.released();
}
