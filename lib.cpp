#include <iostream>
#include "lib.h"

void enqueue(Node *&begin, Node *&end, Data dt)
{
    Node *temp=NULL;
    temp=new Node;
    temp->datum=dt;
    temp->link=NULL;
    if (end)
    {
        end->link=temp;
    }
    end=temp;
    if (!begin)
    {
        begin=end;
    }

}
Data dequeue(Node *&begin, Node *&end)
{
    Node *temp=begin;
    if (temp)
    {
        begin=begin->link;
        Data dt=temp->datum;
        temp->datum = 0;
        temp->link = NULL;
        delete temp;
        temp=NULL;
        if (!begin)end=NULL;
        return dt;
    }
    else return -1;
}
Data on_Front(Node *&begin)
{
    if (begin) return begin->datum;
    else return -1;
}
Data on_Back(Node *&end)
{
    if (end) return end->datum;
    else return -1;
}
bool isEmpty(Node *begin, Node *end)
{
    if(begin!=0 && end!=0) return true;
    else return false;
}
void clear(Node *&end)
{
    Node *temp=end;
    while(end!=NULL)
    {
        temp=end;
        end=end->link;
        temp->datum=0;
        temp->link=NULL;
        delete temp;
        temp=NULL;
    }
}

