#include <iostream>
using namespace std;

// function declaration
int Add(int num1, int num2);
int Multiply(int num1, int num2);

int main() {
	// your code goes here
	int sum  = Add(10, 15);
	int product = Multiply(10, 15);
	std::cout << sum << std::endl;
	std::cout << product << std::endl;
	return 0;
}

int Add(int num1, int num2)
{
    return num1+num2;
}
int Multiply(int num1, int num2)
{
    return num1*num2;
}
