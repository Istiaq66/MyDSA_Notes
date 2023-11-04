#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p, *q;
    p = &a;
    cout << *p << endl;
    //   q = *p; // pointers can only store addresses not the value of a int
    //    cout << q;

    // pointer to access heap
    // in c -->>
    q = (int *)malloc(5 * sizeof(int));
    // in c++ -->>
    q = new int[5];

    // Reference variable//
    int x = 11;
    int &r = x;
    cout << r;
}