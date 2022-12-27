#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
     *a = *b;
     *b = temp;
}

int partition(int *A, int l, int h)
{
    int pivot = A[(l + h)/2];
    //int pivot = A[l];
    //int pivot = A[h-1];
    int i = l;
    int j = h-1;

    while (i < j)
    {
        while (A[i] < pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            swap(&A[i],&A[j]);
        }
    }

    return j;
}

void quickSort(int *Array, int l, int h)
{
    int x;

    if (l < h)
    {
        x = partition(Array, l, h);
        quickSort(Array, l, x);
        quickSort(Array, x + 1, h);
    }
}


int main()
{

    //int a[] = {4,9,8,7,5,10,3,12,2};
    //int a[] = {7,10,8,12,9};
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;
    quickSort(a, 0, n);

    for (int i = 0; i < n ; i++)
    {
        cout << a[i] << endl;

    }
    cout << "Hello world!" << endl;
    return 0;
}
