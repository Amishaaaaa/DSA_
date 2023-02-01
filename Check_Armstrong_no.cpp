// C++ program to determine whether the number is
// Armstrong number or not
#include <bits/stdc++.h>
using namespace std;

bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}

// Driver Program
int main()
{
	int n ;
	cin>>n;
	cout <<boolalpha << ArmstrongNumber(n) << endl;
	
	return 0;
}
