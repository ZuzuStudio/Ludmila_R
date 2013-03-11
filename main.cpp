#include <iostream>
#include "lib.h"
using namespace std;

typedef int Data;

int main()
{
    Node *begin=NULL;
    Node *end=NULL;
    int number=0,elements;

    if (isEmpty(begin,end))
    {
        cout<<"Queue is not empty"<<endl;
    }
    else
    {
        cout<<"Queue is empty"<<endl;
    }

    cout<<"Enter number of elements: ";
    cin>>elements;
    for (int i=0; i<elements; ++i)
    {
        cout<<"Enter element: ";
        cin>>number;
        enqueue(begin,end,number);
        cout<<endl;
    }
    cout<<endl<<"First element: "<<on_Front(begin)<<endl;
    cout<<"Last element: "<<on_Back(end)<<endl;
    cout<<endl<<endl;
    if (isEmpty(begin,end))
    {
        cout<<"Queue is not empty"<<endl;
    }
    else
    {
        cout<<"Queue is empty"<<endl;
    }

    cout<<dequeue(begin,end)<<endl;
    cout<<dequeue(begin,end)<<endl;
    cout<<dequeue(begin,end)<<endl;
    cout<<endl<<endl;

    clear(end);
    cout<<"After clearing: ";
    cout<<endl;
    if (isEmpty(begin,end))
    {
        cout<<"Queue is not empty"<<endl;
    }
    else
    {
        cout<<"Queue is empty"<<endl;
    }
    return 0;
}
