#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *top;

void push(int element)
{
	Node *temp = new Node;
	temp->data = element;
	temp->next = top;
	top = temp;
}

bool isempty()
{
	if(top == NULL)
		return true;
	else
		return false;
}

void pop()
{
	Node *temp = new Node;
	temp = top;
	if(isempty())
		cout<<"Stack is empty and Please Insert new value."<<endl;
	else
	{
		top = temp->next;
		free(temp);
	}
}

void display()
{	
	Node *temp = top;
	if(isempty())
		cout<<"Stack is empty."<<endl;
	else
	{	
		cout<<"The extisting element in stack: "<<endl;
		while(temp != NULL)
		{
			cout<<temp->data<<endl;
			temp = temp->next;
		}
	}
}

int main()
{
	int choice;
	do{
		cout<<"Choice the correct option:"<<endl;
		cout<<"1. Push the element in the stack:"<<endl;
		cout<<"2. Pop element."<<endl;
		cout<<"3. Display the existing stack."<<endl;
		cout<<"4. Exit."<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				int val;
				cout<<"Enter the new element: "<<endl;
				cin>>val;
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"The program is ended."<<endl;
				cout<<"Thank you..."<<endl;
				break;
			default:
				cout<<"Please select the valid option.."<<endl;
		}
	}while(choice != 4);
	return 0;
}
