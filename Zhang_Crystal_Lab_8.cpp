//Crystal Zhang
//11.04.2024
//Lab 8

#include <iostream> 
#include <cmath> 
#include <cctype> 
using namespace std; 

//user defined funtion for part 2 
int doubleMultiply (int a, int b) //This is a user defined function, it's name is doubleMultiply and runs integers. It has two integer parameters
{ 
    int product; //defines the variable that will be used in this function
    product = a * b * 2; //defines what it's equal to/what to do with the integers that will be inputted 
    return product; //returns the product
}


//user defined function for part 3 
double getSum (double a, double b, double c) //This is a user defined function, it's name is getSum and runs floats, doubles. it can run 3 doubles.
{ 
    double sum; //defines the variable that will be used in this function
    sum = a + b + c; //defines what the final variable is equal to/what the function will do to the integers that will be inputted 
    return sum; //returns the sum
}

int main() 
{
  //Start of Part 1

  double num; //defines the variable that will be used

  cout << "Part One" << endl; //defines which part this is 
    
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

  cout << "" << endl; //adds a space between this and the previous part
  cout << "Part Two" << endl; //defines which part this is

  cout << "Enter two integers: "; //prompts user to enter the integers
  cin >> num1 >> num2; //allows them to enter the integers 
  cout << "Twice the product of the numbers is: " << doubleMultiply (num1, num2) << endl; 
  //calculates and prints out the product obatined after putting the user defined variables into the user defined function above the int main
    
  //End of Part 2

  //Start of Part 3 

  double numb1, numb2, numb3; //defines the three variables that will be used to obtain the sum 

    cout << "" << endl; //adds a space between this and the previous part
    cout << "Part Three" << endl; //defines which part this result pertains to
    
    //prompts user to enter the three double numbers that will be used
    cout << "Please input 3 numbers that will be used in this function." << endl;
    //allows user to input the three number
    cin >> numb1 >> numb2 >> numb3; 
    //calculates and prints he sum of those numbers with the user defined function: getSum
    cout << "The sum of all three number inputted is: " << getSum (numb1, numb2, numb3) << endl;

    /* 
    Part One
    Enter the number you want to be calculated.
    2.3
    The square root of 2.3 is 1.51658
    2.3 raised to the fourth power is 27.9841
    The floor of 2.3 is 2

    Part Two
    Enter two integers: 3 9
    Twice the product of the numbers is: 54

    Part Three
    Please input 3 numbers that will be used in this function.
    1.5 2.5 9.5
    The sum of all three number inputted is: 13.
     */
  return 0;
}
