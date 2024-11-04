//Crystal Zhang
//11.04.2024
//Lab 8

#include <iostream> 
#include <cmath> 
#include <cctype> 
using namespace std; 

int doubleMultiply (int a, int b) //This is a user defined function, it's name doubleMultiply and runs integers. It has two integer parameters
{ 
    int product; //defines the variable that will be used in this function
    product = a * b * 2; //defines what it's equal to/what to do with the integers that will be inputted 
    return product; //returns the product
}

int main() 
{
  //Start of Part 1

  double num; //defines the variable that will be used

  cout << "Enter the number you want to be calculated." << endl; //prompts user to enter a number for the variable
  cin >> num; //allows user to enter the number 

  //caclulates and prints out the square root of the number through sqrt(x)
  cout << "The square root of " << num << " is " << sqrt(num) << endl; 
  //calculates and prints out the number raised to the fourth power through pow(x)
  cout << num << " raised to the fourth power is " << pow(num, 4) << endl; 
  //calculates and prints out the number rounded to an int through floor(x)
  cout << "The floor of " << num << " is " << floor(num) << endl; 

  //End of Part 1

  //Start of Part 2

  int num1, num2; //defines the two variables that will be used to obtain the product
  cout << "Enter two integers: "; //prompts user to enter the integers
  cin >> num1 >> num2; //allows them to enter the integers 
  cout << "Twice the product of the numbers is: " << doubleMultiply (num1, num2) << endl; 
  //calculates and prints out the product obatined after putting the user defined variables into the user defined function above the int main


  /* 
  The square root of 2.4 is 1.54919
  2.4 raised to the fourth power is 33.1776
  The floor of 2.4 is 2
  */

  return 0;
}
