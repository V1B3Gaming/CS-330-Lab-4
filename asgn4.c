#include <stdio.h>
#include "asgn4.h"

int main(void){
    printf("isBitSet(45, 5): expected 1, got %d\n", isBitSet(45, 5));
    printf("isBitSet(45, 4): expected 0, got %d\n", isBitSet(45, 4));
    printf("isBitSet(45, 33): expected -1, got %d\n", isBitSet(45, 33));

    printf("setBit(10, 2): expected 14, got %d\n", setBit(10, 2));
    printf("setBit(10, 3): expected 10, got %d\n", setBit(10, 3));
    printf("setBit(10, 34): expected 10, got %d\n", setBit(10, 34));

    printf("clearBit(29, 2): expected 25, got %d\n", clearBit(29, 2));
    printf("clearBit(29, 1): expected 29, got %d\n", clearBit(29, 1));
    printf("clearBit(29, -3): expected 29, got %d\n", clearBit(29, -3));

    printf("toggleBit(20, 4): expected 4, got %d\n", toggleBit(20, 4));
    printf("toggleBit(20, 1): expected 22, got %d\n", toggleBit(20, 1));
    printf("toggleBit(20, 35): expected 20, got %d\n", toggleBit(20, 35));

    printf("multiplyBy2(11): expected 22, got %d\n", multiplyBy2(11));
    printf("multiplyBy2(6): expected 12, got %d\n", multiplyBy2(6));
    printf("multiplyBy2(19): expected 38, got %d\n", multiplyBy2(19));

    printf("divideBy2(26): expected 13, got %d\n", divideBy2(26));
    printf("divideBy2(19): expected 9, got %d\n", divideBy2(19));
    printf("divideBy2(5): expected 2, got %d\n", divideBy2(5));

    printf("countSetBits(45): expected 4, got %d\n", countSetBits(45));
    printf("countSetBits(0): expected 0, got %d\n", countSetBits(0));
    printf("countSetBits(-2): expected 31, got %d\n", countSetBits(-2));

    return 0;
}