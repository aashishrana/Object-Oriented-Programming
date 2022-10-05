#include <iostream>
using namespace std;

class Student2 {
	public:
	int rollNum;
	private:
	int age;
	public:
	void setAge(int aayo, int password) {
		if(password != 123) {
			return;
		}
		if(aayo < 0) {
			return;
		}
		age = aayo;
	}
	void display() {
		cout << age << " " << rollNum << endl;
	}
};

int main() {
	Student2 s1;
	s1.setAge(25, 123);
	s1.display();	
	//cout << age << endl;
}
