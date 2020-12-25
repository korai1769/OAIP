#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int A = 0, B = 0;
    do {
        system("CLS");
        cout << "Enter number A: ";
        cin >> A;
        cout << "Enter number B: ";
        cin >> B;
    } while (A > B || A < 0 || B < 0);
    for (int i = A; i < B + 1; i++) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << "|";
    }
    _getch();
    return 0;
}