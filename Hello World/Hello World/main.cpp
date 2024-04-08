#include<iostream>
using namespace std;

void fib(int n)
{
    int fib_1 = 0, fib_2 = 1, a;
    cout << fib_1 << endl;
    cout << fib_2 << endl;
    for (int i = 2; i < n; i++) {
        a = fib_1;
        fib_1 = fib_2;
        fib_2 = a + fib_1;
        cout << fib_2 << endl;
    }
}

int main() {
    cout << "Hellow World!" << endl;

    int n; cin >> n;
    fib(n);

    return 0;
}