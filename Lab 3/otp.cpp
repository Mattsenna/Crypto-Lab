#include<iostream>
#include<math.h>
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
int main()
{
    int len,i,randNum;
    /*cout<<"\nEnter values of a and b\n";
    cin>>a>>b;
    c=xor_op(a,b);
    cout<<"\nXOR'd value = "<<c;*/
    cout<<"\nEnter length of bit stream\n";
    cin>>len;
    int bit_stream[len],cipher_stream[len],cipher_text[len],decrypted[len];  
    cout<<"\nEnter bit stream\n";
    for(i=0;i<len;i++)
    {
        cin>>bit_stream[i];
    } 
    for(i=0;i<len;i++)
    {
        srand(i);
        randNum=rand()%2;
        cipher_stream[i]=randNum;
        cipher_text[i]=xor_op(bit_stream[i],cipher_stream[i]);
        decrypted[i]=xor_op(cipher_text[i],cipher_stream[i]);
    }
    cout<<"\nThe plaintext is :      ";
    for(i=0;i<len;i++)
    {
        cout<<bit_stream[i];
    }
    cout<<"\nThe cipher stream  is : ";
    for(i=0;i<len;i++)
    {
        cout<<cipher_stream[i];
    }
    cout<<"\nThe encrypted text is : ";
    for(i=0;i<len;i++)
    {
        cout<<cipher_text[i];
    }
    cout<<"\nThe decrypted text is : ";
    for(i=0;i<len;i++)
    {
        cout<<decrypted[i];
    }
    cout<<"\n";
    return 0;
}