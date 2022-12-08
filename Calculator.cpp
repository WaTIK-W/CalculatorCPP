#include <iostream>

int getNumber()                                       // Get numbers from user
{
	std::cout << "Enter a number: ";

	int number;
	std::cin >> number;
	return number;
}

int getOperator()                                     // Get math operators from user
{
	std::cout << "Enter an operator number 1-(+); 2-(-); 3-(*); 4-(/): ";

	int op;
	std::cin >> op;
	return op;
}

int calculateResult(int input1, int op, int input2)   // Calculate a result
{
	if (op == 1)
		return input1 + input2;

	if (op == 2)
		return input1 - input2;

	if (op == 3)
		return input1 * input2;

	if (op == 4)
		return input1 / input2;

	return -1;
}

void printResult(int result)                          // Print the result in console
{
	std::cout << "Your result is: " << result << std::endl;
}


int main()
{

	int input1 = getNumber();                         // Get first number from user

	int op = getOperator();                           // Get math operator from user

	int input2 = getNumber();                         // Get second number from user

	int result = calculateResult(input1, op, input2); // Get the result from 3 inputs

	printResult(result);                              // Print the result in console

	main();

}