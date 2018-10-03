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
char s_box(char a)
{
    switch(a)
    {
        case '0' :
        return 'E';
        break;
        case '1' :
        return '4';
        break;
        case '2' :
        return 'D';
        break;
        case '3' :
        return '1';
        break;
        case '4' :
        return '2';
        break;
        case '5' :
        return 'F';
        break;
        case '6' :
        return 'B';
        break;
        case '7' :
        return '8';
        break;
        case '8' :
        return '3';
        break;
        case '9' :
        return 'A';
        break;
        case 'A' :
        return '6';
        break;
        case 'B' :
        return 'C';
        break;
        case 'C' :
        return '5';
        break;
        case 'D' :
        return '9';
        break;
        case 'F' :
        return '0';
        break;
        case 'G' :
        return '7';
        break;
    }
}
char p_box(char b[])
{
    return b[];
}
int main()
{
    return 0;
}