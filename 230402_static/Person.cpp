/*#include "Person.h"


class Person {
	static int cnt;
	string name;
public:
	Person(string name) {
		this->name = name;
		plusCnt();
	}
	static int getCnt() {
		return cnt;
	}
	void plusCnt() {
		cnt++;
	}
};

int Person::cnt = 0;


class Student : public Person {
public:
	Student(string name) : Person(name) {
		cout << "Student 생성자" << endl;
	}
};
int main() {
	Person p("김소연");
	Person p2("채동현");

	cout << "인원 : " << Person::getCnt() << endl;
	return 0;
}
*/

/*
#include "Person.h"
int Person::cnt = 0;
Person::Person(string name) {
	this->name = name;
	plusCnt();
}

int Person::getCnt() {
	return cnt;
}

void Person::plusCnt() {
	cnt++;
}
*/