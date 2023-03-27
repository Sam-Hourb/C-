#include<iostream>
#include<string>

using namespace std;

void reverse(string &ar)
{
    int i;
    int j;
    for(i = 0, j = ar.length()-1; i < j ; i++ , j--)
    {
        char temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}

int main()
{
    string st = "Hello World!";
    reverse(st);
    cout << st;
}
