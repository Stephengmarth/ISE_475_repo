/*
Author: Stephen Marth
Date: 12SEP2024
Version: 1
*/

/*
Task:
• Create a program that takes a list of names (strings) from the user, stores them in an array, and sorts them
alphabetically
*/ 


#include <string>
#include <iostream>

//declare bubbleSort Function
void bubbleSort(std::string names[], int n);

int main() {
    
   int n;
   
   //Get number of names make that int the array number
    std::cout << "HOW MANY NAMES DO YOU WANT TO ENTER: \n";
    std::cin >> n;
    std::string names [n];
    
    //assign input to array number in loop 
    std::cout<< "TYPE THE NAME AND PRESS ENTER AFTER EACH NAME: \n";
    for (int i = 0; i < n; i++) {
        std::cin >> names[i];
    }
   // this is a sanity check on seeing that the array was actaully input
   
    std::cout<<"ORIGINAL ORDER: \n";
  for (int i= 0; i<n; i++){
      std::cout << "[" << i << "] " << names[i];
      if (i<n-1){
      std::cout<< ", ";
      }
      if (i==n-1){
      std::cout<< ".";
      }
   }
    std::cout<<"\n";
  
  //from slide for some reason i didnt think it would work bc i didnt understand it and also forgot std::
  
 void bubbleSort(std::string names[], int n);{
       std::string temp;
       for (int i=0;i<n-1;i++){
           for(int j=0; j<n-i-1;j++){
               if (names[j]>names[j+1]){
                   temp = names[j];
                   names[j]=names[j+1];
                   names[j+1]=temp;
               }
           }
       }
   }
   
   //Print our glorious work
   
    std::cout<<"AFTER BUBBLE SORT: \n";   
   for (int i= 0; i<n; i++){
      std::cout << "[" << i << "] " << names[i];
      if (i<n-1){
      std::cout<< ", ";
      }
      if (i==n-1){
      std::cout<< ".";
      }
   
   }
    return 0; //return 0 because main is an int, i think that is why
}