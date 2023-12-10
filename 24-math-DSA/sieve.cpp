#include <iostream>
#include <vector>

using namespace std;

// Time Complexity
// O(n *log(log n))

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int cnt = countPrimes(n);
    cout << "Total prime numbers = " << cnt << endl;

    return 0;
}