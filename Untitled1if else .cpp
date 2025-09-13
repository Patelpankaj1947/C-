 #include <iostream>
 using namespace std ;
 class student{
 	public:
 		string name ;
 		int rollnumber;
 		void display() {
 			cout << "Name:" << name    << "roll no:" << rollnumber << endl;
		 }
 		
 };
 int  main(){
 	student students[3];
 	students[0].name = "roshan";
 	students[0].rollnumber = 45555;
 	
 	students[1].name = "dharmesh";
 	students[1].rollnumber = 7878787;
 	
 	students[2].name = "pankaj";
 	students[2].rollnumber = 12345;
 	  for(int i= 0; i<2;i++){
 		students[i].display();
	 }
	 return 0;
 }
