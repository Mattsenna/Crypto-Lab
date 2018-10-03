#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
using namespace std;
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        cout<<time(0)<<"\n";
        usleep(300000);
    }
}