#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    vector<int> num;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
            num.push_back(i);
        }
    }

    cout << "Total prime numbers = " << count << endl;
    for (const int &i : num)
    {
        cout << i << "  ";
    }

    return 0;
}