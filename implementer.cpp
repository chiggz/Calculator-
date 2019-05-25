#include <iostream>
#include "calculator.cpp"
using namespace std;

int main() {

	Calculator calculator;
	int input1, input2, choice;
	cout<<"\tEnter\n\t1 To Compute Sum\n\t2 To Compute Product\n"<<endl;
	cin>>choice;


	if(choice == 1)
	{
		cout<<"Enter the first number: "<<endl;
		cin>>input1;
		cout<<"Enter the second number: "<<endl;
		cin>>input2;

		int sum  = calculator.Add(input1, input2);
		std::cout <<"Sum: "<< sum << std::endl;
	}
	else if(choice == 2)
	{
		cout<<"Enter the first number: "<<endl;
		cin>>input1;
		cout<<"Enter the second number: "<<endl;
		cin>>input2;
		int product = calculator.Multiply(input1, input2);
		std::cout <<"Product: "<< product << std::endl;	
	}
	else
	{
		cout<<"Enter a valid choice!!!"<<endl;
	}
	
	
	
	return 0;
}
