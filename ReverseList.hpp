#pragma once

#include <iostream>
#include <climit>
#include <vector>

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
            std::vector<int> allData;

            
    }

    Node* head = nullptr;
};
