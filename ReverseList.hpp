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
        
        Node* currentNode = head;

        while(currentNode != nullptr)
        {
            result.addHead(currentNode->data);
            currentNode = currentNode->next;
        }

        return result;
    }

    Node* head = nullptr;
};
