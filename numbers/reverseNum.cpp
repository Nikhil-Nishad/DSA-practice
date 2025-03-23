// Problem Statement : Given an integer N return the reverse of the given number.

// Note : If a number has trailing zeros, then its reverse will not include them.For e.g., reverse of 10400 will be 401 instead of 00401.

// https://takeuforward.org/maths/reverse-digits-of-a-number

#include <bits/stdc++.h>
    using namespace std;


int reverse(int x) {

int lastDigit=0;

long temp = x ;

long rev=0;


while(abs(temp)>0){

lastDigit=temp%10;

rev= (rev*10)+ lastDigit;

temp=temp/10;

}
return rev ;
}