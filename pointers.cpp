//     This program displays the values and memory addresses in the array: 
//     firstly using the array, then pointer. It also asks the user to 
//     input 3 integers withing the indices of array and displays the values
//     and memory addresses of those integers. Eventually, program asks the
//     user to input 2 integers. Program then with the help of pointers,
//     finds the sum of those array indices and displays them.
//     
//****************************************************************************************************

#include <iostream>

using namespace std;

const int SIZE = 5;

void f1(int numbers[], int SIZE);
void f2(int* ptr, int SIZE);
void f3(int numbers[], int SIZE);
void f4(int numbers[], int SIZE);

//****************************************************************************************************

int main()
{
	int numbers[SIZE] = { 10, 22, 34, 48, 59 };
	int* ptr = &numbers[0];
	
	f1(numbers, SIZE);
	f2(ptr, SIZE);
	f3(numbers, SIZE);
	f4(numbers, SIZE);

	return 0;
}

//****************************************************************************************************

void f1(int numbers[], int SIZE)
{
	cout << "Values in the array are: ";
	for (int i = 0; i < SIZE; i++)
	{
		 cout << numbers[i] << " ";
	}

	cout << endl;
	cout << "Memory addresses in the array are ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << &numbers[i] << " ";
	}
	cout << endl;
}

//****************************************************************************************************

void f2(int* ptr, int SIZE)
{
	cout << "Values in the array are ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << ptr[i] << " ";
	}

	cout << endl;
	cout << "Memory addresses in the array are ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << &ptr[i] << " ";
	}
	cout << endl;
}

//****************************************************************************************************

void f3(int numbers[], int SIZE)
{
	int num1, 
		num2, 
		num3;
	int* p1;
	
	do 
	{
		cout << "Enter 3 integers indices: ";
	    cin >> num1 >> num2 >> num3;
	} 
	while (num1 >= SIZE || num1 < 0 || num2 >= SIZE 
		|| num2 < 0 || num3 >= SIZE || num3 < 0);

	p1 = &numbers[num1];
	cout << "The address of " << num1 << " is " << &numbers[num1] 
		<< " and the value is " << numbers[num1] << endl;
	
	p1 = &numbers[num2];
	cout << "The address of " << num2 << " is " << &numbers[num2] 
		<< " and the value is " << numbers[num2] << endl;

	p1 = &numbers[num3];
	cout << "The address of " << num3 << " is " << &numbers[num3] 
		<< " and the value is " << numbers[num3] << endl;

	cout << endl;

}

//****************************************************************************************************

void f4(int numbers[], int SIZE)
{	
	int num1,
		num2;
	int* p1;
	int* p2;

	do
	{
		cout << "Input the start index of the array: ";
	    cin >> num1;
	} 
	while (num1 < 0 || num1>= SIZE);

	do
	{
		cout << "Input the end index of the array: ";
		cin >> num2;
	}
	while (num2 < 0 || num2>= SIZE);

    p1 = &numbers[num1];
	p2 = &numbers[num2];

	cout << "Sum of the elements at indices is: " << * p1 + *p2 << endl;
}

//****************************************************************************************************
/*

Values in the array are: 10 22 34 48 59
Memory addresses in the array are 0000005658BDF768 0000005658BDF76C 0000005658BDF770 0000005658BDF774 0000005658BDF778
Values in the array are 10 22 34 48 59
Memory addresses in the array are 0000005658BDF768 0000005658BDF76C 0000005658BDF770 0000005658BDF774 0000005658BDF778
Enter 3 integers indices: 2 3 4
The address of 2 is 0000005658BDF770 and the value is 34
The address of 3 is 0000005658BDF774 and the value is 48
The address of 4 is 0000005658BDF778 and the value is 59

Input the start index of the array: 2
Input the end index of the array: 3
Sum of the elements at indices is: 82

*/
