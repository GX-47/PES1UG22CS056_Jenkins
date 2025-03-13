// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

void pypart(int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Driver Function
int main()
{
    int n = 5;
    pypart(n);
    cout << "PES1UG22CS056";
    return 0;
}
