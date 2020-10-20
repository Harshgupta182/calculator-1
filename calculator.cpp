#include<iostream>
using namespace std;

void sum(int a, int b);
void square(int c);
void cube(int y);
void subtract(int c, int d);
void remainder(int m ,int n);
void divide(int a, int b);
void reverse(int n);
void factorial(int n);

int main()
{
int a,b,c,d;
int y;
int m, n;
sum(a,b);
subtract(c,d);
square(c);
cube(y);
remainder(m,n);
divide(a,b);
reverse(n);
factorial(n);
  
return 0;
 }

void sum(int a, int b)
{
 int sum = a+b;
 cout << "sum is" << sum;
}
void square(int c)
{
 int square = c*c;
 cout << "square is" << square;
}
void cube(int y)
{
 int cube = y*y*y;
 cout << "cube is" << cube;
}
void subtract(int c, int d)
{
 int subtract = c-d;
 cout<<"ans is"<<subtract;
}
void remainder(int m ,int n)
{
int rem = m%n 
cout<<"the remainder is "<<rem;
}

void divide(int a, int b)
{
cout << "\n\n Divide two numbers and print:\n";
cout << "----------------------------------\n";
int a;
int b;
int resdiv;
a=30;
b=10;
resdiv=a/b;
cout << " The quotient of "<< a << " and "<<b <<" is : "<< resdiv <<"\n\n" ;
return 0;
}
void reverse(int n)
{
    int n, reverse = 0, remainder;
    printf("Enter any number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
       reverse = reverse*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", reverse);
    return 0;	
}
void factorial(int n)
{
	int n, i, factorial;
    factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    }
    return 0;
}
