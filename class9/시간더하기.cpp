#include <stdio.h>

// 전역변수(프로그램 전체에서 사용할 수 있는 변수)
int hour;
int minute;
int minuteAdd;

void counter() // void: 함수의 반환값이 없을때 반환 타입
{
    minute += minuteAdd;
    hour += minute / 60;
    minute %= 60;
    hour %= 24;
}


int main(void)
{
    printf("시를 입력하세요 : ");
    scanf("%d", &hour);
    printf("분을 입력하세요 : ");
    scanf("%d", &minute);
    printf("더할 분을 입력하세요 : ");
    scanf("%d", &minuteAdd);
    counter();
    printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);
    return 0;
}