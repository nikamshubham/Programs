
#include "iostream"

using namespace std;

struct Node
{
    string data;
    Node * next;
};
struct Node * top;
class Stack
{
    public:
        Stack();
        void push();
        void pop();
        void display();
};

Stack::Stack()
{
    top=NULL;
}

void Stack::push()
{
    struct Node * newnode=new Node;
    cout<<"enter element"<<endl;
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
}

void Stack::pop()
{
    if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        top=top->next;
}

void Stack::display()
{
    if(top==NULL)
    {
        cout<<"List is Empty!!!"<<endl;
        return;
    }
    struct Node * temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        
    }
}

int main()
{

   Stack s;
   int n;
   do{
   cout<<"1. Push 2.Pop 3.Display 4.Exit"<<endl;
   cout<<"enter your choice"<<endl;
   cin>>n;
    switch(n)
    {
        case 1:
            s.push();
            break;
        
        case 2:
            s.pop();
            break;
        
        case 3:
            s.display();
            break;
            
        case 4:
            return 0;
            break;
            
        default:
            cout<<"invalid choice\n";
            
    }
   }while(n!=4);
    return 0;
}

