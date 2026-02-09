#include <iostream>
using namespace std;

class Node
{   
    
    int data;
    Node* next;
public:
    Node(int val)
    {
        data = val;
        next = nullptr;
    }

};

class List {
    Node* head;
    Node* tail;
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
};

int main()
{
    List ll();
    return 0;

}