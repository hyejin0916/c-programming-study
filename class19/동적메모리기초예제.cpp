#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi; // pi: Pointer Integer
    pi = (int *)malloc(sizeof(int));
    // malloc: 메모리를 int의 크기만큼 할당해라.(int: 4byte)
    // (int *): 메모리를 할당한 다음에 그 부분의 주소를 가리켜라

    if(pi == NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1); // 프로그램 자체를 종료
    }
    *pi = 100; // pi라는 포인터 변수가 가르키는 주소의 값에 100을 넣음
    printf("*pi: %d\n", *pi);
    // 동적 메모리를 사용한 이후에는 무조건 해당 메모리는 반환합니다.

    free(pi); // 메모리 할당 해제
    return 0;
}