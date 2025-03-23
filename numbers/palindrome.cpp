// https : // takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not/


        bool
        palindrome(int n)
{
    int num = n;
    int temp = 0;
    while (num > 0)
    {
        temp = temp * 10 + num % 10;
        num = num / 10;
    }
    if (n == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
