#include <iostream>
using namespace std;

// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28
// 29 30 31 32 33 34 35 36
// 37 38 39 40 41 42 43 44 45
// 46 47 48 49 50 51 52 53 54 55

void floyds_trangle(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "Enter:  " << n << endl;

    floyds_trangle(n);
    return 0;
}