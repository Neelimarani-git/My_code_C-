// Singleton.cpp

#include "singleton.h"
#include <iostream>
using namespace std;

// Initialize the static instance
Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

// Private constructor to prevent external instantiation
Singleton::Singleton() {
    // Initialization code, if needed
}

// Example method implementation
void Singleton::showMessage() {
    cout << "Hello, I am a Singleton!" << std::endl;
}
