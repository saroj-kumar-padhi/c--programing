#include<iostream>
using namespace std;

int top=-1,n=20,stack[20];
void push(int value)
{
    if(top==n-1)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        top=top+1;
        stack[top]=value;

    }
}
void pop()
{
    if(top==-1)
    cout<<"underflow"<<endl;
    else
    {
        cout<<"your element to be poped is...."<<" "<<stack[top]<<endl;
        top--;
    }
}

void display()
{
    if(top>-1)
    {
        for(int i=top;i>-1;i--)
        {
            cout<<stack[i]<<" "<<endl;
        }
    }
}

int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
    }
    while(ch!=4);
   return 0;
}