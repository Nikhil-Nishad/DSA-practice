// https: // www.geeksforgeeks.org/problems/count-digits5716/1

// Given a positive integer n, count the number of digits in n that divide n evenly(i.e., without leaving a remainder).Return the total number of such digits.

// A digit d of n divides n evenly if the remainder when n is divided by d is 0(n % d == 0)
// Digits of n should be checked individually.If a digit is 0,
// it should be ignored because division by 0 is undefined.

#include <iostream>
using namespace std;
// Function to count the number of digits in n that evenly divide n
int evenlyDivides(int n)
{
    // code here
    int lastdigit = 0;
    int count = 0;
    int originalNum = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        if (lastdigit != 0)
        {
            if (originalNum % lastdigit == 0)
            {
                count++;
            }
        }
        n = n / 10;
    }
    return count;
}

// 2. https://www.naukri.com/code360/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int countDigits(int n)
{
    // Write your code here.
    int count = 0;
    int temp = 0;
    int originalnum = n;
    while (n > 0)
    {
        temp = n % 10;
        if (temp > 0 && originalnum % temp == 0)
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}




