#include<iostream>
#include<math.h>
#include<time.h>
#include<unistd.h>
using namespace std;
int main()
{
    int len,i,randNum;
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
        //srand(i);//seeding with loop value
        srand(time(0)); 
        usleep(3000000);
        randNum=rand()%2;//random 0 or 1
        cipher_stream[i]=randNum;//adding new bit to cipher array 
        cipher_text[i]=xor_op(bit_stream[i],cipher_stream[i]);//Generating ciphertext with XOR 
        decrypted[i]=xor_op(cipher_text[i],cipher_stream[i]);//Decrypting Ciphertext with XOR 
    }
    cout<<"\nThe plaintext is :      ";//Outputting plaintext
    for(i=0;i<len;i++)
    {
        cout<<bit_stream[i];
    }
    cout<<"\nThe cipher stream  is : ";//Outputting cipher
    for(i=0;i<len;i++)
    {
        cout<<cipher_stream[i];
    }
    cout<<"\nThe encrypted text is : ";//Outputting encrypted text
    for(i=0;i<len;i++)
    {
        cout<<cipher_text[i];
    }
    cout<<"\nThe decrypted text is : ";//Outputting decrypted text
    for(i=0;i<len;i++)
    {
        cout<<decrypted[i];
    }
    cout<<"\n";
    return 0;
}