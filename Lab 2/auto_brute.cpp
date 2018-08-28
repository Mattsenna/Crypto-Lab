/*Question 2 B : Autokey bruteforcing with given string*/
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
    int i,j,k,tmp,tmp2,ptl,key;
    char pt[]="YRRQKYTMTCMCLHBWONB";
    char tp[19];
    char b;
    ptl=19;
    for(i=1;i<=26;i++)
    {
        tmp=(pt[0]+i-65)%26;
        tmp2=tmp;
        b=numtochar(tmp);
        cout<<b;
        tp[0]=b;
        for(j=1;j<19;j++)
        {
            //cout<<pt[j];
            tmp=(pt[j]+tp[j-1]-130)%26;
            //cout<<tmp<<"\n";
            b=numtochar(tmp);
            tp[j]=b;
            cout<<b;
        }
        cout<<"\n";
    }
    return 0;
}