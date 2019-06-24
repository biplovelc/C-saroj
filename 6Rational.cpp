#include<iostream>
using namespace std;

class Rational
{
	private:
		int num;
		int den;
	public:
		void assign(int n, int d)
		{
			num = n;
			den = d;	
		}	
		double convert()
		{
			double value =(double) num/den;
			return value;
		}
		void print()
		{
			cout<<"Returned value = "<<convert()<<endl;
		}
		void invert()
		{
			double invert = 1/convert();
			cout<<"Invert of x = "<<invert<<endl;
		}
};
int main()
{
	Rational x;
	x.assign(22, 7);	//assigning values of x
	
	x.print();			//print rational value
	
	int real = x.convert();			//print real rational value
	cout<<"Rational real number = "<<real<<endl;
	
	x.invert();		//inverting x
}
