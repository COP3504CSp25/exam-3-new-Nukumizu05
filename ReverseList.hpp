#pragma once

#include <iostream>
#include <climits>
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
            Node* currentNode = head;

            while(currentNode != nullptr)
            {
                allData.push_back(currentNode->data);
                currentNode = currentNode->next;
            }

            for (size_t i = 0; i < allData.size(); i++)
            {
                result.addHead(allData[i]);
            }
        }

        return result;
    }

    Node* head = nullptr;
};
