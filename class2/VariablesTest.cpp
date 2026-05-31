#include <stdio.h>

int main(void)
{
    int x = 50;
    float y = 123456789.123456789;
    double z = 123456789.123456789;
    printf("x = %d\n", x);
    printf("y = %.2f\n", y); //%.2f: 소수점 둘째자리까지 출력 -> 4바이트라서 이상하게 표현됨
    printf("z = %.2f\n", z); // z: 8바이트
    return 0;
}