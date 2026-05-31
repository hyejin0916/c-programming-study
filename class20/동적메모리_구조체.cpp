#include <stdio.h>
#include <stdlib.h> // 동적메모리에 필요한 라이브러리
#include <string.h>


struct Book
{
    int number;
    char title[100];
};

// 현재 관리하는 책의 정보를 모두 출력하는 함수
void showBook(struct Book *p, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("번호 %d : %s\n", (p + i)->number, (p + i)->title);
    }
}


int main(void)
{
    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book)); // 총 2개의 Book 구조체 변수가 들어갈 수 있는 공간만큼 할당

    if(p == NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    p->number = 1; // 구조체 포인터는 ->로 해당 변수에 접근가능
    strcpy(p->title, "C Programming");

    (p + 1)->number = 2;
    strcpy((p + 1)->title, "Data Structure");

    showBook(p, 2);
    free(p);
    return 0;
}