#include <iostream>
#include "mod.h"
using namespace std;

int main()
{
    Node *stack=NULL;
    int number=0,elements;

    cout<<"Enter number of elements: ";
    cin>>elements;
    for (int i=0; i<elements; ++i)
    {
        cout<<"Enter element: ";
        cin>>number;
        push(stack,number);
        cout<<endl;
    }
    cout<<"--------------------";
    cout<<endl<<"Element on top: "<<ontop(stack)<<endl;
    cout<<endl<<endl<<"Element which was deleted: "<<pop(stack)<<endl;
    cout<<endl<<"Element on top: "<<ontop(stack)<<endl;
    cout<<endl<<endl<<"Element which was deleted: "<<pop(stack)<<endl;
    cout<<endl<<"Element on top: "<<ontop(stack)<<endl<<endl;
    cout<<endl<<"Is empty "<< isempty(stack)<<endl;
    clear(stack);
    cout<<endl<<"Stak was deleted"<<endl;
    cout<<endl<<"Is empty "<< isempty(stack)<<endl;
    return 0;
}
