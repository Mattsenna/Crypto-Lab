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
    // if((a==1)&&(b==1))
    return 0;
}
struct Node
{
    int bt;
    Node* next;
};
void push(Node* a)
{
    Node* temp;
    temp = new Node;
    a->next=temp;
}
int main()
{
    Node *first, *last, *temp;
    first = new Node;
    last=first;
    temp=last;
    int ch=1;
    while(ch!=0)
    {
        cout<<"Enter the bit";
        cin>>temp->bt;
        push(temp);
        cout<<"\nEnter 0 if you don't want to add any more bits. else, enter 1\n";
        cin>>ch;

    }
    cout<<"\n";
    temp=first;
    while((temp->bt==0)||(temp->bt==1))
    {
        cout<<temp->bt;
        temp=temp->next;
    }
}