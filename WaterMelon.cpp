#include <iostream>
using namespace std;

// function declaration
void checkSplit(int w)
{
    if (w <= 2)
    {
        cout << "No";
    }
    else
    {
        if (w % 2 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}

// main function (COMPULSORY)
int main()
{
    int w;
    cin >> w;      // input lena
    checkSplit(w); // function call
    return 0;
}
