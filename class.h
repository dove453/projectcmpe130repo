#pragma once
#include <iostream>
#include <string.h>
#include<vector>
using namespace std;
extern int hashsize;
struct passwordh{
	
	vector<int>password; //put encrypted password in hashtable
	bool empty;

    passwordh();

	passwordh(vector<int> b, bool c);

	vector<int>getpassword();
};

//function stuff for hashtable

int hashf(int data);

void insert(vector<int>value, passwordh array[]);

void rehash(passwordh array[]);

vector<int>search(vector<int>data, passwordh array[]);

void deleteh(vector<int>data, passwordh array[]);

void display(passwordh array[]);
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

bool idcheck(int input, student check);

bool passcheck(vector<int>input, string inputs);

vector<int>encrypt(string input);

string decrypt(vector<int>input);
