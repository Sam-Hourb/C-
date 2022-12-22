#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};


Node *first;


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

void itrdisplay(Node *node){

    while(node != nullptr)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

Node recdisplay(Node *node)
{
    if(node != nullptr)
    {
        cout << node->data << endl;
        recdisplay(node->next);
    }
}


Node rrecdisplay(Node *node)
{
    if(node != nullptr)
    {
        rrecdisplay(node->next);
        cout << node->data << endl;
    }
}


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

int reccount2(Node *node)
{
    static int x = 0;
    if (node != nullptr){
        x++;
        reccount2(node->next);
    }
    return x;
}

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


int main()
{
    addNode(10);
    addNode(12);
    addNode(14);
    itrdisplay(first);
    recdisplay(first);
    rrecdisplay(first);
    cout << itrcount(first) << endl;
    cout << reccount(first) << endl;
    cout << reccount2(first) << endl;
    cout << reccount3(first) << endl;
    cout << itrsum(first) << endl;
    cout << recSum(first) << endl;


}
