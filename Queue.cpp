#include<iostream>
using namespace std;
int arry[]={};
int i=0;
void Push(int newNumber)
{
    arry[i]=newNumber;
    i++;
}
void Pop()
{
    for(int j=0; j<i; j++)
    {
        arry[j]=arry[j+1];
    }
    i--;
}
int main()
{
    Push(9);
    Push(10);
    cout<<arry[1]<<endl;

    return 0;
}
