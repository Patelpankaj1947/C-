#include <iostream>
using namespace std;


class student
{
	int id;
	char ch;
	
	
	public:
		student() 
		{
			id = 201;
			ch = 'B';
			
		}
		void show()
		{
			cout<<id<<"-----"<<ch<<endl;
		}
	};
	int main()
	{
		student s1;
		s1.show();
	}
