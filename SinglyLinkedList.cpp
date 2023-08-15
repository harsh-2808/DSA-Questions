#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        // Memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // Create new node
    Node *temp = new Node(d);

    // Point this node to the previous head node
    temp->next = head;

    // Make this node the new head node
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // Create new node
    Node *temp = new Node(d);

    // Point the previous last node to this new node
    tail->next = temp;

    // Make the new added node the tail node
    tail = temp; // tail = tail->next; [We can do like this also]
}

void insertAtAnyPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 0)
    {
        return;
    }

    // Inserting at starting position
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Inserting at Last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // Inserting in middle
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Deleting a Node
void deleteNode(Node *&head, Node *&tail, int position)
{
    // Deleting first or head Node
    if (position == 1)
    {
        Node *temp = head;
        // Making the next node new head
        head = head->next;
        // Before deleting node pointing it to null
        temp->next = NULL;
        // Deleting node
        delete temp;
    }

    // Deleting middle or last node
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        // Before deleting node pointing it to null
        curr->next = NULL;
        // Deleting node
        delete curr;
    }
}

// Traversing the Linked List
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 3);
    print(head);

    insertAtTail(tail, 8);
    print(head);

    insertAtTail(tail, 2);
    print(head);

    insertAtAnyPosition(head, tail, 3, 16);
    print(head);

    insertAtAnyPosition(head, tail, 5, 19);
    print(head);

    deleteNode(head, tail, 1);
    print(head);

    deleteNode(head, tail, 6);
    print(head);

    deleteNode(head, tail, 5);
    print(head);

    cout << "Head Node Data is " << head->data << endl;
    cout << "Tail Node Data is " << tail->data << endl;
}