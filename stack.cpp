# include "iostream"
using namespace std;

#define MAX 100
class Stack
{
	int top;
	public:
		int a[MAX];
	
	Stack()
	{
		top=-1;
	}
	
	bool push(int);
	int pop();
	bool isEmpty();
	void display();
	bool isFull();
	
};

bool Stack::push(int data)
{
	if(isFull())
	{
		cout<<"stack is full"<<endl;
		return false;
	}
	else
	{
		a[++top]=data;
		cout<<data<<endl;
		return data;
	}
}

int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	else
	{
		int x=a[top--];
		return x;
		
	}
	
}

	void Stack:: display()
	{
		int i;
		cout<<"stack items are::"<<endl;
		for(i=top;i>=0;i--)
		{
			cout<<a[i]<<endl;
			
		}
	}
	
bool Stack::isEmpty()
{
	return top==-1;
}

bool Stack::isFull()
{
	return top==MAX-1;
}

int main()
{
	int choice,temp,x;
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
					temp=s.push(x);
					
					if(temp==0)
					{
						cout<<"stack is full"<<endl;
						
					}
					else
					{
						cout<<"value inserted"<<endl;
						
					}
					break;
			
			case 2:
				temp=s.pop();
				if(temp==0)
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

