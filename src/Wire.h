#pragma once

#include <cstdint>

enum PinOutType {
    INPUT,
    OUTPUT
};

enum PinState {
    HIGH,
    LOW
};

class TwoWire {
public:
    void beginTransmission(uint8_t address) {};
    void write(uint8_t value) {};
    bool endTransmission(bool needRelease = false) { return false; };
    void requestFrom(uint8_t address, uint8_t value) {};
    bool available() { return false; };
    uint8_t read() { return 0; };
    void write(const uint8_t* data, int length) {};
};

extern TwoWire Wire;

void pinMode(uint8_t pin, uint8_t mode);
void digitalWrite(uint8_t pin, uint8_t state);

uint32_t millis();
void delay(uint32_t value);
void delayMicroseconds(uint32_t value);
