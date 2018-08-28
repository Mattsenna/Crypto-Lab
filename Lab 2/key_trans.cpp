/*Question 3 A : Implementation of keyed transposition Cipher*/
#include<iostream>
using namespace std;
int main()
{
    char pt[100],ct[100];
    int len,plen,i,ll,j;
    cout<<"\n Enter the plaintext you want to encrypt with no spaces. ";
    cout<<"Note that the length must be a multiple of perm length otherwise you will have to pad the word\n";
    cin>>pt;
    cout<<"\n Enter the word length\n";
    cin>>len;
    cout<<"\n Enter the permutation length\n";
    cin>>plen;
    int perm[plen];
    cout<<"\n Enter the permutation sequence\n";
    for(i=0;i<plen;i++)
    cin>>perm[i];
    ll=len/plen;
    char pp[ll][plen];
    ll++;
    for(i=0;i<ll;i++)
    {
        for(j=0;j<plen;j++)
        {
            pp[i][j]=pt[(i*ll)+j];
            cout<<pp[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n The cipher text is : \n";
    for(i=0;i<ll;i++)
    {
        for(j=0;j<plen;j++)
        {
            cout<<pp[i][(perm[j])-1];
        }
        cout<<"\n";
    }
    return 0;
}