#include <iostream>

using namespace std;

double min(double a, double b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int sumFromOneToN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int sumOfAllDig(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int nCr(int n, int r)
{
    int a = factorial(n);
    int b = factorial(r);
    int x = factorial(n - r);
    return a / (b * x);
}

string prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return "Composite";
        }
    }
    return "Prime";
}

void printPrime(int n)
{
    cout << "List of All Prime Numbers from 2 - " << n << endl;
    for (int i = 2; i <= n; i++)
    {
        if (prime(i) == "Prime")
        {
            cout << i << endl;
        }
    }
}

int fab(int n){
    int i;
    int a = 0;
    int b = 1;
    int c = i;
    if(n==0){
        return 0;
    }
    for(i=2;i<=n;i++){
        c = a+b;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    // minimum of two numbers
    cout << min(9, 4);
    // calculating sum from 1 to n
    cout << endl
         << sumFromOneToN(50);
    // calculating factorial of a number
    cout << endl
         << factorial(4);
    // Calculate sum of digit of number
    cout << endl
         << sumOfAllDig(914);
    // Calculate nCr binomial co-efficient for n & r
    cout << endl
         << nCr(6, 3);
    // Check if a number is prime or not
    cout << endl
         << prime(2) << endl;
    // Print All the prime numbers from 2 till N
    printPrime(15);
    // Print nth fabonacci number
    cout << fab(6);

    return 0;
}