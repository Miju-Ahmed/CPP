#include<stdio.h>
int main(void)
{
    for(int i=0; i<6; i++)
    {
        for(int j = 65; j<75; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    for(int i=0; i<6; i++)
    {
        for(char j = 'A'; j<='J'; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    for(int i=0; i<6; i++)
    {
        for(int j = 65 + i; j<75; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    for(int i=0; i<6; i++)
    {
        for(int j = 65; j<75-i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}