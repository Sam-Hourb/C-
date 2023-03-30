#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int lenght = 0;
};

void create(Array *a)
{
    cout << " enter the size of arry: ";
    cin >> a->size;
    a->A = new int[a->size];
}


void addLast(Array *a, int e)
{
    if(a->lenght < a->size)
    {
        a->A[a->lenght] = e;
        a->lenght++;
    }
}

void insert(Array *a, int i, int e)
{
    if (i < a->size && i <= a->lenght && a->lenght < a->size && i >= 0)
    {
        if ( i == a->lenght)
        {
            a->A[a->lenght] = e;
            a->lenght++;
        }
        else 
        {
            for (int c = a->lenght ; c > i; c-- )
            {
                a->A[c] = a->A[c-1];
            }

            a->A[i] = e;
            a->lenght++;
        }
        
    }
}

void deleteIndex(Array *a, int index)
{
    if (index < a->size && index <= a->lenght && a->lenght <= a->size && index >= 0)
    {
         if ( index == a->lenght)
        {
            //a->A[a->lenght] = 0;
            a->lenght--;
        }   
         else 
        {
            for (int c = index ; c < a->lenght-1; c++ )
            {
                a->A[c] = a->A[c+1];
            }
            //a->A[a->lenght]= 0;
            a->lenght--;
        }
    }
}

int linearSearch(Array a, int k)
{
    for (int i = 0; i < a.lenght; i++)
    {
        if(a.A[i] == k)
        {
            return i;
        }
    }
    return -1;
}

void display(Array a)
{
    for (int it = 0; it < a.lenght; it++)
    {
        cout << a.A[it] << endl;
    }
}

int main()
{
    Array myArray;
    create(&myArray);
    // cout << " enter the size of arry: ";
    // cin >> myArray.size;
    // myArray.A = new int[myArray.size];

    addLast(&myArray, 1);
    addLast(&myArray, 2);
    addLast(&myArray, 3);
    addLast(&myArray, 4);
    insert(&myArray, 4, 6);
    addLast(&myArray, 7);

    deleteIndex(&myArray, 5);

    display(myArray);
    
    cout << "index of key: " << linearSearch(myArray, 6) << endl;

}
