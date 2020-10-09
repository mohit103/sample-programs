#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class stack
{   public:
    int roll_no;
    char name[30];
    stack* next;
};
   stack *ptr, *start;
int main()
{   int opt;
    do
    {   cout<<"Menu"<<endl<<"1. Enter"<<endl<< "2. Delete"<<endl;
        cout<< "3. Display"<<endl<<"4. Exit"<<endl;
        cout<< "Enter your choice"<<endl;
        cin>>opt;
        void push();
        void pop();
        void disp();
        if(opt==1) push();
        else if(opt==2) pop();
        else if(opt==3) disp();
        else if(opt==4) exit(1);
        else
        {
            cout<< "Invalid choice"<<endl;
            exit(1);
        }
    }while(opt!=4);
    }

void push()
{
    start= NULL;
    char ch='y';
    while(ch=='y' || ch=='Y')
          {   ptr= new stack;
              cout<< "Enter name and roll no:"<<endl;
              gets(ptr->name);
              cin>> ptr->roll_no;
              ptr->next=start;// changes value of start pointing to next block
              start=ptr;//stores address of next block
              cout<< "Do you want to continue?(Y/N)"<<endl;
              cin>>ch;
          }
    for(ptr=start; ptr!=NULL ;ptr=ptr->next) //ptr->next is always one less than start
    {
        cout<< ptr-> name<<" : "<<ptr->roll_no<<endl;
    }

}
void pop()
{   cout<< "deletion starts"<<endl;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        if(start==NULL)
        {
            cout<<"Underflow"<<endl;
            exit(1);
        }
        else
        {
            ptr=start;
            start=start->next;
            delete ptr;
        }
        cout<<"Continue?(Y/N)"<<endl;
        cin>> ch;
    }
}
void disp()
{
    for(ptr=start; ptr; ptr=ptr->next)
    {
        cout<< ptr-> name<<" : "<<ptr->roll_no<<endl;
    }
}



