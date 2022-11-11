#include "roman.h"
#include <string.h>
#include <stdio.h>

int romanToInt(char* str) {
    int num = 0;
	Block sub = getFirstBlock(str); // Gets the first block 0-3 chars
	switch (sub.len) {
		case 0:
			return num;
			break;
		case 1:
            num += valueOf(sub.chars[0]) + romanToInt(str + sub.len);
			break;
        case 2:
            if (valueOf(sub.chars[0]) < valueOf(sub.chars[1]))
                num += valueOf(sub.chars[1]) - valueOf(sub.chars[0]) + romanToInt(str + sub.len);
            else
                num += valueOf(sub.chars[0]) + valueOf(sub.chars[1]) + romanToInt(str + sub.len); 
            break;
        case 3:
            if (valueOf(sub.chars[0]) < valueOf(sub.chars[1]))
                num += valueOf(sub.chars[1]) - valueOf(sub.chars[0]) + valueOf(sub.chars[2]) + romanToInt(str + sub.len);
            else 
                num += valueOf(sub.chars[0]) + valueOf(sub.chars[1]) + valueOf(sub.chars[2]) + romanToInt(str + sub.len);
            break;
        case 4:
            if (valueOf(sub.chars[0]) < valueOf(sub.chars[1]))
                num += valueOf(sub.chars[1]) - valueOf(sub.chars[0]) + valueOf(sub.chars[2]) + valueOf(sub.chars[3]) + romanToInt(str + sub.len);
            else 
                num += valueOf(sub.chars[0]) + valueOf(sub.chars[1]) + valueOf(sub.chars[2]) + valueOf(sub.chars[3]) + romanToInt(str + sub.len);

            break;
	}				

    return num;
}

Block getFirstBlock(char* str) {
	Block sub;
    sub.len = 0;
	for (int i = 0; i < 4; i++) {
        if (str[i] == '\0') {
            printf("BLOCK SIZE: %d\n", sub.len);
			return sub;
        } else {
            if (valueOf(str[i]) < valueOf(str[i + 1]) && i != 0) {
                printf("block size: %d\n", sub.len);
                return sub;
            }
			sub.len++;
			sub.chars[i] = str[i];
		}
    }

    printf("BLOCK SIZE: %d\n", sub.len);
	return sub;
}

int valueOf(char c) {
	switch (c) {
		case 'I':
			return 1;
			break;
		case 'V':
			return 5;
			break;
		case 'X':
			return 10;
			break;
		case 'L':
			return 50;
			break;
		case 'C':
			return 100;
			break;
		case 'D':
			return 500;
			break;
		case 'M':
			return 1000;
			break;
        case '\0':
            return -1;
            break;
		}
	return 0;
}

