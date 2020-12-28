#include "iostream"
#include"cstring"

using namespace std;

class Stack
{
	int top;
	int size;
	char *ptr;
	
	public :
		Stack(int size)
		{
			top=-1;
			this->size=size;
			ptr=new char[size];
		}
		
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isFull()
		{
			if(top==size-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void push(char ch)
		{
			
			if(isEmpty())
			{
				top=0;
				
			}
			else if(isFull())
			{
			cout<<"stack is full"<<endl;
			return;
			}
			else
			{
				top++;
			}
			ptr[top]=ch;
		}		
		
		char pop()
		{
			char temp=ptr[top];
			if(isEmpty())
			{
				cout<<"stack is empty"<<endl;
				return -1;
			}
			else
			{
				top--;
			}
			return temp;
		}
		
		void display()
		{
			if(isEmpty())
			{
				//cout<<"stack is empty"<<endl;
				return;
			}
			else
			{
				for(int i=0;i<=top;i++)
				{
					cout<<ptr[i]<<endl;
				}
			}
		}
	
	int gettop()
	{
		return top;
	}
	
	~Stack()
	{
		delete ptr;
	}
};

int main()
{
	int size;
	cout<<"enter the size "<<endl;
	cin>>size;
	
	Stack s(size);
	
	char arr[30];
	
	cout<<"enter the elements"<<endl;
	
		for(int i=0;i<=size;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<size;i++)
		{
			s.push(arr[i]);
		}

	s.display();
	
	int top=s.gettop();
	for(int i=0;i<=top;i++)
	{
		cout<<s.pop()<<endl;
	}
	s.display();
	
	return 0;
}

