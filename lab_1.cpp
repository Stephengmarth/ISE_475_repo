//Author: Stephen Marth
//Date: 29AUG2024
//Title: Lab 1

//Task: Write a c program that takes a users anme
// and age as input and prints a personalized greeting.


#include <iostream>
#include <string>

int main() {
    int age; // declare age as int
    std::string name; // declare name as string 
    
    std::cout<< "Enter your name: "; //printed line asking for name 
    std::cin>> name; // user input called name 
    
    std::cout<< "enter your age:"; // printed line asking for age 
    std::cin>> age; // user input called age 
    
    std::cout << "Hello "<< name<< " you are " <<age<< " years old!"; // printed greeting weth int age and string name 

    return 0; 


    }