#pragma once

class spot {
private:
	int size;
	int timelimithours;
	int timelimitminutes;
	int timelimitseconds;
	bool pay;
	bool empty;
	float due;

public:
	//base constructor
	spot();
	//constructor
	spot(int a, int b, int c, int d, float f);



	void setsize(int in);
	int getsize();

	void settimehour(int in);
	int gettimehour();

	void settimeminute(int in);
	int gettimeminute();

	void settimesecond(int in);
	int gettimesecond();

	void setdue(float in);
	float getdue();

	void setpay(bool in);
	bool getpay();

	void setempty(bool in);
	bool getempty();


};

void showe(spot &in);

