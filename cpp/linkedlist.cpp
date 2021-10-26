#include <iostream>
#include <cstdint>
#include <cassert>

class Node
{
    public:
        uint32_t x;
        Node *next;
        
    private:
    protected:
};

void printlist(Node *Element);

int main()
{
    Node *First;
    Node *Second;
    Node *Third;
    
    First = new Node();
    Second = new Node();
    Third = new Node();
    
    First->x = 1;
    Second->x = 2;
    Third->x = 3;
    
    First->next = Second;
    Second->next = Third;
    Third->next = nullptr;
    
    //First = nullptr;
    
    assert(First);
    
    if (First)
        printlist(First);
    else
        std::cout << "Points to null! No list to print!" << std::endl;
    
    return 0;
}

void printlist(Node *Element)
{
    while (Element != nullptr)
    {
        std::cout << "Node " << Element->x << std::endl;
        Element = Element->next;
        if (Element == nullptr)
        {
            std::cout << "List reached the end." << std::endl;
        }
    }
}
