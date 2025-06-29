/*
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void maximum(int arr[], int n)
{
    bubblesort(arr, n);
    cout << "The maximum number : " << arr[n - 1] << endl;
}
void minimum(int arr[], int n)
{
    bubblesort(arr, n);
    cout << "The minimum number : " << arr[0] << endl;
}
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i < sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
void primeCounter(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    cout << "The number of prime numbers : " << count << endl;
}
bool isPalindrome(int n)
{
    int original = n, reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}
void palindromeCounter(int arr[], int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]=='0'||arr[i]=='1'||arr[i]=='2'||arr[i]=='3'||arr[i]=='4'||arr[i]=='5'||arr[i]=='6'||arr[i]=='7'||arr[i]=='8'||arr[i]=='9'||arr[i]=='11'||arr[i]=='22'||arr[i]=='33'||arr[i]=='44'||arr[i]=='55'||arr[i]=='66'||arr[i]=='77'||arr[i]=='88'||arr[i]=='99')
        {
            count++;
        }
    }


    cout << "The number of palindrome numbers : " << count << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maximum(arr, n);
    minimum(arr, n);
    primeCounter(arr, n);
    palindromeCounter(arr, n);

    return 0;
}


*/
#include <bits/stdc++.h>
using namespace std;
int countDivisor(int num)
{
    int m = num / 2;
    int counter = 0;
    for (int z = 1; z <= m; z++)
    {
        if (num % z == 0)
        {
            counter++;
        }
    }
    return counter;
}
bool palindrome(int num)
{ 
    int temp = num;
    int sum = 0; 
    int d;
    while (num > 0)
    {                         
        d = num % 10;         
        sum = (sum * 10) + d; 
        num /= 10;            
    }
    if (temp == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size]; 
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    cout << "The maximum number : " << arr[size - 1] << endl;
    cout << "The minimum number : " << arr[0] << endl;
    int countPrime = 0;
    int countPalindrome = 0;
    for (int i = 0; i < size; i++)
    {
        if (palindrome(arr[i]))
        {
            countPalindrome++;
        }
        int m = arr[i] / 2; 
        int flag = 0;
        for (int z = 2; z <= m; z++)
        {
            if (arr[i] % z == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && arr[i] != 1)
            countPrime++;
    }
    cout << "The number of prime numbers : " << countPrime << endl;
    cout << "The number of palindrome numbers : " << countPalindrome << endl;
    int c;
    int max;   
    int index; 
    for (int i = 0; i < size; i++)
    {                             
        c = countDivisor(arr[i]); 
        if (i == 0)
        {
            max = c;
            index = i;
        }
        else
        {
            if (c >= max)
            {
                max = c;
                index = i;
            }
        }
    }
    cout << "The number that has the maximum number of divisors : " << arr[index] << endl;
}