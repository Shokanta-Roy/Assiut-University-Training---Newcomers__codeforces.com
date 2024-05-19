#include <iostream>

using namespace std;

int main()
{
    double n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    double result= (n1*n2)/n3;
    long long myNum=result;
    double myRes=result-myNum;


    if (myRes>0)
    {
        cout << "double" << endl;
    }
    else if (myNum<= 2147483647)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }

    return 0;
}



