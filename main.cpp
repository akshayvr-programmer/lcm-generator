#include <iostream>
using namespace std;

int main()
{
    int x, y, max;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    // maximum value between n1 and n2 is stored in max
    max = (x > y) ? x : y;

    do
    {
        if (max % x == 0 && max % y == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;
}
