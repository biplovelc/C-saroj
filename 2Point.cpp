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
			cout<<"("<<x<<", "<<y<<", "<<z<<")\n";
		}
		void getDistance(Point P)
		{
			double dist;
			dist = sqrt(pow(P.getX()-x, 2)+pow(P.getY()-y, 2)+pow(P.getZ()-z, 2));
			cout<<"Distance = "<<dist<<endl;
		}
};

int main()
{
	Point P1, P2;
	P1.setAll(2, 3,4);
	P2.setAll(6,7,8);
	cout<<"P1";
	P1.Display();
	cout<<"P2";
	P2.Display();
	P1.getDistance(P2);
}
