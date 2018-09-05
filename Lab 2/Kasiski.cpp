#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[]="VHVSSPQUCEMRVBVBBBVHVSURQGIBDUGRNICJQUCERVUAXSSR";
    int len,m3,m4,i,j,flag;
    flag=0;
    len=strlen(str);
    int three_freq[46];
    int four_freq[45];
    char tss[46][3];
    char fss[45][4];
    for(i=0;i<len-3;i++)
    {
        for(j=0;j<4;j++)//Substring length 4
        {
            //cout<<str[i+j];
            fss[i][j]=str[i+j];
        }
    }
    for(i=0;i<len-2;i++)//Substring length 3
    {
        for(j=0;j<3;j++)
        {
            //cout<<str[i+j];
            tss[i][j]=str[i+j];
        }
    }
    cout<<"\n"<<fss[0][0];
}