#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int rnum(int a)
{
    srand(a);
    int i;
    i=rand()%10;
    return i;
    
}
int main()
{
    int i,n,s;
    cout<<"\nEnter the number of random numbers you want\n";
    cin>>n;
    /*out<<"enter a seed value";
    cin>>s;*/
    for(i=0;i<n;i++)
    {
        cout<<rnum(i)<<" ";
    }
}