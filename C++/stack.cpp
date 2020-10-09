#include <ctype.h>
#include <iostream>
#include <process.h>
#include <stdlib.h>

using namespace std;

struct node
{
    int roll_no;
    char name[30];
    struct node *next;
};
struct node *top, *ptr;
int main()
{   int opt;
    void push();
    void pop();
    void display();
    opt=0;
    while(opt!=4)
        {
    cout<< "Menu:"<<endl;
    cout<< "1. Add record "<<endl<< "2. Delete "<<endl;
    cout<< "3. Display records"<<endl<<"4. exit"<<endl;
    cout<< "Enter your choice: ";
    cin>>opt;
    cout<<endl;
    switch(opt)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default: exit(1);

    }
    }
}
void push()
{
    top=NULL;
    char ch='y';
    while(toupper(ch)=='Y')
    {
        ptr= new node;
        cout<<"Enter name and roll. no"<<endl;
        cin>> ptr->name;
        cin>> ptr-> roll_no;
        ptr->next=top;
        top=ptr;
        cout<< "Continue? Y/N: ";
        cin>> ch;
        cout<<endl;
    }
}
void pop()
{
    cout<<"Deletion begins"<<endl;
    char ch='y';
    while(toupper(ch)=='Y')
    {
    if(top==NULL)
    {
        cout<< "Underflow"<<endl;
        return;
    }
        ptr=top;
        top=top->next;
        delete ptr;
                cout<< "Continue? Y/N: ";
        cin>> ch;
        cout<<endl;
    }
}
void display()
{
    for(ptr=top;ptr;ptr=ptr->next)
        cout<<" Name: " <<ptr->name<<"  Roll number: "<<ptr->roll_no<<endl;
}
