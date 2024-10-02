#include <iostream>
using namespace std;

// Define the structure for a node in the linked list
struct Node 
{
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to append a new node at the end of the linked list
void append(Node*& head, int value) 
{
    Node* newNode = new Node(value);
    if (head == nullptr) 
    {
        head = newNode;
    } 
    else 
    {
        Node* temp = head;
        while (temp->next != nullptr) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) 
{
    Node* temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse the linked list
void reverseList(Node*& head) 
{
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) 
    {
        next = current->next;  // Save the next node
        current->next = prev;  // Reverse the link
        prev = current;        // Move prev up
        current = next;        // Move to the next node
    }
    
    head = prev;  // Update head to the new first node
}

// Clean up the linked list
void deleteList(Node*& head) 
{
    Node* temp;
    while (head != nullptr) 
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() 
{
    Node* head = nullptr;

    // Append some nodes to the linked list
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    cout << "Original List: ";
    printList(head);

    // Reverse the linked list
    reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    // Clean up memory
    deleteList(head);

    return 0;
}
