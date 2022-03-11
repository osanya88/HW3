#include <iostream>
#include "HeartRate.h" 
using namespace std;

 HeartRate::HeartRate() {
     firstName = "unknown";
     lastName = "unknown";
     birthday = 0;
     birthmonth = 0;
     birthyear = 0;
}
HeartRate::HeartRate( string firstname, string lastname, int day,int month, int year) {
     setFirstName(firstname);	// sets the first name
     setLastName(lastname);	// sets the last name
     setbirthday(day);		// sets the day of birth
     setbirthmonth(month);	// sets the month of birth
     setbirthyear(year);	// sets the year of birth
}
void HeartRate::setFirstName(string firstname) {
     firstName = firstname;
 }
void HeartRate::setLastName(string lastname) {
     lastName = lastname;
}
void HeartRate::setbirthday(int day) {
     birthday = day;
}
void HeartRate::setbirthmonth(int month) {
     birthmonth = month;
}
void HeartRate::setbirthyear(int year) {
     birthyear = year;
}
string HeartRate::getFirstName() const{
	return firstName;

string HeartRate::getLastName() const{
	return lastName;
}
int HeartRate::getbirthday() const{
	return birthday;
}
int HeartRate::getbirthmonth() const{
	return monthOfBirth;
}
int HeartRate::getbirthyear() const{
	return birthyear;
}
int HeartRate::getAge(){
	int age, d, m, y;

	cout << "\nEnter the current year: ";
	cin >> y;
	cout << "Enter the current month: ";
	cin >> m;
	cout << "Enter the current day: ";
	cin >> d;                                                                               
	if( getbirthmonth() < m ){
		m = m - getbirthmonth();
	}
	else{
		m = getbirthmonth() - m;
	}
	if( getbirthday() < d ){
		d = d - getbirthday();
	}
	else{
		d = getbirthday() - d;
	}
	age = y - getbirthyear();
	return age;
}
int HeartRate::getMaxiumumHeartRate(int age)

	int maxHR = 220 - age;
	return maxHR;
	}
void HeartRate::getTargetHeartRate(int maxHR)
{
	cout << "Your target heart rate range is from " << maxHR * 0.5<< "to " << maxHR * 0.85 << " bpm.";
}
void HeartRate::displayHeartRate(int age) const
{
       	int a = age;
       	cout << "\nHello " << getFirstName() << " " << getLastName() << endl;
       	cout << "Your date of birth is " << getbirthday() << "/"   << getbirthmonth() << "/" << getbirthyear() << endl;
       	cout << "You are " << a << " years old" << end1; 
}
