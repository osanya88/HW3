#include <iostream>
#include<iostream.h>
#include "HeartRate.h"
using namespace std;

int main(){
   	string firstName, lastName;
	int d, m, y;
	HeartRates heart;
	cout << "Enter first name: ";
	cin >> firstName;
	heart.setFirstName(firstName);
	cout << "Enter last name: ";
	cin >> lastName;
	heart.setLastName(lastName);
	cout << "Enter the year you were born: ";
	cin >> y;
	heart.setbirthyear(y);
	cout << "Enter the month you were born: ";
	cin >> m;
	heart.setbirthmonth(m);
	cout << "Enter the day you were born: ";
	cin >> d;
	heart.setbirthday(d);

	int age = heart.getAge();
	int maxHR = heart.getMaxiumumHeartRate(age);

	heart.displayHeartRates(age);
	heart.getTargetHeartRate(maxHR);   
}
	    
