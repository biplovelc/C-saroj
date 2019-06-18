#include<iostream>
#include<string>
using namespace std;
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		void setAll(int dd, int mm, int yyyy)
		{
			day = dd;
			month = mm;
			year = yyyy;		
		}		
		string check()           //To check the month 
		{
			switch(month)
			{
				case 1:
					return "January";
					break;
				case 2:
					return "February";
					break;
				case 3:
					return "March";
					break;
				case 4:
					return "April";
					break;
				case 5:
					return "May";
					break;
				case 6:
					return "June";
					break;
				case 7:
					return "July";
					break;
				case 8:
					return "August";
					break;
				case 9:
					return "September";
					break;
				case 10:
					return "October";
					break;
				case 11:
					return "November";
					break;
				case 12:
					return "December";
					break;
						
			}
		}
		void getFirst();
		void getSecond();
		void getLast();
};
void Date::getFirst()
{
	cout<<""<<day;
	cout<<"/"<<month;
	cout<<"/"<<year<<endl;
}
void Date::getSecond()
{
	cout<<""<<check();
	cout<<" "<<day;
	cout<<", "<<year<<endl;
}
void Date::getLast()
{
	cout<<""<<day;
	cout<<" "<<check();
	cout<<" "<<year<<endl;
}
int main()
{
	Date date;
	int d, m, y;
	cout<<"Enter day, month and year:\n";
	cin>>d>>m>>y;
	if(d < 1 || d > 31)
	{
		cout<<"Invalid day!!";
	}
	if(m < 1 || m>12)
	{
		cout<<"Invalid month!!"<<endl;
	}
	else
	{
		cout<<"You entered:"<<endl;
		date.setAll(d, m, y);
		date.getFirst();
		date.getSecond();
		date.getLast();
	}
}
