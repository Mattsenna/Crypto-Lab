#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a, int b)
{
	int q,r;
	q=floor(a/b);
	r=a-b*q;
	while (r!=0)
	{
		a=b;
		b=r;
		q=floor(a/b);
		r=a-b*q;
	}
	return b;
}
int mulinv(int a)
{
	int i;
	int minv;
	for(i=1;i<26;i++)
		{
            if ((a*i)%26==1)
			minv=i;
		}
		return minv;
}
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
        int offm,offa;
        int i,j;
        int tmp,in;
        char enc[100];
        char dec[100];
        char dec2[100];
        cin>>enc;
        cin>>len;
		cout<<"Enter the additive key";
		cin>>offa;
        cout<<"The possible multiplicative offsets are : 3,5,7,9,11,15,17,19,21,23,25. Enter your choice.";
        cin>>offm;
        in=mulinv(offm);
        char b;
        cout<<"\n";
        for(i=0;i<len;i++)//ENCRYPTION
        {
                tmp=enc[i];
                tmp=tmp-65;
                tmp=((tmp*offm)+offa)%26;
                b=numtochar(tmp);
                cout<<b;
                dec[i]=b;

        }
        cout<<"\n DECRYPTION : \n";
        for(i=0;i<len;i++)//DECRYPTION
        {
                tmp=dec[i];
                tmp=tmp-65;
                tmp=((tmp*in)-offa)%26;
                b=numtochar(tmp);
                cout<<b;
                //dec[i]=b;

        }
        /*for(i=0;i<len;i++)//ENCRYPTION
		{
			tmp=dec[i];
			tmp=tmp-65;
			tmp=tmp+offa;
			b=numtochar(tmp);
            cout<<b;
			dec[i]=b;
		}*/
	//cout<<"Encrypted Text is : "<<dec;
    return 0;
}