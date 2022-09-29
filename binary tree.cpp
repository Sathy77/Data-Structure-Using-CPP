#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int Data;
    struct Node* Left;
    struct Node* Right;
};
struct Node* Root=NULL;
void Add(int Value)
{
    struct Node* NewNode=new Node;
    NewNode->Data=Value;
    NewNode->Left=NULL;
    NewNode->Right=NULL;
    if(Root==NULL)
        Root=NewNode;
    else
    {
        struct Node* tptr=Root;
        while(true)
        {
            if(Value<tptr->Data)
            {
                if(tptr->Left==NULL)

                {
                    tptr->Left=NewNode;
                    break;
                }
                else
                {
                    tptr=tptr->Left;
                }
            }


            else
            {
                if(tptr->Right==NULL)

                {
                    tptr->Right=NewNode;
                    break;
                }
                else
                {
                    tptr=tptr->Right;
                }
            }
        }

    }
}
void print(Node* PrintNode)
{
    //struct Node* PrintNode=Root;
    //if(PrintNode==NULL)
    //  cout<<"Error"<<endl;
    if(PrintNode!=NULL)

    {
        print(PrintNode->Left);
        cout<<PrintNode->Data<<", ";
        print(PrintNode->Right );
    }
    else
        cout<<"No tree"<<endl;

}
void Searc(int value)
{
    struct Node* tptr=Root;
    while(true)
    {
        if(tptr==NULL)
        {
            cout<<"Tree is not create"<< endl;
            break;
        }
    else if(tptr->Data==value)
    {
        cout<< "here"<<endl;
        break;
    }

    else
    {
        if(tptr->Data>value)
            tptr=tptr->Left;
        else
            tptr=tptr->Right;
    }
    }
}
int main()
{
    Add(40);
    Add(20);
    Add(50);
    Add(25);
    Add(10);
    Add(55);
    Add(60);
    Add(30);
    print(Root);
    Searc(55);
    return 0;
}
