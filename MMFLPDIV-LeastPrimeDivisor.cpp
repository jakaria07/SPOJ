#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    for(int j = 3; j*j <= n; j += 2)
    {
        if(n % j == 0)
            return false;
    }
    return true;
}
int leastPrime(long long n)
{
    int i;
    for(i = 3; i*i <= n; i += 2)
    {
        if((isPrime(i) == true) && (n%i == 0))
        {
            break;
        }
    }
    return i;
}

int main()
{
    long long n;

    while(n > 0)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        if(isPrime(n) == true)
        {
            cout << n << endl;
        }
        else if(isPrime(n) == false)
        {
            cout << leastPrime(n) << endl;
        }
    }
    return 0;
}
