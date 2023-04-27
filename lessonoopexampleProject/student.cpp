#include"student.h";







// default constructor
Student::Student() {
	cout << "default constructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 15;
	avg_mark = 4;
}

// constructor with arguments
Student::Student(string nm, string surnm, int a, float mark) {
	cout << "constructor with arguments" << endl;
	name = nm;
	surname = surnm;
	age = a;
	avg_mark = mark;
}

// constructor with arguments
Student::Student(string nm, string surnm) {
	cout << "constructor with arguments" << endl;
	name = nm;
	surname = surnm;
	age = 15;
	avg_mark = 4;
}

// copy-constructor
Student::Student(const Student& student) {
	cout << "copy-constructor" << endl;
	name = student.name;
	surname = student.surname;
	age = student.age;
	avg_mark = student.avg_mark;
}Student::Student() {
	cout << "destructor" << endl;
}

string Student::getname() {
	return name;

}

void Student::setname(string n) {
	name = n;
}

string Student::getSurname() {
	return surname;
}

void Student::setSurname(string n) {
	surname = n;
}

int Student::getAge() {
	return age;

}

void Student::setAge(int a) {
	if (a > 0 && a < 110) {
		age = a;
	};
}

float Student::getAvgMark() {
	return avg_mark;
}

void Student::setAvgMark(float mark) {
	if (mark >= 0 && mark <= 10) {

	}
}


void Student::clear() {
	name = "no name";
	surname = "no surname";
	age = 0;
	avg_mark = 0;
}

string Student::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " ( age = " + to_string(age);
	msg += ", average mark = " + to_string(avg_mark);
	msg += ")";
	return msg;
}