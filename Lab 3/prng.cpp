#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int xor_op(int a, int b)
{
    if((a==0)&&(b==0))
    return 0;
    if((a==0)&&(b==1))
    return 1;
    if((a==1)&&(b==0))
    return 1;
    if((a==1)&&(b==1))
    return 0;
}
/*int bintoint(int ar[5])
{
    int i,tval=0;
    for(i=0;i<5;i++)
    {
        tval+=math.pow(2,((4-i)*ar[i]));
    }
    return tval;
*/
int main()
{
    int a,b,s[3][5],pt[3][5],ct[3][5],i,j,k1=0,k2=0,k3=0;
    cout<<"\nEnter 15 bits of plaintext\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>pt[i][j];
        }
    }
    cout<<"\nEnter 15 bits of ciphertext\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>ct[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            s[i][j]=xor_op(ct[i][j],pt[i][j]);
            cout<<s[i][j];
        }
        cout<<"\n\n";
    }
    for(i=0;i<5;i++)
    {
        if(s[0][i]==1)
        k1+=pow(2,((4-i)*(s[0][i])));
        else
        j++;
    }
    cout<<"\nKey 1 = "<<k1%26;
    for(i=0;i<5;i++)
    {
        if(s[1][i]==1)
        k2+=pow(2,((4-i)*(s[1][i])));
        j++;
    }
    cout<<"\nKey 2 = "<<k2%26;
    for(i=0;i<5;i++)
    {
        if(s[2][i]==1)
        k3+=pow(2,((4-i)*(s[2][i])));
        else
        j++;
    }
    cout<<"\nKey 3 = "<<k3%26;
       
}