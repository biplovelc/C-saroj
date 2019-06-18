#include<iostream>
#include<string>
using namespace std;

class Car
{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		void setAll(int y, string m, int s=0)
		{
			yearModel = y;
			make = m;
			speed = s;
		}
		int getYear()
		{
			return yearModel;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		int accelerate()
		{
			return (speed+=5);
		}
		int brake()
		{
			return (speed-=5);
		}
};
