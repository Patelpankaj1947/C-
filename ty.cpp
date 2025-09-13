#include <iostream>
using namespace std;
class person{
	public:
		string name;
		int age;
		void introduce(){
		cout << "my:" << name << "years oid"	 << endl;
		}
		
};
int main(){
	person  person1, person2;
	person1.name = "ram";
	person1.age = 34;
	person2.name ="sheta";
	person2.age = 22;
	person1.introduce() ;
	person2.introduce() ;
	if(&person1 != &person2){
		cout << "district:" << endl;
	}
	return 0 ;
	
}

