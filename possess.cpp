#include<iostream>
using namespace std;
int main()
{
    int a[4]={32,552,63,2};
    int *p=a;
    for(int i=0;i<4;i++)
    cout<<*(p+i)<<" ";
}