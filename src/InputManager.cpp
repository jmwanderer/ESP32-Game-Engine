#include <Button.h>
#include "InputManager.h"

Button button(BUTTON_PIN);

void InputManager::init() {
    button.begin();
}

void InputManager::update(unsigned long dt) {
}

bool InputManager::isButtonPressed() {
    return button.pressed();
}

bool InputManager::isButtonDown() {
    button.has_changed();  // 'Consume' the button press
    return button.read() == Button::PRESSED;
}

bool InputManager::isButtonReleased() {
    return button.released();
}
