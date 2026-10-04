#ifndef __asgn4__
#define __asgn4__

/* the two lines above check to ensure
we haven't already included this header*/


/* your functions go here */
// Note: main() goes in the asgn4.c file


// the purpose of the function is to check whether a specifc bit is set,
// then return 1 if it is set, 0 if it is not set, and -1 if the position is invalid,
// the number is the int being checked, and the position is the bit position being checked (0-31)
int isBitSet(int number, int position) {
    if (position < 0 || position >= 32) {
        return -1; 
    }
    return (number >> position) & 1;
}
int setBit(int number, int position) {// the purpose of the function is to set a specific bit to 1, and return the new number
    if (position < 0 || position >= 32) {
        return number;
    }
    if (position ==31){// build the bit-31 mask without shifting into the sign bit.
        return number | ~((1 << 30) | ((1 << 30) - 1));
    }
    return number | (1 << position);
}
int clearBit(int number, int position) {// the purpose of the function is to clear a specific bit to 0, and return the new number
    if (position < 0 || position >= 32) {
        return number;
    }
    if (position ==31){// build the bit-31 mask without shifting into the sign bit.
        return number & ((1 << 30) | ((1 << 30) - 1));
    }
    return number & ~(1 << position);
}
int toggleBit(int number, int position) {// the purpose of the function is to toggle a specific bit, and return the new number
    if (position < 0 || position >= 32) {
        return number;
    }
    if (position ==31){// build the bit-31 mask without shifting into the sign bit.
        return number ^ ~((1 << 30) | ((1 << 30) - 1));
    }
    return number ^ (1 << position);
}
int multiplyBy2(int number){// the purpose of the function is to multiply a number by 2, and return the new number, the number argument is an int, and the function returns an int
    return number << 1;
}
int divideBy2(int number){// the purpose of the function is to divide a number by 2, and return the new number.
    return number >> 1;
}


// bonus function for bonus points. 
// countSetBits takes an int as an argument, and returns the number of bits that are set to 1 in the binary representation of that int.
int countSetBits(int number){
    int count = 0;
    int position = 0;
    while ( position < 32) {

        if (isBitSet( number, position) == 1) {
            count++;
        }
        position++;
    }
    return count; 

}


#endif