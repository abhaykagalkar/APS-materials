
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int commDiv(int a,int b)
{
    int n = gcd(a, b);
 
    // Count divisors of n.
    int result = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}
 
// Driver program to run the case
int main()
{
    int a = 12, b = 24;
    cout << commDiv(a, b);
    return 0;
}
