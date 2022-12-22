#include <iostream>

using namespace std;


class LinkedList
{
   private:

   class Node
    {
        public:
            int data;
            Node *next;

    };


     Node *first = nullptr;

    public:
        void add(int num)
        {

            Node *last;
            if (first == nullptr)
            {
                first = new Node;
                first->data = num;
                first->next = nullptr;
                last = first;
            }
            else
            {
               Node *temp = new Node;
               temp->data = num;
               temp->next = nullptr;

               last->next = temp;
               last = temp;
            }
        }

        void display()
        {
            if(first == nullptr)
            {
                cout << "LinkedList is empty" << endl;
            }
            else
            {
                Node *cur = first;
                while(cur != nullptr){
                    cout << cur-> data << endl;
                    cur = cur->next;
                }
            }
        }
};

int main()
{
    LinkedList newNode;
    newNode.add(5);
    newNode.add(6);
    newNode.display();


    return 0;
}
