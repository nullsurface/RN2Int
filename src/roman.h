#ifndef ROMAN_H
#define ROMAN_H

// Converts roman numeral to int
int romanToInt(char* str);

// "map" that returns value for given RN char 
int valueOf(char c);

// Block
struct block {
    char chars[5];
	int len;
};

typedef struct block Block;

// Returns first block 0-3 chars
Block getFirstBlock(char* str);

#endif
