//Publisher: Stephen Marth
//Date: 06SEP2024
//Version: 1

/*Lab 2: Diving Into Control Structures

Objective: Practice conditional statements and loops in C++.

Task: Create a simple calculator that allows continuous operations until the user decides to exit.

Using functions, the calculator should support addition, subtraction, multiplication, and division.

Challenge: Add error handling to manage non-numeric inputs and division by zero.

Submit a .cpp file with your code.
Submit a screenshot of the output(s).
Documentation accounts for 30% of the grade.
Late submissions will receive a maximum of 50% of the grade and will be considered for grading later in the semester.
ChatGPT (and like) generated code will recieve a zero and will be escalated as an academic integrity violation.
*/
#include <iostream>
#include <stdexcept>  // this



// Declare Functions 
// return_type function_name(parameter_list);
//add
double add(double a, double b);
//subtract
double subtract(double a, double b);
//multiply
double multiply(double a, double b);
//divide
double divide(double a, double b);

int main() {
    //declare double and char for inputs
    double num1, num2;
    char op;



// get input and store as num1
    std::cout << "Enter your first number: ";
        std::cin >> num1;
//enter what you want 

    std::cout << "Enter +, -, *, /: ";
        std::cin >> op;
// get input and store as num2
    std::cout << "Enter your second number: ";
        std::cin >> num2;
        
        
        

    try {
        double result;

        switch (op) {
// case add
            case '+':
                result = add(num1, num2);
                break;
//case subtract
            case '-':
                result = subtract(num1, num2);
                break;
//case Multiply
            case '*':
                result = multiply(num1, num2);
                break;
//case Divide
            case '/':
                result = divide(num1, num2);
                break;
//invalid input
            default:
                throw std::invalid_argument("Invalid input");
        }

        std::cout << "=  " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error! " << e.what() << std::endl;
    }

    return 0;
}
// Define Functions 
//add
double add(double a, double b) {
    return a + b;}
//subtract
double subtract(double a, double b) {
    return a - b;}
//multiply
double multiply(double a, double b) {
    return a * b;}
//divide
double divide(double a, double b) {
    if (b == 0) {
        
        
        // no divide by zero
        
        
        
        throw std::runtime_error("Cant divide by zero!!");}
    return a / b;
}
