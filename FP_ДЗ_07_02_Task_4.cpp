// Морской бой: FP_ДЗ_07_02Вывести в консоль номера полей игры:
// A0 B0 C0 D0 E0 F0 G0 H0 I0 J0
// A1 B1 C1 D1 E1 F1 G1 H1 I1 J1
// …..
// A9 B9 C9 D9 E9 F9 G9 H9 I9 J9

//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int border = 10, A = 65, J = 74;

    for (int x = 0; x < border; x++)
    {
        for (int y = A; y <= J; y++)
        {
            char symbol = y;
            cout << symbol << x << " ";
        }
        cout << endl;
    }
}

