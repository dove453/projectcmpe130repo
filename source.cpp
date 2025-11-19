#include "Header.h";
#include <string>
int hashsize=100;


//***spot section*************

spot::spot() {
	timelimithours = 0;
	timelimitminutes = 0;
	timelimitseconds = 0;
	pay = false;
	empty = true;
	due = 0;
	number = 0;
}

spot::spot(int a, int b, int c, bool d, bool e, float f, int n) {
	 timelimithours=a;
	 timelimitminutes=b;
	 timelimitseconds=c;
	 pay=d;
	 empty=e;
	 due = f;
	number = n;
}

spot::~spot() {

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

void spot::calculatedue() {
	int hours = timelimithours + (timelimitminutes / 60) + (timelimitseconds / 360);//hourly rate is 50 cents an hour
	due = hours * 0.50;                                   //in dollars
	
}

//pay

void spot::setpay(bool in) {
	pay = in;
}


//empty

void spot::setempty(bool in) {
	empty = in;
}

bool spot::getempty() {
	return empty;
}

//display function:
void spot::displayspot() {
	cout << "time left is: " << timelimithours
		<< " hours, " <<timelimitminutes << " minutes, " <<timelimitseconds << " seconds."<<endl;

	if (empty != false) {
		cout << "the spot is currently not empty"<<endl;
	}
	else {
		cout << "the spot is empty"<<endl;
	}

	cout << "you owe: " << due << " for this spot." << endl;

	if (pay == true) {
		cout << "you have paid for this spot and may leave" << endl;
	}
	else {
		cout << "you have not paid for this spot yet. Please do so" << endl;
	}


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

student::~student() {

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


void student::displaystudent() {
cout << "this student's id is: " << id<<endl;
cout << "the student's first name is: " << first << endl;
cout << "the student's last name is: " << last << endl;
cout << "the student's password is: " << password << endl;
}

//out functions

void reserve(spot& obj) {
obj.setempty(0);
}

//password: stuff

passwordh::passwordh(vector<int>b, bool c){
	
	password = b;
	empty = c;
}

passwordh::passwordh() {

	password = {0};
	empty = 1;
}

vector<int>passwordh::getpassword() {
	return password;
}

//hash:

int hashf(int data) {
	return data % MSIZE;
}

void rehash(passwordh array[]) {

	int size = hashsize + 50;
	passwordh* temp = new passwordh[hashsize];
	//transfer data
	for (int i = 0; i < hashsize; i++){
		temp[i] = array[i];
	}

	hashsize = size;                       //up size
	for (int i = 0; i < hashsize; i++) {   //transfer data back
		array[i] = temp[i];
	}
}


void insert(int value, passwordh array[]) {

	//full checker
	int fullcount = 0;
	for (int i = 0; i < hashsize; i++) {
		if (array[i].empty == 0) {
			fullcount++;
		}
	}

	if (fullcount == hashsize) {
		rehash(array);
	}
	int key = hashf(value);

	//case reg
	for (int i = 0; i < hashsize; i++) {
		
		if (array[key].empty == 1) {
			array[key].password = value;
		}
		else {
			key++;
		}
	}

	


	

}

bool search(int data, passwordh array[]) {
	for (int i = 0; i < hashsize; i++) {
		if (array[i].password == data) {
			return 1;
		}
	}
	return 0;
}

void deleteh(int data, passwordh array[]) {
	for (int i = 0; i < hashsize; i++) {
		if (array[i].password == data) {
			array[i].password = 0;
			array[i].empty = true;
			
		}
	}
}

//encryption and decryption:

vector<int>encrypt(string input) {
	vector<int>passnum;
	for (int i = 0; i < input.length(); i++) {
		cout << (int)input[i] << endl;
		passnum.push_back((int)input[i]);
	}

	
	 passnum.push_back(21);    
	return passnum;
}

string decrypt(vector<int>input) {
	int decrypt = 21;
	string returns;
if (input[input.size() - 1]!=decrypt) {
	
}
else {
	
	return "Error: invalid password ";
}

//decrypt

for (int val : input) {
	returns += static_cast<char>(val);
}




return returns;


}

bool idcheck(string input, student check) {

}
