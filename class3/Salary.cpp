#include <stdio.h>
#define MONTHS 12 // 상수에 대한 정의

// 연봉구하기
int main(void)
{
    double monthSalary = 1000.5; // 월급
    printf("$ %.2f", monthSalary * MONTHS);
    return 0;
}