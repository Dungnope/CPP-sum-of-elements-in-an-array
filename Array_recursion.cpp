#include<iostream>

using namespace std;

int recursion_array(int n[],int Size) // n is the nu
{   
    int numbers = 0;
    if(Size == 0) return numbers;
    numbers += n[Size - 1];
    cout << numbers << endl;
    Size--;
    return numbers + recursion_array(n, Size);
}

int main()
{
    int n, arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << recursion_array(arr, n) << endl;
    
}