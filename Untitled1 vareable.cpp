#include <iostream>
using namespace std;
class person{
	public:
		string name;
		int age ;
		void introduce(){
			cout << "hi iam :"  << name << "and i am : " << age   << "years old";
		}
}; 
int main(){
	person person1 ,person2;
	person1.name = "satyam";
	person1.age = 23;
	person2.name= "roshan";
	person2.age = 123;
	
	person1.introduce();
	person2.introduce();
	
	if( &person1 != &person2){
		cout << "person1 and person2 alag hai";
	}
	return 0;
}
