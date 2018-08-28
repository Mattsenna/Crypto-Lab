/*Question 2 A : Implementation of Autokey Cipher*/
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
    char pt[100],b;
    cout<<"\n Enter (in caps) the text you want to encrypt with no spaces\n";
    cin>>pt;
    cout<<"\n Enter the length of the text\n";
    cin>>ptl;
    cout<<"\nEnter the key for the first letter\n";
    cin>>key;
    tmp=(pt[0]+key-65)%26;
    tmp2=tmp;
    cout<<"\n The initial key value is now : "<<tmp<<"\n";
    b=numtochar(tmp);
    //cout<<"\n The initial letter is now : "<<b<<"\n";
    cout<<b;
    for(i=1;i<ptl;i++)
    {
        tmp=(pt[i]+pt[i-1]-130)%26;
        //cout<<tmp<<"\n";
        b=numtochar(tmp);
        //tmp2=tmp;
        cout<<b;
    }
    return 0;
}