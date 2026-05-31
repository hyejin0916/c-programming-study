#include <stdio.h>

int main(void)
{
    char x = 'A';
    // 내부적으로 char는 숫자를 이용해서 운영되고 있음
    printf("%c\n", x); // A 출력
    char y = 65;
    printf("%c\n", y); // A 출력
    int z = 65;
    printf("%c\n", z); // A 출력
    char t = 'B';
    printf("%d\n", t); // 66 출력
    return 0;
}