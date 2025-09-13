 #include <iostream>
 using namespace std;
 class privateexamaple{
 	int number;
 	public:
 	setnumber(int value){
 		number = value;
	 }
	 shownumber(){
	 	cout << "num:" << number  << endl;
	 }
 };
 int main(){
 privateexamaple obj;
 obj.setnumber(12);
 obj.shownumber();
 return 0 ;	
 }
