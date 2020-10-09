#include <iostream>

using namespace std;
int* returnarr(int* k[][10], int j);
int main()
{ int a[10][10], i, j, n;
cout<< "Enter size of the matrix \n";
cin>> n;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout<< "Enter a number: ";
        cin>> a[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout<< a[i][j]<< " ";
    } cout<< endl;
}
int *p;
p= returnarr(a[10][10],n);
for(i=0;i<n;i++)
{
    cout<< p[i]<< i<< "row \n";
}
while(i<(2*n))
{
    cout<< p[i] << i<< "column \n";
    i++;
}

}
int* returnarr(int* a[10][10], int n)
{   int s[20];
    int s1=0, s2=0;
    int i, j;
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
    {      s1+=a[i][j];
           s2+=a[j][i];
    }
    s[i]=s1;
    s[i+n]=s2;
    }
    return s;
}
