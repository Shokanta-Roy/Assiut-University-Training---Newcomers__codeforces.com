#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip> //For setprecision; cout<<fixed<<setprecision(xx);
using namespace std;

// Function names;
bool isOdd();
long long printing_1_To_N();
long long prime_Checker();
void number_Swaping();
long long power();
void maximum_minimum_From_ARRAY();
bool is_palindrome_ARRAY();
void MATRIX_swap_X_Rows_with_Y_Rows();
void MATRIX_swap_X_Columns_with_Y_Columns();
bool is_Binary_Palindrome();
long long gcd();
long long lcm();
long long factorial();
long long multipliction_of_N_to_M();
long double distance_Between_two_points();
long double slope_Of_Points();
bool triangle_Checking();
long double area_Of_The_Triangle();
bool are_Parallel_By_Slopes();
bool are_Parallel_Two_Line_By_Points();
bool do_Circles_Intersect();

//Function Start;
bool isOdd(long long n)
{
    if(n%2==0)
    {
        return false;
    }
    return true;
}

long long printing_1_To_N(long long n)
{
    for(long long i=1; i<=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

long long prime_Checker(long long n)
{
    if(n<2)
    {
        return 0;
    }
    for(long long i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void number_Swaping(long long a,long long b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

long long power(long long base, long long exp)
{
    long long result = 1;
    for (long long i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

void maximum_minimum_From_ARRAY(long long arr[], long long n, long long& minVal, long long&maxVal)
{
    minVal = arr[0];
    maxVal = arr[0];
    for(long long i=1; i<n; i++)
    {
        if(arr[i] < minVal)
        {
            minVal = arr[i];
        }
        if(arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
}

bool is_palindrome_ARRAY(long long  arr[],long long n)
{
    for(long long i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            return false;
        }
    }
    return true;
}

void MATRIX_swap_X_Rows_with_Y_Rows(long long** matrix, long long n, long long x, long long y)
{
    for(long long j = 0; j < n; ++j)
    {
        swap(matrix[x][j], matrix[y][j]);
    }
}

void MATRIX_swap_X_Columns_with_Y_Columns(long long** matrix, long long n, long long x, long long y)
{
    for(long long i = 0; i < n; ++i)
    {
        swap(matrix[i][x], matrix[i][y]);
    }
}

bool is_Binary_Palindrome(long long n)
{
    string binary_representation = "";
    while (n > 0)
    {
        binary_representation += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    string reversed_binary = binary_representation;
    reverse(reversed_binary.begin(), reversed_binary.end());
    return binary_representation == reversed_binary;
}

long long gcd(long long  a, long long b)
{
    while (b !=0)
    {
        long long  temp=b;
        b = a%b;
        a = temp;
    }
    return a;
}

long long lcm(long long  a,long long  b)
{
    return (a*b)/gcd(a,b);
}

long long factorial(int n)
{
    long long result=1;
    for(int i=1; i<=n; i++)
    {
        result*=i;
    }
    return result;
}

long long multipliction_of_N_to_M(long long n, long long m)
{
    if(n>m)
    {
        return 0;
    }
    long long product=1;
    for(long long i=n; i<=m; i++)
    {
        product*=i;
    }
    return product;
}

long double distance_Between_two_points(long double x1, long double x2, long double y1, long double y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

long double slope_Of_Points(long double x1, long double y1, long double x2, long double y2)
{
    if (x2 == x1)
    {
        return std::numeric_limits<long double>::infinity(); // Vertical line
    }
    return (y2 - y1) / (x2 - x1);
}

bool triangle_Checking(long long a, long long b, long long c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return true;
    }
    return false;
}

long double area_Of_The_Triangle(long double a, long double b, long double c)
{
    long double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

bool are_Parallel_Two_Line_By_Points(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4)
{
    long double m1= slope_Of_Points(x1,y1,x2,y2);
    long double m2= slope_Of_Points(x3,y3,x4,y4);
    if(m1==m2)
    {
        return true;
    }
    return false;
}

bool are_Parallel_By_Slopes(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4)
{
    long double m1 = slope_Of_Points(x1, y1, x2, y2);
    long double m2 = slope_Of_Points(x3, y3, x4, y4);
    return m1 == m2;
}

bool do_Circles_Intersect(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4)
{
    //center and radius of 1st circle;
    long double c1x= (x1+x2)/2.0;
    long double c1y= (y1+y2)/2.0;
    long double r1= distance_Between_two_points(x1,y1,x2,y2)/2.0;

    //center and radius of 2nd circle;
    long double c2x= (x3+x4)/2.0;
    long double c2y= (y3+y4)/2.0;
    long double r2= distance_Between_two_points(x3,y3,x4,y4)/2.0;

    long double d= distance_Between_two_points(c1x,c1y,c2x,c2y);
    long double rr= r1+r2;

    //Checking intersection
    if(d<=rr)
    {
        return false;
    }
    else
    {
        return true;
    }
}



void solve()
{
	long long t;
    cin>>t;
    int counter=1;
    while (counter<=t)
    {
        long long num;
        cin>>num;
        long long x1,y1,x2,y2,max1,may1,minx2,miny2;
    	cin>>x1>>y1>>x2>>y2;
    	max1 = x1, may1 = y1,minx2=x2,miny2=y2;
        for(int i=1;i<num;i++)
        {
    		cin>>x1>>y1>>x2>>y2;
    		max1 = max(max1,x1);
    		may1 = max(may1,y1);
    		minx2 = min(minx2,x2);
    		miny2 = min(miny2,y2);
        }
        if(minx2 > max1 && miny2 > may1)
        {
			cout<<"Case #"<<counter<<": "<<(minx2 - max1) * (miny2 - may1)<<endl;
		}
        else
        {
			cout<<"Case #"<<counter<<": "<<0<<endl;
		}
        counter++;
    }
}

int main()
{
	solve();

	return 0;
}
