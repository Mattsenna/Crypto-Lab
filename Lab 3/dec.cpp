#include<iostream>
#include<string.h>
#include<math.h>
#include<fstream>
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
int main()
{
    ofstream op;
    op.open("output.txt");

    char cipher[]="KQEREJEBCPPCJCRKIEACUZBKRVPKRBCIBQCARBJCVFCUPKRIOFKPACUZQEPBKRXPEIIEABDKPBCPFCDCCAFIEABDKPBCPFEQPKAZBKRHAIBKAPCCIBURCCDKDCCJCIDFUIXPAFFERBICZDFKABICBBENEFCUPJCVKABPCYDCCDPKBCOCPERKIVKSCPICBRKIJPKABI";
    int tmp;
    char b;
    int i,j,k,iter;
    int mulinv[11]={3,5,7,9,11,15,17,19,21,23,25};
    for(i=0;i<11;i++)
    {
        for(j=1;j<26;j++)
        {
            op<<"\n\n \n\n"; 
            for(k=0;k<strlen(cipher);k++)
            {
            tmp=cipher[k];
            tmp=tmp-65;
            tmp=(tmp*mulinv[i])%26;
            tmp=(tmp+j)%26;
            b=numtochar(tmp);
            op<<b;
            }
        }
    }
    return 0;
}
