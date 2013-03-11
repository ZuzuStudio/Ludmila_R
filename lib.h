#ifndef LIB_H
#define LIB_H

typedef int Data;
struct Node
{
    Data datum;
    Node *link;
};
void enqueue(Node *&begin, Node *&end, Data dt);
Data dequeue(Node *&begin, Node *&end);
Data on_Front(Node *&begin);
Data on_Back(Node *&end);
bool isEmpty(Node *begin, Node *end);
void clear(Node *&end);

#endif
