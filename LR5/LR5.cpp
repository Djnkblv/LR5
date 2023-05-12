#include <iostream>

using namespace std;

int main()
{
    int* x;
    int* y;
    x = malloc(sizeof(int));
    *x = 42;

    *y = 13;
    cout << x << *y;

}
