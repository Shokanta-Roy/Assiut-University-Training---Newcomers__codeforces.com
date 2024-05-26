#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<sstream>
#include<vector>
#include<map>
#include<set>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }

    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }

    return binary;
}

int countOnes(const string& binary)
{
    int count = 0;
    for(char bit : binary)
    {
        if(bit == '1')
        {
            count++;
        }
    }
    return count;

}

int decimalFormOf_ones(int number_of_ones)
{
    int decimal = 0;
    for(int i = 0; i < number_of_ones; i++)
    {
        decimal += pow(2, i);
    }
    return decimal;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string binary = decimalToBinary(n);
        int ones = countOnes(binary);
        cout << decimalFormOf_ones(ones) << endl;
    }
    return 0;
}
