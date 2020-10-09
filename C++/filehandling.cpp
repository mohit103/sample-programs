#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
ofstream a;
a.open("Riya.txt");
a<< "This a good day to program.";
ifstream b;
a.close();
b.open("Riya.txt");
char ch;
int coun;
cout<<"Reached"<<endl;
while(!b.eof())
{
    ch=b.get();
    while(ch!=' ')
    {
        if(ch=='t' || ch=='T')
        {
            b.get();
            if(ch=='h')
            {
                b.get();
                if(ch=='i')
                {
                    b.get();
                    if(ch=='s')
                    {
                        coun+=1;
                    }
                }

            }

        }else b.get();
    }
    cout<<"No of this:" << coun;
}
b.close();

}
