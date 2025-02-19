#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++) // Should run exactly `n` times
    {
        for (int j = 0; j < n; j++) // Should run `n` times for a square pattern
        {
            cout << '*';
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << ' ';
        }
        cout << '\n';
    }
}
void pattern7(int n)
{
    // here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    // here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    // here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j < 2 * n - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            if ((i - j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {

        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';

        for (int j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}
void pattern15(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch << ' ';
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // Take input normally
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);

    return 0;
}
