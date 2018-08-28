/*Question 1 A : Implementation of Vigenere Cipher*/
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
char pt[100];
char ct[100];
int ptl,keyl,i,tmp,j;
char key[100];
char b;
cout<<"Enter the plaintext to be encrypted with no spaces and length";
cin>>pt;
cin>>ptl;
cout<<"\nEnter the key to be used along with the length\n";
cin>>key;
cin>>keyl;
int keyval[keyl];
for(i=0;i<keyl;i++)
{
    keyval[i]=key[i]-65;
    //cout<<"\n"<<keyval[i];
}
cout<<"\n";
for(i=0;i<ptl;i++)
{
    tmp=(pt[i]+keyval[i%keyl]-65)%26;
    b=numtochar(tmp);
    //cout<<b;
    ct[i]=b;
}
cout<<"\n the encrypted text is : "<<ct<<"\n";
cout<<"\n the decrypted text is : ";
for(i=0;i<ptl;i++)
{
    tmp=(ct[i]-keyval[i%keyl]-65)%26;
    b=numtochar(tmp);
    cout<<b;
}
return 0;
}
