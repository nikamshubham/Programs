# include "iostream"
#include "cstring"
#define SIZE 5
using namespace std;


class Stack
{
	int top;
	char *name[SIZE];

	public:
	Stack()
	{	
		top = -1;
	}
	
	void push(char*);
	char* pop();
	bool isEmpty();
	void display();
	bool isFull();
	
};

void Stack::push(char* temp)
{
	if(isFull())
	{
		cout<<"stack is full"<<endl;

	}
	else
	{
		name[++top] = new char[strlen(temp)];
		strcpy(name[top],temp);
	
	}
}

char* Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
		return NULL;
	}
	else
	{
		char* x=name[top--];
		return x;
		
	}
	
}

	void Stack:: display()
	{
		int i;
		cout<<"stack items are::"<<endl;
		for(i=top;i>=0;i--)
		{
			cout<<name[i]<<endl;
			
		}
	}
	
bool Stack::isEmpty()
{
		if(top == -1)
		return true;
	else return false;
}

bool Stack::isFull()
{
	
	if(top == SIZE)
	return true;
	else return false;
}

int main()
{
	int choice;
	char x[30],*temp;
	Stack s;
	do
	{
		cout<<"1. Push  2.Pop  3.display  4.EXIT"<<endl;
		
		cout<<"enter your choice "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter element to push"<<endl;
				cin>>x;
					s.push(x);
			
					break;
			
			case 2:
				temp=s.pop();
				if(temp == NULL)
					cout<<"stack is Empty"<<endl;
				else
					cout<<"value deleted"<<endl;
				
				break;
				
			case 3:
				s.display();
				break;
			
			case 4:
				return 0;
				break;
			
			default:
				cout<<"invalid choice"<<endl;
				
		}
	}while(choice!=0);
	
	return 0;
	
}

