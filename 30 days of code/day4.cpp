//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         12th May, 2020
//	Description:  Task:
//			Write a Person class with an instance variable, age, and a constructor
//			that takes an integer, initialAge, as a parameter. The constructor must 
//			assign initialAge to age after confirming the argument passed as 
//			initialAge is not negative; if a negative argument is passed as 
//			initialAge, the constructor should set age to 0 and print Age is not 
//			valid, setting age to 0.. In addition, you must write the following 
//			instance methods:
//
//			1. yearPasses() should increase the age instance variable by 1.
//			2. amIOld() should perform the following conditional actions:
//				--If age < 13, print You are young..
//				--If age >= 13 and age < 18, print You are a teenager..
//				--Otherwise, print You are old..
//
//		      Input Format:
//			The first line contains an integer, T (the number of test cases), and 
//			the T subsequent lines each contain an integer denoting the age of 
//			a Person instance.
//		      Output Format:
//		      	Each test case will print 2 or 3 lines (depending on whether or 
//		      	not a valid initialAge was passed to the constructor).
//			
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //


using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        // Increment the age of the person in here

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
