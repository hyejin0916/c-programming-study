#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc = NULL;
    int i = 0;
    pc = (char *)malloc(100 * sizeof(char)); // 하나의 문자공간(char) * 100 => 100개의 문자의 공간

    if(pc == NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    // pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자 삽입
    for(i = 0; i < 26; i++) // 26: 알파벳 총 수
    {
        *(pc + i) = 'a' + i; // a = 97(ASCII), b = 98, c = 99 ...
        printf("pc: %s, i: %d\n", pc, i);
    }
    
    // ASCII 코드에서 0은 NULL을 의미함, 현재 i는 26이므로 마지막에 NULL을 넣겠다는 의미
    *(pc + i) = 0;

    printf("%s\n", pc); // %s: NULL값을 만날때까지 하나의 문자열로 인식하여 출력해줌
    free(pc);
    return 0;
}