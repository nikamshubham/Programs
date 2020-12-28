# include "iostream"
#include "cstring"
#define SIZE 5
using namespace std;

class LinearQueue
{
	int rear;
	int front;
	//int size;
	char *data[SIZE];
	
	public:
		LinearQueue()
		{
			front=rear=-1;
		}
		
		bool isEmpty()
		{
			if(front==-1 && rear==-1)
					return true;
			else
					return false;
			
		}
		
		bool isFull()
		{
			if(rear==SIZE-1)
				return true;
				
			else
				return false;
		}
		
		
		void add()
		{
			if(isFull())
			{
				cout<<"full"<<endl;
				return;
			}	
			if(isEmpty())
			{
				front=rear=0;
				
			}
			char temp[30];
			cout<<"enter element"<<endl;
			cin>>temp;
			data[rear]=new char[strlen(temp)];
			strcpy(data[rear++],temp);	
			
		}
		
		void remove()
		{
			if(isEmpty())
			{
				cout<<"queue is Empty"<<endl;
				return;
			}
			front++;
		}
		
		void display()
		{
			for(int i=front;i<rear;i++)
			{
				cout<<data[i]<<endl;
			}
		
		}
		
		
			void reverse()
			{
			for(int i=rear;i>=0;i--)
			{
				cout<<data[i]<<endl;
			}
		
		}
		
};

int main()
{
	LinearQueue q;
	int choice;
	do
		{
			cout<<"1. add 2. delete 3. display  4.reverse  5.exit"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:
					q.add();
					break;
				
				case 2:
					q.remove() ;
					break;
					
				case 3:
					q.display();
					break;
					
				case 4:
						q.reverse();
						break;
				
				case 5:
						return 0;
						break;
				
				default:
						cout<<"invalid choice"<<endl;
						
			}
		}while(choice!=5);
	return 0;
}
