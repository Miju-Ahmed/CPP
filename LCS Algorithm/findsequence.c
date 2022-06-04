#include<stdio.h>
#include<string.h>

int max(int a, int b)
{
    return (a>b)? a:b;
}

int lcs(char *x, char *y, int m ,int n)
{
    if(m ==0 || n ==0)
    {
        return 0;
    }
    else if(x[m-1] == y[n-1])
    {
        return 1 + lcs(x,y,m-1,n-1);
    }
    else
    {
        return max(lcs(x,y,m,n-1) , lcs(x,y,m-1,n));
    }
}
int main()
{
    int m,n;
    char x[45],y[45];
    printf("Enter the two string: ");
    gets(x);
    gets(y);
    m = strlen(x);
    n = strlen(y);
    printf("LCS is : %d\n",lcs(x,y,m,n));
    return 0;
}