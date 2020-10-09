#include <iostream>
#include <stdlib.h>
#include <ctype.h>

using namespace std;
struct queue
{
    int roll_no;
    char name[30];
    struct queue *next;
};
struct queue *f=NULL , *r=NULL , *ptr;

int main()
{
    void pop();
    void push();
    void display();
    int opt=0;
    while(opt!=4)
    {   cout<< "Menu"<<endl;
        cout<< "1. Add"<<endl<<"2. Delete"<<endl;
        cout<<"3. Display" <<endl<< "4. Exit"<<endl;
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
    if(opt==4)
    {
        cout<<"Invalid entry";
        exit(1);
    }
}
void push()
{
    char ch='y';
    while(toupper(ch)=='Y')
    {   ptr= new queue;
        cout<< "Enter your name and roll number"<<endl;
        cin>> ptr->name>> ptr->roll_no;
        if(f==NULL && r==NULL)
        {   f=ptr;
            r=ptr;
            ptr->next=NULL;

        }
        else
        {
            r->next=ptr;
            ptr->next=NULL;
            r=ptr;
        }
        cout<< "Continue? Y/N : ";
        cin>>ch;
    }
}
void pop()
{   cout<< "Deletion begins"<<endl;
    char ch='y';
    while(toupper(ch)=='Y')
    {
        if(f==NULL)
        {
            cout<< "Underflow"<<endl;
            return;
        }
        else
        {
            ptr=f;
            f=f->next;
            delete ptr;
            cout<< "Continue? Y/N :";
            cin>>ch;
        }
    }
}
void display()
{
    for(ptr=f;ptr;ptr=ptr->next)
    {
        cout<< "Name: "<<ptr->name<< "|| Roll number: "<<ptr->roll_no<<endl;
    }
}

