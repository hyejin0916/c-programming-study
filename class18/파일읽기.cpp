#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int c;

    fp = fopen("input.txt", "r");

    if(fp == NULL)
    {
        printf("파일 열기에 실패했습니다.\n");
    }
    else
    {
        printf("파일 열기에 성공했습니다.\n");
    }

    while((c = fgetc(fp)) != EOF)
    // fgetcharacter: 지금 열려있는 파일에서 문자하나를 읽어서 c에 저장한다
    // EOF: 파일을 끝을 의미하는 엔드오브파일
    {
        putchar(c); // putchar: 콘솔창에 해당 문자 출력
    }
    printf("\n");

    fclose(fp);
    return 0;
}