#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};


Node *first = nullptr;

// add a new node to linkedlist

void addNode(int num)
{
    Node *temp, *last;
    if (first == nullptr)
    {
        first = new Node;
        first->data = num;
        first->next = nullptr;
        last = first;
    }
    else
    {
        temp = new Node;
        temp->data = num;
        temp->next = nullptr;
        last-> next = temp;
        last = temp;
    }
}

// iterative display of linkedlist

void itrdisplay(Node *node){

    while(node != nullptr)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

// recursive display of linkedlist

Node recdisplay(Node *node)
{
    if(node != nullptr)
    {
        cout << node->data << endl;
        recdisplay(node->next);
    }
}

// reverse recursive display of linkedlist

Node rrecdisplay(Node *node)
{
    if(node != nullptr)
    {
        rrecdisplay(node->next);
        cout << node->data << endl;
    }
}

// iterative count of nodes in linkedlist

int itrcount(Node *node)
{
    int count = 0;
    while(node != nullptr)
    {
        count++;
        node = node->next;
    }
    return count;
}

//recursive count of nodes in linkedlist

int reccount(Node *node)
{
    int x = 0;
    if (node != nullptr){
        return x = reccount(node->next) + 1;
        //x = reccount(node->next);
        //return x + 1;
    }
    else
    {
        return x;
    }
}

// recursive count of nodes in linkedlist version 2

int reccount2(Node *node)
{
    static int x = 0;
    if (node != nullptr){
        x++;
        reccount2(node->next);
    }
    return x;
}

//recursive count of nodes in linkedlist version 3

int reccount3(Node *node)
{

    if (node != nullptr){

        return reccount3(node->next) + 1;
    }
    else
    {
       return 0;
    }

}

// iterative sum of data in linkedlist

int itrsum(Node *node)
{
    int sum = 0;
    while (node != nullptr)
    {
        sum += node->data;
        node = node->next;
    }

    return sum;
}

// recursive sum of data in linkedlist

int recSum(Node *node)
{
    if (node != nullptr)
    {

        return recSum(node->next) + node->data;

    }
    else
    {
        return 0;
    }
}

// find maximum value in linkedlist

int maxValue(Node *node)
{
    int maxVal = INT_MIN;

    while(node != nullptr)
    {
        if (node->data > maxVal)
        {
            maxVal = node->data;
        }
        node = node->next;
    }
    return maxVal;
}

// recursive maximum value

int recMaxValue(Node *node)
{
    int x = INT_MIN;

    if (node == nullptr)
    {
        return x;
    }
    else
    {
        x = recMaxValue(node->next);
        
        if(node->data > x )
        {
            return node->data;
        }
        else
        {
            return x;
        }
    }
}

// iterative search

Node* itrSearch(Node *node, int key)
{
    while (node != nullptr)
    {
        if ( key == node->data)
        {
            return (node);
        }

        node = node->next;

    }
    return nullptr;
}

/* int itrSearch(Node *node, int key)
{
    int index = -1;

    while (node != nullptr)
    {
        if (node->data == key)
        {
            return ++index;
        }
        index++;
        node = node->next;
    }

    return -1;
} */

//recursive search

Node* recSearch(Node *node, int key)
{

    if (node == nullptr)
    {
       return nullptr;
    }
    else
    {
         if (key == node->data)
        {
            return (node);
        }
        else
        {
            return recSearch(node->next, key);
        }
    }
}

/* int recSearch(Node *node, int key)
{
    static int x = -1;

    if (node != nullptr)
    {
         if (node->data == key)
        {
            return x + 1;
        }
        x++;
        recSearch(node->next, key);
    }
    else
    {
        return -1;
    }

} */

// insert 

void insertNode(int val, int index)
{
    Node *temp = first;
    Node *temp1;
    
    if(index < 0 )
    {
        return;
    }

    if (index == 0 || first == nullptr)
    {
        temp1 = new Node;
        temp1->data = val;
        temp1->next = first;
        first = temp1;

    }
    else
    {
       /* if (index >= itrCount(first)){
            index = itrCount(first);
        }
        for(int i = 1; i < index; i++) */
        
        for(int i = 1; i < index && temp->next != nullptr ; i++)
        {
            temp = temp->next;
        }
        temp1 = new Node;
        temp1->data = val;
        temp1->next = temp->next;
        temp->next = temp1;
    }

}

int deleteNode(int index)
{
    Node *temp;
    Node *cur = first;
    int datum;

    if(first == nullptr || index < 0 || index > itrCount(first))
    {
        return INT_MIN;
    }
    if (index == 0 )
    {
       datum = first->data;
       cur = first;
       first = first->next;
       delete cur;
       return datum;
    }

        for (int x = 1; x < index && cur->next != nullptr ; x++)
    {
        //cur = first;
        temp = cur;
        cur = cur->next;
    }
    temp->next = cur->next;
    datum = cur->data;
    delete cur;
    return datum;
}

int main()
{
    Node *temp;
    addNode(10);
    addNode(12);
    addNode(14);
    insertNode(24, 0);
    insertNode(50, 4);
    insertNode(55, 7);
     cout << deleteNode(4) << endl;
    deleteNode(6);
    deleteNode(0);
    deleteNode(-1);
    itrdisplay(first);
    recdisplay(first);
    rrecdisplay(first);
    cout << itrcount(first) << endl;
    cout << reccount(first) << endl;
    cout << reccount2(first) << endl;
    cout << reccount3(first) << endl;
    cout << itrsum(first) << endl;
    cout << recSum(first) << endl;
    cout << maxValue(first) << endl;
    cout << recMaxValue(first) << endl;
    temp = recSearch(first, 20);
    cout << temp->data << endl;
    temp = itrSearch(first, 55);
    cout << temp->data << endl;

}
