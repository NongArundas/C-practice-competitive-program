#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int val)
{
    Node *newnode = new Node;
    newnode->data = val;
    newnode->next = NULL;
    Node *temp;
    temp = head;
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {   
        while(temp->next != NULL)
        {
            temp = temp->next;
        }   
        temp->next = newnode;
     
    }
}
void swap_node()
{
    Node *temp;
    Node *prev;
    Node *ptr;
    temp = head;
    prev = head;
    ptr = head->next;
    if(head == NULL)
    {
        cout<<"Link list is empty."<<endl;
    }
    if(ptr == NULL) return;
    if(head == prev)
    {
        head = ptr;
        prev->next = ptr->next;
        ptr->next = prev;
    }
    prev = temp->next;
    if(prev == NULL) return; 
    ptr = prev->next;
    if(ptr == NULL) return;
    while(ptr != NULL && prev != NULL)
    {
        temp->next = ptr;
        prev->next = ptr->next;
        ptr->next = prev;
        temp = prev;
        prev = temp->next;
        if(prev == NULL) return;
        ptr = prev->next;
        if(ptr == NULL) return;
    }
}

void reverse()
{
    Node *prev;
    Node *current;
    Node *nex;
    prev = NULL;
    current = head;
    nex = head;
    if(head == NULL)
    {
        cout<<"Link list is empty."<<endl;
    }
    while(nex != NULL)
    {
        nex = current->next;
        current->next = prev;
        prev = current;
        current = nex;

    }
    head = prev;
}

void display()
{
    Node *temp;
    temp = head;
    if(head == NULL)
        cout<<"Link list is empty."<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int choice;
    do{
		cout<<"Choice the correct option:"<<endl;
		cout<<"1. Insert the element in the link list:"<<endl;
		cout<<"2. Swap element."<<endl;
        cout<<"3. Reverse Element."<<endl;
		cout<<"4. Display the existing element."<<endl;
		cout<<"5. Exit."<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				int x;
				cout<<"Enter the element: "<<endl;
				cin>>x;
				insert(x);
				break;
			
			case 2:
				swap_node();
				break;

            case 3:
                reverse();
                break;
			
			case 4:
				display();
				break;
			
			case 5:
				cout<<"program is ended."<<endl;
				cout<<"------------Thank you-----------"<<endl;
				break;
			default:
				cout<<"Choice the correct option."<<endl;
		}
				
	}while(choice != 5);
	
	return 0;
    
}