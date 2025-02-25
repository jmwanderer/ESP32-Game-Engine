#include "EDGE.h"

EDGE::EDGE(const DisplayConfig& config) : renderer(config) {
    previousMillis = 0;
    deltaTime = 0;
}

EDGE::~EDGE() {}

void EDGE::init() {
    renderer.init();
    inputManager.init();
}

void EDGE::update() {
    unsigned long currentMillis = millis();
    deltaTime = currentMillis - previousMillis;
    previousMillis = currentMillis;

    inputManager.update(deltaTime);
    sceneManager.update(deltaTime);
}

void EDGE::draw() {
    renderer.beginFrame();
    sceneManager.draw(renderer);
    renderer.endFrame();
}

void EDGE::setScene(Scene* newScene) {
    sceneManager.setCurrentScene(newScene);
}

Renderer& EDGE::getRenderer() {
    return renderer;
}