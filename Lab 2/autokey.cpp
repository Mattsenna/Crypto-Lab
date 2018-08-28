#include<iostream>
using namespace std;
char numtochar(int a)
{
        switch(a)
        {
                case 0 :
                return 'A';
                break;
                case 1 :
                return 'B';
                break;
                case 2 :
                return 'C';
                break;
                case 3 :
                return 'D';
                break;
                case 4 :
                return 'E';
                break;
                case 5 :
                return 'F';
                break;
                case 6 :
                return 'G';
                break;
                case 7 :
                return 'H';
                break;
                case 8 :
                return 'I';
                break;
                case 9 :
                return 'J';
                break;
                case 10 :
                return 'K';
                break;
                case 11 :
                return 'L';
                break;
                case 12 :
                return 'M';
                break;
                case 13 :
                return 'N';
                break;
                case 14 :
                return 'O';
                break;
                case 15 :
                return 'P';
                break;
                case 16 :
                return 'Q';
                break;
                case 17 :
                return 'R';
                break;
                case 18 :
                return 'S';
                break;
                case 19 :
                return 'T';
                break;
                case 20 :
                return 'U';
                break;
                case 21 :
                return 'V';
                break;
                case 22 :
                return 'W';
                break;
                case 23 :
                return 'X';
                break;
                case 24 :
                return 'Y';
                break;
                case 25 :
                return 'Z';
                break;
        }
}
int main()
{
    cout<<"enter the text to be encrypted and the wordlength\n";
    char pt[100];
    char ct[100];
    char b;
    int len,tmp,tmp2,tmp3,i,j,k;
    cin>>pt>>len;
    cout<<"\n Enter the starting code";
    int c;
    cin>>c;
    tmp=(pt[0]+c-65)%26;
    b=numtochar(tmp);
    ct[0]=b;
    //cout<<b;
    for(i=1;i<len;i++)
    {
        tmp=(pt[i]-65+pt[i-1])%26;
        b=numtochar(tmp);
        ct[i]=b;
        //cout<<b;
    }
    cout<<"\n"<<ct;
    return 0;
}