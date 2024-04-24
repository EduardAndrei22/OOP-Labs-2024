#include "CircularString.h"

#include <iostream>

CircularString::CircularString(int capacity) : capacity(capacity), length(0) {
    buffer = new char[capacity];
    buffer[0] = '\0'; 
}

CircularString::CircularString(char character, int capacity) : capacity(capacity) {
    buffer = new char[capacity];
        buffer[0] = character;
 
    length = 1;
}

CircularString::~CircularString() {
    delete[] buffer;
}

CircularString::CircularString(const CircularString& other) : CircularString(other.capacity) {
    buffer = new char[capacity];
    for (int i = 0; i < capacity; ++i) {
        buffer[i] = other.buffer[i];
    }
}

CircularString& CircularString::operator=(const CircularString& other) {
    if (this != &other) {
        delete[] buffer;
        capacity = other.capacity;
        length = other.length;
        buffer = new char[capacity];
        for (int i = 0; i < capacity; ++i) {
            buffer[i] = other.buffer[i];
        }
    }
    return *this;
}

CircularString& CircularString::operator+=(char c) {
          buffer[length+1] = c;

    return *this;
}

CircularString& CircularString::operator++() {
    for (int i = 0; i < length - 1; ++i) {
        buffer[i] = buffer[i + 1];
    }
    buffer[length - 1] = buffer[0];
    return *this;
}

CircularString CircularString::operator++(int) {
    CircularString temp(*this);
    ++(*this);
    return temp;
}

CircularString& CircularString::operator--() {
    buffer[length] = buffer[length] - 1;
    return *this;
}

CircularString CircularString::operator--(int) {
    char firstChar = buffer[0];
    for (int i = 0; i < length - 1; ++i) {
        buffer[i] = buffer[i + 1];
    }
    buffer[length - 1] = firstChar;
    return *this;
}

CircularString::operator const char* () const {
    return buffer;
}

CircularString::operator int() const {
    return length;
}

char CircularString::operator[](int index) const {
    return buffer[index];
}

int CircularString::operator()(int index) const {
    return static_cast<int>(buffer[index % length]);
}