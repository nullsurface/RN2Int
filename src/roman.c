#include "roman.h"
#include <string.h>

int romanToInt(char* str) {
    int num = 0;

    for (int i = 0; i < strlen(str); i++) {
        switch (str[i]) {
            case 'I':
                num++;
                for (int j = 1; j < 3; j++) {
                    if (str[i + j] == '\0') 
                        break;
                    if (str[i + j] == 'I') {
                        num++;
                        i++;
                    } else {
                        if (str[i + j] == 'V') {
                            i++;
                            num += 3;
                        }
                    }
                }
                break;
            case 'V':
                break;
            case 'X':
                break;
            case 'L':
                break;
            case 'C':
                break;
            case 'D':
                break;
            case 'M':
                break;
        }
    }
    
    return num;
}
