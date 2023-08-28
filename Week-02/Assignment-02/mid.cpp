#include <iostream>

// Define the structure for a singly linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node at the end of the linked list
void insertNode(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = newNode;
}

// Function to print the middle element(s) of the linked list
void printMiddle(Node* head) {
    if (!head) {
        return;
    }
    
    // Count the total number of nodes in the linked list
    int count = 0;
    Node* curr = head;
    while (curr) {
        count++;
        curr = curr->next;
    }
    
    // Find the middle index
    int middleIndex = count / 2;
    
    // Traverse to the middle node(s)
    curr = head;
    for (int i = 0; i < middleIndex; i++) {
        curr = curr->next;
    }
    
    // Print the middle element(s)
    if (count % 2 == 0) {
        // If the count is even, print two middle elements
        std::cout << curr->data << " " << (curr->next)->data;
    } else {
        // If the count is odd, print the single middle element
        std::cout << curr->data;
    }
}

// Function to sort the linked list in descending order (using bubble sort)
void sortLinkedList(Node* head) {
    if (!head) {
        return;
    }
    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;
    
    do {
        swapped = false;
        ptr1 = head;
        
        while (ptr1->next != lptr) {
            if (ptr1->data < (ptr1->next)->data) {
                std::swap(ptr1->data, (ptr1->next)->data);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main() {
    Node* head = nullptr;
    int val;
    
    // Input values until -1 is encountered
    while (true) {
        std::cin >> val;
        if (val == -1) {
            break;
        }
        insertNode(head, val);
    }
    
    // Sort the linked list in descending order
    sortLinkedList(head);
    
    // Print the middle element(s) of the linked list
    printMiddle(head);
    
    return 0;
}
