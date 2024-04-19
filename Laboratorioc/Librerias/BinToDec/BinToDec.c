#include "BinToDec.h"

int32_t bin2dec(int32_t binary, bool sign){
    int32_t decimal = 0;
    int32_t base = 1;
    int32_t temp = binary;
    while (temp){
        int32_t last_digit = temp % 10;
        temp = temp / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    if (sign){
        decimal = -decimal;
    }
    return decimal;
}
