#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
//array recursion
int recursion_array(int n[],int Size) // n is the nu
{   
    if(Size == 0) return 0;
    Size--;
    return n[Size] + recursion_array(n, Size);
}
//factorial recursion
int recursion_factorial(int x)
{
    if(x == 0) return 1;
    else return x * recursion_factorial(x - 1);
}
//fibonacci recursion
int recursion_fibonacci(int y)
{
    if(y == 0 || y == 1) return 0;
    else if(y == 2) return 1;
    else return recursion_fibonacci(y - 1) + recursion_fibonacci(y - 2);
}
//recursion sum of number
int recursion_sumdigits(int x)
{
    if(x == 0) return 0;
    else return (x % 10) + recursion_sumdigits(x / 10);
}

//check strong number;
bool strong_numbers(int strong)
{
    int temp = 0;
    int x = strong;
    while(strong >= 1)
    {
        temp += recursion_factorial(strong % 10);
        strong /= 10;
    }
    if(temp == x) return true;
    else return false;
}

void FL_numbers(int digits)
{
    int last = digits % 10;
    int first;
    while(digits >= 10)
    {
        digits /= 10;
    }

    first = digits;

    cout << first << " " << last << endl;
}

bool checkPrime(int number)
{
    for(int i = 2; i < sqrt(number); i++)
    {
        if(number % i == 0) return false;
    }
        return true;
}

void perfect_number(int number)
{
    vector<int> guys(100000);
    while (number >= 6)
    {   
        int result = 0;
        for(int j = number; j > 1; j--)
        {
            if(number % j == 0)
            {result += number / j;}
        }
        if(result == number)
        {
            guys.push_back(result);
        }
        number--;
    }
}

//tamgiac pascal
void tinh_sopascal(int r)
{
    for(int i = 0; i <= r; i++)
    {
        for(int j = 0; j <= r; j++)
        {
            if(i >= j)
            {cout << recursion_factorial(i) / (recursion_factorial(j) * recursion_factorial(i - j)) << " ";}
            else break;
        }
        cout << endl;
    }
}

int main()
{
    int n, arr[1000];
    cin >> n;
    tinh_sopascal(n);
}