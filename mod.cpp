#include <iostream>
#include "mod.h"

void push (Node *&top, Data dt)
{
    Node *temp=NULL;
    temp=new Node;
    temp->datum=dt;
    temp->link=top;
    top=temp;
    temp=NULL;
}
Data pop (Node *&top)
{
    Node *temp=top;
    if(temp)
    {
        top=top->link;
        Data dt=temp->datum;
        temp->datum=0;
        temp->link=NULL;
        delete temp;

        temp=NULL;
        return dt;
    }
    return -1;
}
Data ontop (Node *top)
{
    Data zuzu=0;
    if(top)
    {
        zuzu=top->datum;
        return zuzu;
    }
    return -1;
}
void clear(Node *&top)
{
    while (top!=NULL)
    {
        Node *temp=top;
        top=top->link;
        temp->datum=0;
        temp->link=NULL;
        delete temp;
        temp=NULL;
    }
}

bool isempty(Node *top)
{
    return top==NULL;
}
