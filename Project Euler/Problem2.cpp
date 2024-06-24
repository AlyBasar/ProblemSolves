/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.
*/
#include <iostream>

using namespace std;

int main()
{
    int i, sum = 0, total = 0, num1 = 1, num2 = 1;

    for (i = 0; i < 31; i++)
    {
        total = num1 + num2;
        num1 = num2;
        num2 = total;
        if (total % 2 == 0)
        {
            sum += total;
        }
    }
    cout << sum << endl;
    return 0;
}