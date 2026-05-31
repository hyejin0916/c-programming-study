#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("10진수로 출력 : %d\n", x); // %d가 원래 10진수로 출력됨
    printf("8진수로 출력 : %o\n", x); // %o: 8진수 출력
    printf("16진수로 출력 : %x\n", x); // %x: 16진수 출력
    return 0;
}