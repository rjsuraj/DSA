#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n, count = 0, ans = 0;
    while (temp)
    {
        temp /= 10;
        count++;
    }

    temp = n;
    while (temp)
    {
        int rem = temp % 10;
        temp /= 10;
        ans += pow(rem, count);
    }

    return (n == ans);
}

int main()
{
    int n;
    cin >> n;
    if (isArmstrong(n))
        cout << "true";
    else
        cout << "false";
}
