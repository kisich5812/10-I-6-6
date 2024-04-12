#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int convert(string n) {
    int dec = 0;
    int s = 0;
    for (int i = n.length() - 1; i >= 0; i--) {
        int a = n[i] - '0';
        dec += a * pow(2, s);
        s++;
    }
    return dec;
}

int main() {
    string n;
    cin >> n;
    int dec = convert(n);
    cout << dec << endl;
    return 0;
}
