#include<iostream>
#include<math.h>
#include<time.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
using namespace std;
char hex_char[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char sub[16] = {'E','4','D','1','2','F','B','8','3','A','6','C','5','9','0','7'};
char inv_sub[16] = {'E','3','4','8','1','C','A','F','7','D','9','6','B','2','0','5'};
int perm[8] = {0, 3, 4, 6, 2, 5, 1, 7};
int inv_perm[8] = {0, 6, 4, 1, 2, 5, 3, 7};
char s_box(char a)
{
    if(a=='0')
    return 'E';
    if(a=='1')
    return '4';
    if(a=='2')
    return 'D';
    if(a=='3')
    return '1';
    if(a=='4')
    return '2';
    if(a=='5')
    return 'F';
    if(a=='6')
    return 'B';
    if(a=='7')
    return '8';
    if(a=='8')
    return '3';
    if(a=='9')
    return 'A';
    if(a=='A')
    return '6';
    if(a=='B')
    return 'C';
    if(a=='C')
    return '5';
    if(a=='D')
    return '9';
    if(a=='E')
    return '0';
    if(a=='F')
    return '7';
}
string key_gen(int n) {
    string rand_string = "";
    srand(time(NULL));
    int rnum;
    for (int i=0;i<n;i++) 
    {
        rnum=rand() % 16;
        rand_string+=hex_char[rnum];
    }
    return rand_string;
}


string hextobin(char a)
{
    {
    string bval;
    if(a=='0')
    {
        bval="0000";
        return bval;
    }
    if(a=='1')
    {
        bval="0001";
        return bval;
    }
    if(a=='2')
    {
        bval="0010";
        return bval;
    }
    if(a=='3')
    {
        bval="0011";
        return bval;
    }
    if(a=='4')
    {
        bval="0100";
        return bval;
    }
    if(a=='5')
    {
        bval="0101";
        return bval;
    }
    if(a=='6')
    {
        bval="0110";
        return bval;
    }
    if(a=='7')
    {
        bval="0111";
        return bval;
    }
    if(a=='8')
    {
        bval="1000";
        return bval;
    }
    if(a=='A')
    {
        bval="1010";
        return bval;
    }
    if(a=='B')
    {
        bval="1011";
        return bval;
    }
    if(a=='C')
    {
        bval="1100";
        return bval;
    }
    if(a=='D')
    {
        bval="1101";
        return bval;
    }
    if(a=='E')
    {
        bval="1110";
        return bval;
    }
    if(a=='F')
    {
        bval="1111";
        return bval;
    }
}
}

int main()
{
    string key=key_gen(24);
    char tmp;
    cout<<"Random key generated is : "<<key<<"\n";
    char ptext[8],stext[8],sptext[8];
    cout<<"\nEnter 8 bits of text\n";
    int i,j;
    for(i=0;i<8;i++)
    cin>>ptext[i];
    string keys[4][8];
    j=0;
    cout<<" Key 1 : ";
    for(i=0;i<8;i++)
    {
        keys[0][j]=key[i];
        cout<<keys[0][j];
        j++;
    }
    j=0;
    cout<<"\n Key 2 : ";
    for(i=4;i<12;i++)
    {
        keys[1][j]=key[i];
        cout<<keys[1][j];
        j++;
    }
    j=0;
    
    cout<<"\n Key 3 : ";
    for(i=8;i<16;i++)
    {
        keys[2][j]=key[i];
        cout<<keys[2][j];
        j++;
    }
    j=0;
    cout<<"\n Key 4 : ";
    for(i=12;i<20;i++)
    {
        keys[3][j]=key[i];
        cout<<keys[3][j];
        j++;
    }
    cout<<"\n";
    cout<<"Substituting : ";
    for(i=0;i<8;i++)
    {
        tmp=s_box(ptext[i]);
        cout<<tmp;
        stext[i]=tmp;
    }
    cout<<"\n Permutating : ";
    int pval;
    for(i=0;i<8;i++)
    {
        pval=perm[i];
        tmp=stext[pval];
        sptext[i]=tmp;
        cout<<tmp;
    }
    return 0;
}