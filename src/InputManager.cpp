#include <Button.h>
#include "InputManager.h"

Button button(BUTTON_PIN);

void InputManager::init() {
    button.begin();
    click_start = false;
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

bool InputManager::isButtonClicked() {
    if (click_start) {
        if (isButtonReleased()) {
            click_start = false;
            return true;
        }
    } else {
        click_start = button.pressed();
    } 
    return false;
}
