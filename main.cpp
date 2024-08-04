#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;   // initialize variables
    int *p = NULL, *q = NULL, *r = NULL;   // initialize pointers

    cout << "Enter the 3 integer values: " << endl;  // ask user to enter numbers
    cin >> a >> b >> c;

    p = new int;  // allocate memory for pointers
    q = new int;
    r = new int;

    *p = a;  // assign the value to pointers
    *q = b;
    *r = c;

    // print the values of the variables
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    // print the values pointed to by the pointers
    cout << "p : " << *p << endl;
    cout << "q : " << *q << endl;
    cout << "r : " << *r << endl;

    // delete allocated memory
    delete p;
    delete q;
    delete r;

    return 0;
}

