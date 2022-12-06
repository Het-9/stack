#include<iostream>
using namespace std;
int top=-1, n ,i;
int *stack;

int push(int val)
{
    stack[++top] = val;
    return 0;
}
int peep()
{
    return stack[top];
}
int pop()
{
    return stack[top--];
}
int main()
{  
	stack = new int(n); 

    int ch,val;
    while(true)
    {
        cout<<"\nThis will perform following operations :\n1.push\n2.peep\n3.pop\n4.Display elements in stack\n5.exit"<<endl;
        cout<<"\nEnter what operation you want :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter a value to push :";
                cin>>val;
                push(val);
                cout<<"The value "<<val<<" was pushed"<<endl;
                break;
            case 2:
                val = peep();
                cout<<val<<endl;
                break;
            case 3:
                val = pop();
                cout<<"The value "<<val<<" was popped"<<endl;
                break;
            case 4:
                cout<<"Stack elements are :";
                for(i=0;i<=top;i++)
                { 
                    cout<<"\n"<<stack[i];
                }
                cout<<endl;
                break;
            case 5:
                return 0;
            default:
                cout<<"please enter a valid operation."<<endl;
                break;    
        }
    }
}