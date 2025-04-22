#pragma once

#include <iostream>
#include <climits>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const 
    {
        LinkedList result;

        if (result.head->next == nullptr)
        {
            return *this;
        }

        else
        {
            Node* currentNode = head;

            while(currentNode != nullptr)
            {
                result.addHead(current->data);
                currentNode = currentNode->next;
            }
        }

        return result;
    }

    Node* head = nullptr;
};
