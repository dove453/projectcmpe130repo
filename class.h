#pragma once
#include <iostream>
#include <string.h>
#define MSIZE 100
using namespace std;

struct passwordh{
	int key;
	int password; //put encrypted password in hashtable
	bool empty;

    passwordh();

	passwordh(int a,int b, bool c);

	int getpassword();
};

//function stuff for hashtable

int hashf(int data);

class spot {
private:
	int timelimithours;
	int timelimitminutes;
	int timelimitseconds;
	bool pay;
	bool empty;
	float due;
	int number;

public:
	//base constructor
	spot();
	//constructor
	spot(int a, int b, int c, bool d, bool e, float f, int n);


	void settimehour(int in);
	int gettimehour();

	void settimeminute(int in);
	int gettimeminute();

	void settimesecond(int in);
	int gettimesecond();

	void setdue(float in);
	float getdue();
	void calculatedue();

	void setpay(bool in);
	bool getpay();

	void setempty(bool in);
	bool getempty();

~spot();

void displayspot();

};

class student {
private:
	int id;
	string last;
	string first;
	string password;

public:
	student();

	student(int a, string b, string c, string d);

	void setid(int in);
	int getid();

	void setlast(string in);
	string getlast();

	void setfirst(string in);
	string getfirst();

	void setpassword(string in);
	string getpassword();

~student();

void displaystudent();
};

void reserve(spot& obj);

bool idcheck();

bool passcheck();

int encrypt();
