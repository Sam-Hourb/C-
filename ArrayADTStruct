#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int lenght = 0;
};

//_______________________________

void addLast(Array &a, int e)
{
    if(a.lenght < a.size)
    {
        a.A[a.lenght] = e;
        a.lenght++;
    }
}

//_______________________________

void insert(Array &a, int i, int e)
{
    if (i < a.size && i <= a.lenght && a.lenght < a.size && i >= 0)
    {
        if ( i == a.lenght)
        {
            a.A[a.lenght] = e;
            a.lenght++;
        }
        else 
        {
            for (int c = a.lenght ; c > i; c-- )
            {
                a.A[c] = a.A[c-1];
            }

            a.A[i] = e;
            a.lenght++;
        }
        
    }
}

//_______________________________

void deleteIndex(Array &a, int index)
{
    if (index < a.size && index <= a.lenght && a.lenght < a.size && index >= 0)
    {
         if ( index == a.lenght)
        {
            a.A[a.lenght] = 0;
            a.lenght--;
        }   
         else 
        {
            for (int c = index ; c < a.lenght; c++ )
            {
                a.A[c] = a.A[c+1];
            }
            a.A[a.lenght]= 0;
            a.lenght--;
        }
    }
}

//_______________________________

void display(Array a)
{
    for (int it = 0; it < a.lenght; it++)
    {
        cout << a.A[it] << endl;
    }
}

//_______________________________

int main()
{
    Array myArray;
    cout << " enter the size of arry: ";
    cin >> myArray.size;
    myArray.A = new int[myArray.size];

    addLast(myArray, 1);
    addLast(myArray, 2);
    addLast(myArray, 3);
    addLast(myArray, 4);
    insert(myArray, 0, 6);
    addLast(myArray, 7);
    deleteIndex(myArray, 5);

    display(myArray);

}
