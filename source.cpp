#include "Header.h";



//***spot section*************

spot::spot() {
	timelimithours = 0;
	timelimitminutes = 0;
	timelimitseconds = 0;
	pay = false;
	empty = false;
	due = 0;
}

spot::spot(int a, int b, int c, bool d, bool e, float f) {
	 timelimithours=a;
	 timelimitminutes=b;
	 timelimitseconds=c;
	 pay=d;
	 empty=e;
	 due = f;
}



//hour
void spot::settimehour(int in) {
	timelimithours = in;
}

int spot::gettimehour() {
	return timelimithours;
}

//minutes
void spot::settimeminute(int in) {
	timelimitminutes = in;
}

int spot::gettimeminute() {
	return timelimitminutes;
}

//seconds
void spot::settimesecond(int in) {
	timelimitseconds = in;
}

int spot::gettimesecond() {
	return timelimitseconds;
}

//float

void spot::setdue(float in) {
	due = in;
}

float spot::getdue() {
	return due;
}

//pay

void spot::setpay(bool in) {
	pay = in;
}

//*****student section********

student::student() {
	id = 0;
	last = "default";
	first = "default";
	password = "password";
}

student::student(int a, string b, string c, string d) {
	id = a;
	last = b;
	first = c;
	password = d;
}



void student::setid(int in) {
	id = in;
}

int student::getid() {
	return id;
}


void student::setlast(string in) {
	last = in;
}


void student::setfirst(string in) {
	first = in;
}

string student::getfirst() {
	return first;
}


void student::setpassword(string in) {
	password = in;
}

string student::getpassword() {
	return password;
}
