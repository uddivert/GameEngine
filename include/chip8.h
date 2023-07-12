#include <stdint.h>

#ifndef CHIP8_H
#define CHIP8_H
struct chip8 {
    uint8_t memory[4096]; 
    uint8_t varReg[16];
    uint8_t delayTimer;
    uint8_t soundTimer;
    uint16_t stackPointer[16];
    int16_t progCounter;
    int *display[32];
}; // chip8

extern uint16_t fonts[80]; 
int load_Memory(struct chip8 c8, char* fileName);
int load_keys(char *fileName);
/*
void chipStack(uint16_t addr);
void soundTimer();
void dispTimer();
*/
#endif /* CHIP8_H */
