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

    int* getStats() const
    {
        auto array = new int[3];

        std::vector<int> allData;
        int sum = 0;
        int count = 0;
        int min_val = INT_MAX;
        int max_val = INT_MIN;

        Node* currentNode = head;
        while(currentNode != nullptr)
        {
            int num = currentNode->data;
            sum += num;
            min_val = num < min_val ? num : min_val;
            max_val = num > max_val ? num : max_val;
            count++;
            currentNode = currentNode->next;
        }

        array[0] = count > 0 ? min_val : 0;
        array[1] = count > 0 ? max_val : 0;
        array[2] = count > 0 ? sum / count : 0;

        return array;
    }
    

private:
    Node* head = nullptr;
};
