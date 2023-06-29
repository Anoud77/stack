#include <iostream>
using namespace std;

class Stack
{
    int*Array;//we will add
    int top;//last element
    int Size;//size of array

public:
    Stack(int size)//initialize
    {
        Array=new int[size];
        Size=size;
        top=-1;
    }
    bool isEmpty()//check
    {
       if(top==-1)
           return true;
       else
           return false;
    }
    bool isFull()//check
    {
        if(top==(Size-1))
            return true;
        else
            return false;
    }
    void push(int value)
    {
        if(isFull())
        {
           cout<<"Stack is full";
        }
        else
            Array[++top]=value;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
            return -1;
        }
        else
            return Array[top--];
    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
            return -1;
        }
        else
            return Array[top];
    }
    void display(){
        if(top >= 0) {
            for (int i = top; i >= 0; i--) {
                cout << Array[i] << " ";
            }
        }
    }

};
struct node{//STACK FOR LINKED LIST
    int data;
    node*next;
};
void push(node **top,int value){//add at end
    node *newNode = new node();
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}
void pop(node **top){//delete the top node
    if(*top == NULL) {
        cout << "The stack is empty" << endl;
    }
    else{
        cout << "\nthe popped element is " << (*top)->data << endl;
        *top = (*top)->next;
    }
}
void displayStack(node **top){
    node *temp = new node();
    temp = *top;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {//LAST IN FIRST OUT
    Stack*sc=new Stack(10);
    sc->push(10);
    sc->push(9);
    sc->push(8);
    sc->push(7);
    sc->push(6);
    sc->display();
    cout<<endl;
    cout<<sc->peek()<<endl;
    sc->pop();
    cout<<sc->peek()<<endl;
    sc->display();


    cout << "\nLinked List Stack" << endl;
    node *top = new node();
    top = NULL;
    push(&top, 7);
    push(&top, 14);
    push(&top, 3);
    displayStack(&top);
    pop(&top);
    displayStack(&top);
    return 0;
}
