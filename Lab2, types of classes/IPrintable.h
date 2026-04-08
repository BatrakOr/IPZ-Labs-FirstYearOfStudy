#ifndef IPRINTABLE_H
#define IPRINTABLE_H

// 8. Клас-інтерфейс (тільки чисто віртуальні функції)
class IPrintable {
public:
    virtual void printToConsole() = 0;
    virtual ~IPrintable() {}
};

#endif