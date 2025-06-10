#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		int age;
		string name;
		string gender;
		int grade;
		
	public:
		void input(){
			cout << "Enter your ID     : " ; cin >> id ;
			cout << "Enter your Age    : " ; cin >> age;
			cout << "Enter your Name   : " ; cin >> name;
			cout << "Enter your Gender : " ; cin >> gender;
			cout << "Eeter your Grade  : " ; cin >> grade;
		}
		
		void output(){
			cout << "ID     :" << id <<endl;
			cout << "Age    :" << age << endl;
			cout << "Name   :" << name <<endl;
			cout << "Gender :" << gender << endl;
			cout << "Grade  :" << grade <<endl;
		}
		
		
};





int main(){
	Student student;
	student.input();
	student.output();
	
	
	return 0;
}
