#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    
    struct Rectangle r = {6, 7};
    cout << r.length << " " << r.breadth << endl;
    r.length = 5;
    r.breadth = 2;
    cout << r.length << " " << r.breadth << endl;


    //----------Array of structures-------//
    struct Rectangle shapes[25];
    shapes[0].length = 1;
    shapes[0].breadth = 2;
    cout << shapes[0].length << " " << shapes[0].breadth << endl;
}