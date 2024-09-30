/*
Publisher: Stephen Marth
Date: 17SEP2024
Version: 2

*/
#include <iostream>
#include <string>

void function1(){
    
std::cout<<std::endl;
    //Declare an integer variable a 
    int a = 10;
    
    //and a pointer ptr that points to a
    int *ptr = &a;
    
    //Print the address of a
    std::cout<<"DIRECT ADDRESS OF a"<<std::endl;
    std::cout<<&a<<std::endl;
    std::cout<<std::endl;
    
    //and the value
    std::cout<<"DIRECT PRINT VALUE a,"<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<std::endl;
    
    //Modify the value of a using the pointer ptr
    *ptr = 3000;
    
    //pointer dereferencing for a
    std::cout<<"*ptr DEREFERNCING VALUE"<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<std::endl;
    
    //pointer dereferencing for a
    std::cout<<"*ptr DEREFERNCING ADDRESS"<<std::endl;
    std::cout<<ptr<<std::endl;
    std::cout<<std::endl;
    
    //pointer dereferencing for a
    std::cout<<"*ptr ADDRESS"<<std::endl;
    std::cout<<&ptr<<std::endl;
    std::cout<<std::endl;
     
    
}    
 
void function2(){

   std::cout<<std::endl;
   //Declare an array of 5 integers.  
   int arr [] {1,2,3,4,5};
   int *ptrarr = arr;
   
   std::cout<<"THIS IS THE ADDRESS OF THE ARRAY"<<std::endl;
   std::cout<< arr <<std::endl;
   std::cout<<std::endl;
   
   //Use a pointer to access each element of the array, and print each element using pointer arithmetic.  
   std::cout<<"EACH ELEMENT OF ARRAY USING POINTER ARITHMATIC"<<std::endl;
   for (int i = 0; i<5; i++){
       std::cout<<"["<<*(ptrarr+i)<<"]";
       if (i<5-1){
           std::cout<<",";
       }
       if (i==5-1){
           std::cout<<".";
        }
       
   }
  
  //Modify each element of the array by adding 10 to each value using the pointer.
  std::cout<<std::endl;
  std::cout<<"."<<std::endl;
  std::cout<<"ADD TEN TO EACH VALUE USING THE POINTER"<<std::endl;
    for (int i = 0; i<5; i++){
    *(ptrarr+i) +=10;
    }
    for (int i = 0;i<5; i++){
        std::cout<<"["<<*(ptrarr+i)<<"]";
        if (i<5-1){
        std::cout<<",";
        }
        if (i==5-1){
        std::cout<<"."<<std::endl;
        }
        
    }
    std::cout<<std::endl;
    
}    

void function3(){
    
    std::cout<<std::endl;
    
    //Dynamically allocate an array of n integers, where n is provided by the user.
    int n;
    std::cout<<"ENTER THE NUMBER OF INTEGERS YOU WANT TO USE"<<std::endl;
    std::cin>>n;
    std::cout<<"Enter "<<n<<" integers:"<<std::endl;
 
    //Use a pointer to input values into the array from the user
    int* numb = new int[n];
    for (int i=0; i<n; i++){
        std::cin>>*(numb+i);
    }
   
    //Find and print the sum of the elements in the array using the pointer.
    int sum =0;
    for (int i=0; i<n; i++){
      sum += *(numb+i);
    }
    std::cout<<"THE SUM OF ALL THE INTEGERS IS:"<<std::endl; 
    std::cout<<sum<<std::endl;
  
    //Deallocate the memory using delete[] to avoid memory leaks.
    delete[] numb;
    
}



int main() {
    //Function1
    std::cout<<"------>Function 1<------"<<std::endl;
    function1();
    //Function2
    std::cout<<"------>Function 2<------"<<std::endl;
    function2();
    //Function3
    char again;
    do {
        std::cout << "------> Function 3 <------" << std::endl;
        function3();
        std::cout<<std::endl;
        // Ask the user if they want to run Function 3 again
        std::cout << "PRESS ENTER TO START FUNCTION 3 AGAIN ";
        std::cin.ignore();  
        again = std::cin.get(); 
    } while (again == '\n' );// press enter \n new line key
        std::cout<<std::endl;
    return 0;
}