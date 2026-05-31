#include <stdio.h>

struct point
{
    int x;
    int y;
};

void comparePoint(struct point p1, struct point p2)
{
    if((p1.x == p2.x) && (p1.y == p2.y))
    {
        printf("p1과 p2는 같습니다.\n");
    }
    else{
        printf("p1과 p2는 다릅니다.\n");
    }
}


int main(void)
{
    struct point p1;
    struct point p2;

    p1.x = 30;
    p1.y = 10;

    p2.x = 30;
    p2.y = 20;

    // if(p1 == p2)
    // {
    //     printf("p1과 p2는 같습니다.");
    // } -> 오류 발생(같은 구조체 타입이라도 두 개의 변수 자체를 비교하기에는 불가능)

    comparePoint(p1, p2);
    return 0;
}