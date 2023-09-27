// Programmer: Michael Turner
// Student ID: 18229090
// Section: 305
// Date: 9/27/2023
// File: lab5
// Purpose: passphrase security system

#include <iostream>
#include <string>
using namespace std;

int main(){
	string pass;
	char ch;
	char again;
	do{ //main big do loop for user if they want to rerun the program
	do{ //do while loop for input validation
	cout << "Please enter 5 characters" << endl;
	cin >> pass;
	if(pass.size() != 5){ //getting an input of 5 characters
		cout <<"Invalid input. Please enter 5 characters ";
		cin >> pass;
		}
	}while(pass.size() != 5);
	for(int i=0; i <pass.size() ; ++i) { //for loop for each character inserted
		int asciiValue = int(pass[i]);
		if(asciiValue % 2 == 0){//if the number is even 
			asciiValue += 40;
			if(asciiValue >= 32 && asciiValue <=126)
				cout << pass[i] << " = " << char(asciiValue) << endl;
			else
				cout << pass[i] << " = " << asciiValue << endl;
		}else{//if the number is odd
			asciiValue -= 70;
			if(asciiValue <0){
				asciiValue *= asciiValue;
				asciiValue -= 40;
				}
			if(asciiValue >= 32 && asciiValue <=126)
				cout << pass[i] << " = " << char(asciiValue) <<endl;
                	else
				cout << pass[i] << " = " << asciiValue << endl;
			}
		}
	cout << "Do you want to continue running the program? (y/n)";//get user input if they want to rerun the program
	cin >>again;
	}while(again == 'y' || again == 'Y'); //condition for rerunning the program
	return 0;
}
