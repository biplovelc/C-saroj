#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		string name;
		int idNumber;
		string department;
		string position;	
	public:
		void setAll(string n, int i, string d, string p)
		{
			name = n;
			idNumber = i;
			department = d;
			position = p;
		}
		string getName()
		{
			return name;
		}
		int getId()
		{ 
			return idNumber;
		}
		string getDepartment()
		{
			return department;
		}
		string getPosition()
		{
			return position;
		}
};  
int main()
{
	Employee e[3];
	e[0].setAll("Susan Meyers", 47899, "Accounting", "Vice President");
	e[1].setAll("Mark Jones", 39119, "Info Technology", "Programmer");
	e[2].setAll("Joy Rogers", 81774, "Manufacturing", "Engineer");
	cout<<"Name\t\tID Number\tDepartment\t\tPosition"<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<""<<e[i].getName()<<"\t";
		cout<<""<<e[i].getId()<<"\t\t";
		cout<<""<<e[i].getDepartment()<<"\t\t";
		cout<<""<<e[i].getPosition()<<endl;
	}
}

