#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	private:
		int x, y, z;
	public:
		void setAll(int a,int b, int c)
		{
			x=a;
			y=b;
			z=c;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		int getZ()
		{
			return z;
		}
		void Display()
		{
			cout<<"Point("<<x<<", "<<y<<", "<<z<<")\n";
		}
		void getDistance(Point P)
		{
			double dist;
			int a = pow(P.getX()-x, 2);
			int b = pow(P.getY()-y, 2);
			int c = pow(P.getZ()-z, 2);
			dist = sqrt(a+b+c);
			cout<<"Distance = "<<dist<<endl;
		}
};

int main()
{
	Point P1, P2;
	P1.setAll(1,6,7);
	P2.setAll(7, 99, 87);
	P1.Display();
	P2.Display();
	P1.getDistance(P2);
}
