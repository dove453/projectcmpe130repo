#include "Header.h";
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
