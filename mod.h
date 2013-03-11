#ifndef MOD_H
#define MOD_H
typedef int Data;
struct Node
{
    Data datum;
    Node *link;
};
void push (Node *&top, Data dt);
Data pop (Node *&top);
Data ontop (Node *top);
void clear(Node *&top);
bool isempty(Node *top);


#endif
