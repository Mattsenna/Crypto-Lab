#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int xor_op(int a, int b)
{
    if((a==0)&&(b==0))
    return 0;
    if((a==0)&&(b==1))
    return 1;
    if((a==1)&&(b==0))
    return 1;
    if((a==1)&&(b==1))
    return 0;
}
int bintoint(int ar[5])
{
    int i,tval=0;
    for(i=0;i<5;i++)
    {
        tval+=pow(2,((4-i)*ar[i]));
    }
    return tval;
}
int main()
{
    int arr[5]={0,0,0,1,1};
    cout<<bintoint(arr[0]);
    return 0;
}