#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<math.h>
#include<string>
using namespace std;
int round_pb[48]={14,17,11,24,1,5,3,29,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55,30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};
int exp_pb[48]={32,1,2,3,4,5,4,5,6,7,8,9,8,9,10,11,12,13,12,13,14,15,16,17,16,17,18,19,20,21,20,21,22,23,24,25,24,25,26,27,28,29,28,29,30,31,32,1};
char hdx[16]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int sb1[4][16]={{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}};
int sb2[4][16]={{15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10},{3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5},{0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15},{13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9}};
int sb3[4][16]={{10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8},{13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1},{13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7},{1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12}};
int sb4[4][16]={{7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15},{13,8,11,5,6,150,3,4,7,2,12,1,10,14,9},{10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4},{3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14}};
int sb5[4][16]={{2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9},{14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6},{4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14},{11,8,12,7,1,13,8,9,4,5,11,12,7,2,14}};
int sb6[4][16]={{12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11},{10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8},{9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6},{4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13}};
int sb7[4][16]={{4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1},{13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6},{1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2},{6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12}};
int sb8[4][16]={{13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7},{1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2},{7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8},{2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11}};
int spbox[32]={16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25};
string generate(int n) {
    string res = "";
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        int p = rand() % 16;
        res += hdx[p];
    }
    return res;
}
string inttobin(int num)
{
    if(num==0)
    return "0000";
    if(num==1)
    return "0001";
    if(num==2)
    return "0010";
    if(num==3)
    return "0011";
    if(num==4)
    return "0100";
    if(num==5)
    return "0101";
    if(num==6)
    return "0110";
    if(num==7)
    return "0111";
    if(num==8)
    return "1000";
    if(num==9)
    return "1001";
    if(num==10)
    return "1010";
    if(num==11)
    return "1011";
    if(num==12)
    return "1100";
    if(num==13)
    return "1101";
    if(num==14)
    return "1110";
    if(num==15)
    return "1111";
    return "0000";
}
int bintodec_1(string s)//2 digits of s box
{
    string dg;
    dg = s[0];//+s[5];
    dg+=s[5];
    if(dg.compare("00")==0)
    return 0;
    if(dg.compare("01")==0)
    return 1;
    if(dg.compare("10")==0)
    return 2;
    if(dg.compare("11")==0)
    return 3;
    return 0;
}
int bintodec_2(string s)//4 digits of s box
{
    string dg;
    dg=s.substr(1,4);
    if(dg.compare("0000")==0)
    return 0;
    if(dg.compare("0001")==0)
    return 1;
    if(dg.compare("0010")==0)
    return 2;
    if(dg.compare("0011")==0)
    return 3;
    if(dg.compare("0100")==0)
    return 4;
    if(dg.compare("0101")==0)
    return 5;
    if(dg.compare("0110")==0)
    return 6;
    if(dg.compare("0111")==0)
    return 7;
    if(dg.compare("1000")==0)
    return 8;
    if(dg.compare("1001")==0)
    return 9;
    if(dg.compare("1010")==0)
    return 10;
    if(dg.compare("1011")==0)
    return 11;
    if(dg.compare("1100")==0)
    return 12;
    if(dg.compare("1101")==0)
    return 13;
    if(dg.compare("1110")==0)
    return 14;
    if(dg.compare("1111")==0)
    return 15;
    return 0;
}
string xor_op(char a, char b)//XOR function
{
    if((a=='0')&&(b=='0'))
    return "0";
    if((a=='0')&&(b=='1'))
    return "1";
    if((a=='1')&&(b=='0'))
    return "1";
    if((a=='1')&&(b=='1'))
    return "0";
    return "0";
}
string hexbin(string s)//convert hexadecimal to binary
{
    int i=0;
    string bin = "";
    for(i=0;i<16;i++)
    {
        char tmp=s[i];
        switch (tmp)
        {
            case '0' : 
            bin += "0000";
            break;
            case '1' : 
            bin += "0001";
            break;
            case '2' : 
            bin += "0010";
            break;
            case '3' : 
            bin += "0011";
            break;
            case '4' : 
            bin += "0100";
            break;
            case '5' : 
            bin += "0101";
            break;
            case '6' : 
            bin += "0110";
            break;
            case '7' : 
            bin += "0111";
            break;
            case '8' : 
            bin += "1000";
            break;
            case '9' : 
            bin += "1001";
            break;
            case 'A' : 
            bin += "1010";
            break;
            case 'B' : 
            bin += "1011";
            break;
            case 'C' : 
            bin += "1100";
            break;
            case 'D' : 
            bin += "1101";
            break;
            case 'E' : 
            bin += "1110";
            break;
            case 'F' : 
            bin += "1111";
            break;
        }
    }
    return bin;
}
string binhex(string s)//convert the binary back to hexadecimal
{
    int i;
    string hx = "";
    string tmp;
    while(s[i+3])
    {
        tmp=s.substr(i,4);
        if((tmp.compare("0000"))==0)
        hx+="0";
        if(tmp.compare("0001")==0)
        hx+="1";
        if(tmp.compare("0010")==0)
        hx+="2";
        if(tmp.compare("0011")==0)
        hx+="3";
        if(tmp.compare("0100")==0)
        hx+="4";
        if(tmp.compare("0101")==0)
        hx+="5";
        if(tmp.compare("0110")==0)
        hx+="6";
        if(tmp.compare("0111")==0)
        hx+="7";
        if(tmp.compare("1000")==0)
        hx+="8";
        if(tmp.compare("1001")==0)
        hx+="9";
        if(tmp.compare("1010")==0)
        hx+="A";
        if(tmp.compare("1011")==0)
        hx+="B";
        if(tmp.compare("1100")==0)
        hx+="C";
        if(tmp.compare("1101")==0)
        hx+="D";
        if(tmp.compare("1110")==0)
        hx+="E";
        if(tmp.compare("1111")==0)
        hx+="F";
        i+=4;
    }
    return hx;
}
string lshift(string key)//performing left shift 
{
    int i;
    char tmp;
    tmp=key[0];
    for(i=0;i<28;i++)
    {
        key[i]=key[i+1];
    }
    key[27]=tmp;
    return key;
}
string rshift(string key)//performing right shift
{
    int i;
    char tmp;
    tmp=key[27];
    for(i=26;i>=0;i--)
    {
        key[i+1]=key[i+1];
    }
    key[0]=tmp;
    return key;
}
string half1(string key)//finding first half of the string 
{
    int i;
    string key1="";
    for(i=0;i<28;i++)
    {
        key1+=key[i];
    }
    return key1;
}
string half2(string key)//finding second half of the string 
{
    int i;
    string key2="";
    for(i=28;i<56;i++)
    {
        key2+=key[i];
    }
    return key2;
}
string half1_pt(string key)//first half of plaintext
{
    int i;
    string key1="";
    for(i=0;i<32;i++)
    {
        key1+=key[i];
    }
    return key1;
}
string half2_pt(string key)//second half of plaintext
{
    int i;
    string key2="";
    for(i=32;i<64;i++)
    {
        key2+=key[i];
    }
    return key2;
}
string roundpbox(string key)//pbox
{
    int i;
    string key1="";
    for(i=0;i<48;i++)
    {
        int x=round_pb[i];
        key1+=key[x];
    }
    return key1;
}
string roundkey_gen(string key)//round key generator test. delete later
{
    string rk1="";
    string rk2="";
    string rk3="";
    string rk4="";
    int i,j;
    rk1=half1(key);//first 28 bits
    rk2=half2(key);//second 28 bits
    for(i=0;i<16;i++)//16 roundkeys
    {
    rk1=lshift(rk1);//left shift 
    rk2=rshift(rk2);//right shift
    rk3=rk1+rk2;//adding both halves together again
    rk4=roundpbox(rk3);
    int lngth=rk4.length();
    cout<<"\nRound key length = "<<lngth<<"\n";
    cout<<"round key "<<i<<" = "<<rk4;
    }
    return rk4;
}
string roundfn(string right, string key)
{
    string exkey="",xord="",s1="",s2="",s3="",s4="",s5="",s6="",s7="",s8="",exskey="",finkey="";
    int i,j,s1r,s1c,s2r,s2c,s3r,s3c,s4r,s4c,s5r,s5c,s6r,s6c,s7r,s7c,s8r,s8c;
    for(i=0;i<48;i++)//expanding 32 bit half to 48 bits
    {
        j=exp_pb[i];
        exkey+=right[j];
    }
    for(i=0;i<48;i++)//xor operation
    {
        xord+=xor_op(exkey[i],key[i]);
    }
        s1=xord.substr(0,6);//first sbox string
        s2=xord.substr(6,6);//second sbox string
        s3=xord.substr(12,6);//third sbox string
        s4=xord.substr(18,6);//fourth sbox string
        s5=xord.substr(24,6);//fifth sbox string
        s6=xord.substr(30,6);//sixth sbox string
        s7=xord.substr(36,6);//seventh sbox string
        s8=xord.substr(42,6);//eighth sbox string
        s1r=bintodec_1(s1);//row 1 calculate
        s1c=bintodec_2(s1);//column 1 calculate
        s2r=bintodec_1(s2);//""
        s2c=bintodec_2(s2);//""
        s3r=bintodec_1(s3);//""
        s3c=bintodec_2(s3);//""
        s4r=bintodec_1(s4);//""
        s4c=bintodec_2(s4);//""
        s5r=bintodec_1(s5);//""
        s5c=bintodec_2(s5);//""
        s6r=bintodec_1(s6);//""
        s6c=bintodec_2(s6);//""
        s7r=bintodec_1(s7);//""
        s7c=bintodec_2(s7);//""
        s8r=bintodec_1(s8);//""
        s8c=bintodec_2(s8);//""
        exskey+=inttobin(sb1[s1r][s1c]);//first sbox
        exskey+=inttobin(sb2[s2r][s2c]);//second sbox
        exskey+=inttobin(sb3[s3r][s3c]);//third sbox
        exskey+=inttobin(sb4[s4r][s4c]);//fourth sbox
        exskey+=inttobin(sb5[s5r][s5c]);//fifth sbox
        exskey+=inttobin(sb6[s6r][s6c]);//sixth sbox
        exskey+=inttobin(sb7[s7r][s7c]);//seventh sbox
        exskey+=inttobin(sb8[s8r][s8c]);//eigth sbox
        for(i=0;i<32;i++)//straight pbox
        {
            j=spbox[i];
            finkey+=exskey[j];
        }
    return finkey;//final string after des function
}
string swp(string code)
{
    string left="",right="",fin="";
    left=code.substr(0,32);
    right=code.substr(32,32);
    fin=right+left;
    return fin;
}
string enc(string pt, string key)
{
    int i,j;
    string left="",right="",rk1="",rk2="",rk3="",rk4="",deskey="",tmp="",fin="";
    left=half1_pt(pt);//first 32 bits of plaintext
    right=half2_pt(pt);//second 32 bits of plaintext
    rk1=half1(key);//first half of key
    rk2=half2(key);//second half of key
    rk1=lshift(rk1);//left shift
    rk2=rshift(rk2);//right shift
    rk3=rk1+rk2;//adding halfs 
    rk4=roundpbox(rk3);//first round key
    deskey=roundfn(right,key);//getting the key to be xord with left 32 bits
    for(i=0;i<32;i++)
    {
        tmp+=xor_op(deskey[i],left[i]);//xoring left half with des'd right half
    }
    fin=right+tmp;//swapping
    for(i=0;i<15;i++)
    {
        left=half1_pt(fin);
        right=half2_pt(fin);
        rk1=half1(rk3);
        rk2=half2(rk3);
        rk3=rk1+rk2;
        deskey=roundfn(right,key);
        for(i=0;i<32;i++)
        {
            tmp+=xor_op(deskey[i],left[i]);
        }
        fin=right+tmp;
    }
    return fin;

}
int main()
{
    string plain="",plainbin="",ctext="",chtext="";
    cout<<"Enter the 16 Hex characters of plaintext";
    cin>>plain;
    plainbin=hexbin(plain);//converting plain text to binary 
    string key = generate(16);
    cout<<"\nThe 14 bit key is : "<<key;
    string binkey = hexbin(key);
    cout<<"\nKey in binary is : "<<binkey;
    ctext=enc(plainbin,binkey);
    cout<<"\nThe encrypted text in binary is "<<ctext;
    chtext=binhex(ctext);
    cout<<"\nThe encrypted text in Hexadecimal is "<<chtext;
}