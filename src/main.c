#include <stdio.h>
#include "roman.h"

int main() {
    char str1[] = "I";
    char str2[] = "II";
    char str3[] = "III";
    char str4[] = "IV";
    char str5[] = "V";
    char str6[] = "VI";
    char str7[] = "VII";
    char str8[] = "X";
    char str9[] = "IX";
    char str10[] = "VIII";
    char str11[] = "DXV";
    char str12[] = "DXIV";
    char str13[] = "CXL";
    char str14[] = "DXIV";
    char str15[] = "MDXXXIV";
    char str16[] = "MCMXCVI";

    printf("%d\n", romanToInt(str1));
    printf("%d\n", romanToInt(str2));
    printf("%d\n", romanToInt(str3));
    printf("%d\n", romanToInt(str4));
    printf("%d\n", romanToInt(str5));
    printf("%d\n", romanToInt(str6));
    printf("%d\n", romanToInt(str7));
    printf("%d\n", romanToInt(str8));
    printf("%d\n", romanToInt(str9));
    printf("%d\n", romanToInt(str10));
    printf("%d\n", romanToInt(str11));
    printf("%d\n", romanToInt(str12));
    printf("%d\n", romanToInt(str13));
    printf("%d\n", romanToInt(str14));
    printf("%d\n", romanToInt(str15));
    printf("%d\n", romanToInt(str16));

    return 0;
}
