#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>

class Memory
{
public:
    Memory();
    uint8_t get(uint16_t address);
    uint32_t get32(uint16_t address);
    void set(uint16_t address, uint8_t value);
    void set(uint16_t address, uint32_t value);
    ~Memory();

private:
    uint8_t* mem;
    union ByteAccess {
        int32_t intValue;
        char byteValue[4];
    };

};

#endif // MEMORY_H
