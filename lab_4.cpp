//Publisher: Stephen Marth
//Date: 27SEP2024
//Version: 2


// Define a Car class with attributes such as make
//model, year of manufacture, and mileage.
//Implement methods that allow the user to:
//Enter car details. Display car details.
//Implement a method that calculates the car's age
//(current year - year of manufacture).
//Challenge: Add a method to update the car's details
//after the  object has been created, but only allow
//changes if the new value is valid 
//(e.g., year of manufacture can't be in the future,
//mileage must be non-negative).


#include <iostream>
#include <string>
using namespace std;

class Car{
    
    private:
    
    //variables need to be public for this 
    public:
    string make;
    string model;
    int year;
    float mileage;
    int to_year = 2024;
    
    //default constructor
    Car() : make("Chevy"), model("equinox"), year(2008), mileage(150000.5){}
    Car(string mk, string mo,int y, int mi){
        make = mk;
        model = mo;
        year = y;
        mileage = mi;
    }
    
    //function to display
    void display(){
        cout << "Make: "<<make
        <<", Model: " << model
        <<", year: "<<year
        <<", age: "<<age(to_year)
        <<", Mileage: "<<mileage
        <<endl;
    }
    
    //function to calculate cars age
    int age(int to_year){
        if(to_year < year){
            cout<<"Invalid year"<<endl;
            
        }
            return to_year-year;
    }
    
    //update car
    void update(string upmake, string upmodel, int upyear, float upmileage){
        if (upyear>2024)
        cout<<"ERROR: Im pretty sure the car isnt from the future!"<<endl;
        if (upmileage<0){
            cout<<"ERROR: I know you are not driving in reverse that much!"<<endl;
            return;
        }
        make = upmake;
        model = upmodel;
        year = upyear;
        mileage = upmileage;
    }
};
int main (){

// display current information 
cout<<"This is car1 before your changes."<<endl;
    Car car1;
    car1.display();
cout<<"\n";
//update and display HERE    

cout<<"\n";
    car1.update("Ford", "F-150", 2027, -78);
    cout<<"\n";
    cout<<"This is the updated car1."<<endl;
    car1.display();
    
return 0;    
}
  
