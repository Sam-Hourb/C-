#include<iostream>
#include<string>

using namespace std;

void toUpper(string &ar)
{
    const char *arr = ar.c_str();

    for(int i = 0; arr[i] != '\0' ; i++)
    {
        if(ar[i] >= 97 && ar[i] <= 122)
        {
            ar[i] = ar[i] - 32;
        }
    }

}

void toLower(string &ar)
{
    const char *arr = ar.c_str();

    for(int i = 0; arr[i] != '\0' ; i++)
    {
        if(ar[i] >= 65 && ar[i] <= 90)
        {
            ar[i] = ar[i] + 32;
        }
    }

}

int main()
{
    string st = "Hello World!";
    toUpper(st);
    cout << st << endl; 
    toLower(st);
    cout << st;
}
