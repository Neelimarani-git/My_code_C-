// main.cpp

#include "singleton.h"

int main() {
    // Get the singleton instance
    Singleton& singletonInstance = Singleton::getInstance();

    // Use the singleton instance
    singletonInstance.showMessage();

    return 0;
}
