#include <stdio.h> // printf같은걸 사용할 수 있는 라이브러리
#include <limits.h> // 변수들, 자료형에 따른 한계값을 포함하고 있는 라이브러리

int main(void)
{
    int x = INT_MAX; //INT_MAX: C언어에서 기본적으로 제공하는 int형이 가질 수 있는 최대값
    printf("int형의 최대값 x는 %d입니다.\n", x);
    printf("x + 1은 %d입니다.\n", x+1); // 오버플로우 되기때문에 최소값으로 가짐
    return 0;
}