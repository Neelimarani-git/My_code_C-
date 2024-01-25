// Singleton.h

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
public:
    // Public method to provide the global point of access
    static Singleton& getInstance();

    // Example method to demonstrate usage
    void showMessage();

    // Delete copy constructor and assignment operator to prevent duplication
    Singleton(const Singleton&) = delete;
    void operator=(const Singleton&) = delete;

private:
    // Private constructor to prevent external instantiation
    Singleton();
};

#endif // SINGLETON_H
