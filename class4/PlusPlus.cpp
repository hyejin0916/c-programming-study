#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("현재 x는 %d입니다.\n", x); // 0
    x++;
    printf("현재 x는 %d입니다.\n", x); // 1
    printf("현재 x는 %d입니다.\n", x--); // printf문이 출력된 이후에 --가 이루어짐 -> 1
    printf("현재 x는 %d입니다.\n", x); // 0
    printf("현재 x는 %d입니다.\n", --x); // --가 먼저 실행되고 printf문이 출력됨 -> -1
    return 0;
}