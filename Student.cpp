#include <iostream>
using namespace std;

class Student {
	public:
	int rollnum;
	int age;
	
	void display() {
		
		cout << rollnum << " " << age << endl;
	}
};

int main() {
	// creating objects statically 
	Student s1;
	s1.rollnum = 100;
	s1.age = 25;
	
	cout << s1.rollnum << " " << s1.age << endl;
	s1.display();	
	// creating objeccts dynamically
	
	Student *s2 = new Student;
//	(*s2).age = 36;
//	(*s2).rollnum = 104;
	// or we can right as it is
	s2 -> age = 36;
	s2 -> rollnum = 104;
	
	cout << (*s2).age << " " << (*s2).rollnum << endl;
	(*s2).display();
	
}
