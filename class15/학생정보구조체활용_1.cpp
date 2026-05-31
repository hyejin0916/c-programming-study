#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s;
    
    printf("학번을 입력하세요 : ");
    scanf("%d", &s.number);
    printf("이름을 입력하세요 : ");
    scanf("%s", s.name); // 배열을 그 자체로 포인터역할을 맡고있기때문에 &넣을 필요가 없음
    printf("학점을 입력하세요 : ");
    scanf("%lf", &s.grade); // %lf: double 타입이 입력받을때, %f: float 타입이 입력받을때


    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.2f\n", s.grade);
}