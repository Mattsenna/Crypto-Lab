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
        cout<<"enter the word to be encrypted and length";
        int len;
        char enc[100];
        char dec[100];
        char dec2[100];
        cin>>enc;
        cin>>len;
        //cout<<enc;
        cout<<"enter the offset";
        int i,j;
        int tmp;
        int off;
        cin>>off;
        char b;
        cout<<"\n";
        for(i=0;i<len;i++)//ENCRYPTION
        {
                tmp=enc[i];
                tmp=tmp-65;
                tmp=tmp+off;
                b=numtochar(tmp);
                //cout<<b;
                dec[i]=b;
                
        }
        cout<<dec<<"\n";
        for(i=0;i<len;i++)
        {
                tmp=dec[i];
                tmp=tmp-65;
                tmp=tmp-off;
                b=numtochar(tmp);
                dec2[i]=b;
        }
        cout<<"\n"<<dec2;
        return 0;
}