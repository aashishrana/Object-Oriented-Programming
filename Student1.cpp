#include <iostream>
using namespace std;

class Student1 {
	public:
		int rollNumber;
	private:
	    int age;
	public:
		void display() {
			cout << age << " " << rollNumber << endl;
		}
		int getAge() {
			return age;
		}
			
};

int main() {
	Student1 s1,s2;
	s1.rollNumber = 55;
	cout << s1.rollNumber << endl;
	cout << "s1 give garbage age because age is not initialize  "<< s1.getAge() << endl;
	s1.display();
}
