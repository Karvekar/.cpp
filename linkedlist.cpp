#include<iostream> 
using namespace std;
class Node 
{ 
public: 
    int data; 
    Node* next; 
    
    Node() 
    { 
        data = 0; 
        next = NULL; 
    } 
    Node(int data) 
    { 
        this->data = data; 
        this->next = NULL; 
    } 
}; 
class Linkedlist { 
    Node* head; 
  
public:  
    Linkedlist() 
	{ 
	   head = NULL; 
	} 
    void insertNode(int); 
    void printList(); 
    void deleteNode(int); 
}; 
void Linkedlist::deleteNode(int node) 
{ 
    Node *temp1 = head, *temp2 = NULL; 
    int n = 0; 
  
    while (temp1 != NULL) 
	{ 
        temp1 = temp1->next; 
        n++; 
    }  
    temp1 = head;  
    if (node == 1) 
	{
        head = head->next; 
        delete temp1; 
        return; 
    }  
    while (node-- > 1) 
	{ 
        temp2 = temp1; 
        temp1 = temp1->next; 
    } 
    temp2->next = temp1->next; 
    delete temp1; 
} 
void Linkedlist::insertNode(int data) 
{ 
    Node* newNode = new Node(data); 
    if (head == NULL) 
	{ 
        head = newNode; 
        return; 
    } 
    Node* temp = head; 
    while (temp->next != NULL) 
    {
        temp = temp->next; 
    }  
    temp->next = newNode; 
} 
void Linkedlist::printList() 
{ 
    Node* temp = head;   
    while (temp != NULL) 
	{ 
        cout << temp->data << " "; 
        temp = temp->next; 
    } 
} 
int main() 
{ 
    Linkedlist list; 
    
	int numElements;
    cout << "Enter the number of elements to insert: ";
    cin >> numElements;
    
    for (int i = 0; i < numElements; i++) 
	{
        int element;
        cout << "Enter element " << i + 1 <<endl;
        cin >> element;
        list.insertNode(element);
    } 
  
    cout << "Elements of the list are"; 
    list.printList(); 
    cout << endl;  
    
    list.deleteNode(2); 
  
    cout << "Elements of the list are"; 
    list.printList(); 
    cout << endl; 
    return 0; 
