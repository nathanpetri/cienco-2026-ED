#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o primeiro numero: " << endl;
    cin >> a;
    cout << "Digite o segundo numero: " << endl;
    cin >> b;
    cout << "Digite o terceiro numero: " << endl;
    cin >> c;

    if (a > b && a > c) {
        cout << "O maior numero eh: " << a << endl;
    }
    else if (b > a && b > c) {
        cout << "O maior numero eh: " << b << endl;
    }
    else {
        cout << "O maior numero eh: " << c << endl;
    }

    return 0;
}
