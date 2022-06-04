#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}

int lcs(string x, string y, int m, int n)
{
    if(x[0]==0 || y[0]== 0)
    {
        return 0;
    }
    else if(x[m-1] == y[n-1])
    {
        return 1 + lcs(x,y,m-1,n-1)
    }
    else
    {
        return max(lcs(x,y,m,n-1) , lcs(x,y,m-1,n));
    }
}

int main()
{
    int m,n;
    string x,y;
    cin>>x>>y;
    m = x.length();
    n = y.length();
    cout<<"The LCS is : "<<lcs(x,y,m,n)<<endl;
    return 0;
}