#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// witout <iostream> and std we can not do input/output becuase it is most importernt for it.
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
void Push()
{
    if (top == MAX - 1)
    {
        cout << " The stack is Full!" << endl;
    }
    else
    {
        top++;
        int val;
        cout << "enter the value you need to insert in stack";
        cin >> val;
        cout << endl;
        stack[top] = val;
    }
}
void Pop()
{
    if (top == -1)
    {
        cout << "the stack is empty !" << endl;
    }
    else
    {
        printf("the Deleted element is : %d", stack[top]);
        top--;
    }
}
void Display()
{
    if(top ==-1)
    {
        cout<<"the stack is empty!"<<endl;
    }
    else{

    cout << " the value in stack is :" << endl;
    for (int i = 0; i <=top; i++)
    {
        cout << stack[i] << endl;
    }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n1. insert\n2.delete\n3.display\n");
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;

        default:
            exit(0);
            break;
        }
    }
}