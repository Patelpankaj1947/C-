#include <iostream>
using namespace std;
class Privateexample{
	private:
		int secret;
		
		public:
			void setsecret(int value){
				secret = value;
			}
			void showsecret(){
			cout << "secret:" << secret << endl;}
			
}; 
int main(){
	Privateexample obj;
	obj.setsecret (345);
	obj.showsecret() ;
	return 0;
	 
}
