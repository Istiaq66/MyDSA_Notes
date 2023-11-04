///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

//----------Call By Value---------//
void swapV(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//----------Call By Address---------//
void swapA(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//----------Call By Reference---------//
void swapR(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;

    swapV(a, b); //----------Call By Value---------//
    cout << a << " " << b << nl;

    swapA(&a, &b); //----------Call By Address---------//
    cout << a << " " << b << nl;

    swapR(a, b); //----------Call By Reference---------//
    cout << a << " " << b << nl;
}