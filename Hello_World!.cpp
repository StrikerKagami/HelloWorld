// Hello_World!.cpp : Defines the entry point for the console application.
//

//this is a comment.//

/*this is a multi line comment
bada bing bada boom
*/

#include "stdafx.h"

//Includes standard function library
#include <iostream>
//Includes Vector functions
#include <vector>
//Includes String functions
#include <string>
//Includes File IO methods
#include <fstream>

//including header file from external class
#include "Mario.h"

//How to stop needing to use std:: for everything
using namespace std;

class Functions {
	//Functions
public:
	int Function() {
		//Printing function std::cout
		std::cout << "This is a function (printed using std::)" << endl;
		cout << "This is the same function (printed without std::)" << endl;

		cout << "Functions are structured like so:\n	Return type, name, parameters, body.\n " <<
			"for example, int Function () {} - 'int' is our return type, hence why we return 0. " <<
			"'Function' is the name of the function, () are the parameters and {} is the body." << endl;


		//returns a value to the functon - will return a build error without this
		return 0;
	}

	int Variables() {

		//Variables and Data types

		//constant variables
		const double PI = 3.1415926535;

		//char data type//
		char myGrade = 'A';

		//bool data type//
		bool isHappy = true;

		//int data type//
		int myAge = 16;

		//float data type
		float favNum = 3.141;

		//double data type
		double otherFavNum = 1.61887027402;

		//printing Variables
		cout << "My favorite number is " << favNum << "But my other favorite number is " << otherFavNum << endl;

		//finding byte sizes
		cout << "Size of int " << sizeof(myAge) << endl;
		cout << "Size of char " << sizeof(myGrade) << endl;
		cout << "size of bool " << sizeof(isHappy) << endl;
		cout << "etc, etc" << endl;

		return 0;
	}

	int Mathematics() {

		//standard mathematical operators
		cout << "5 + 2 = " << 5 + 2 << endl;
		cout << "5 - 2 = " << 5 - 2 << endl;
		cout << "5 * 2 = " << 5 * 2 << endl;
		cout << "5 / 2 = " << 5 / 2 << endl;
		cout << "5 % 2 = " << 5 % 2 << endl;

		//Incramenting and Decramenting
		int five = 5;
		cout << "5++ = " << five++ << endl;
		cout << "++5 = " << ++five << endl;
		cout << "5-- = " << five-- << endl;
		cout << "--5 = " << --five << endl;

		cout << "5 += 5 = " << five + 5 << endl;

		return 0;
	}

	int Loops() {

		//for loops
		for (int a = 10; a < 30; a = a + 1) {
			cout << "Value of A: " << a << endl;
		}
		

		//while loops
		int bacon = 2;
		while (bacon != 6) {
			cout << "WE NEED " << bacon << "BACONS" << endl;
			bacon++;
		}

		//sentinel loops (ave averaging)
		int age;
		int ageTotal = 0;
		int numberOfPeopleEntered = 0;
		
		cout << "Enter person's age or -1 to quit. \n>> ";
		cin >> age;

		while (age != -1) {
			ageTotal = ageTotal + age;
			numberOfPeopleEntered++;

			cout << "Enter next person's age or -1 to quit. \n>> ";
			cin >> age;
		}

		cout << "numberOfPeopleEntered: " << numberOfPeopleEntered << endl;
		cout << "Average Age: " << ageTotal / numberOfPeopleEntered << endl;

		return 0;
	}

	int Input() {

		string name = "";
		int age = 0;

		//Basic Input
		cout << "What is your name? \n>> ";
		cin >> name;

		cout << "How old are you? \n> ";
		cin >> age;

		cout << "Your name is " << name << " and you are " << age << " Years old!\npress any key to continue." << endl;
		cin >> age;



		return 0;

	}

	void Parameters(string x) {
		cout << "you inputted " << x << " into the function!" << endl;
	}

	int addnumbers(int x, int y) {
		int ans = x + y;
		return ans;
	}

	void Statements() {
		//If, else and else if statements.
		string userinput = "";
		cout << "What is the name of he whom hath created'th this programme?\n>>";
		cin >> userinput;
		if (userinput == "Striker") {
			cout << "Good job, you earned nothing!" << endl;
		}

		else if (userinput == "Me") {
			cout << "Don't be pretentious, dude." << endl;
		}

		else {
			cout << "I don't know what to say. You got it wrong. smh." << endl;
		}


	}
};

//classes and OOP

class StrikerClass {
	//Public and Private declarations
	public:
		void coolprint() {
			cout << "This is printing, but cool. and public." << endl;
		}
	private:
		void stoopidprint() {
			cout << "This is printing, but stuck inside it's mom's basement. also known as private." << endl;
		}

	//Variables in classes
	public:
	//Constructor (automatically called upon object creation)
	StrikerClass(string y) {
		cout << "StrikerClass initialized" << endl; // don't print stuff in actual code constructors
		setName(y);
	}

	//public variables
	void setName(string x) {
		name = x;
	}

	 string getName() {
		return name;
	}
private:
	string name;

};

//code cleanup
int basic() {
	Functions FO;
	FO.Loops();
	FO.Function();
	FO.Variables();
	FO.Mathematics();
	FO.Statements();
	FO.Parameters("Hello World");
	cout << FO.addnumbers(28394, 86382);
	cout << "\n" << endl;
	FO.Input();
	
	return 0;
}

int Classstuff() {
	//how to print stuff from a class
	StrikerClass strikerObject("Nani");
	strikerObject.coolprint();

	StrikerClass poppyObject("TORA'S VERY OWN ARTIFICIAL BLADE...");
	cout << poppyObject.getName() << " POPPY!" << endl;

	/*strikerObject.name = "Striker Kagami";
	cout << strikerObject.name << endl;*/

	cout << strikerObject.getName() << endl;
	strikerObject.setName("No, u");
	cout << strikerObject.getName() << endl;

	Mario pizzaObject;
}

int main()
{

	basic();
	Classstuff();

	//Stopping the program from running wild
	string rip = "";
	cout << "Press any key to continue" << endl;
	cin >> rip;

    return 0;
}

