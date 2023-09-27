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
	do{
	cout << "Please enter 5 characters" << endl;
	cin >> pass;
	if(pass.size() != 5){
		cout <<"Invalid input. Please enter 5 characters ";
		cin >> pass;
		}
	}while(pass.size() != 5);
	for(int i=0; i <pass.size() ; ++i) {
		int asciiValue = int(pass[i]);
		if(asciiValue % 2 == 0){
			asciiValue += 40;
			if(asciiValue >= 32 && asciiValue <=126)
				cout << pass[i] << " = " << char(asciiValue) << endl;
			else
				cout << pass[i] << " = " << asciiValue << endl;
		}else{
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
	return 0;
}
