#include <stdio.h>

// nCr은 r이 0이거나 n이라면 1
// 아니라면, nCr(n-1,r-1)+nCr(n-1,r)
int nCr(int n, int r)
{
    if(r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}
int main(void)
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", nCr(n, r));
    return 0;
}