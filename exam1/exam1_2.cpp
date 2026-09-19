#include <iostream>

struct Student {
	char name[50];
	int id;
	float score;
};
	void input(Student* p) {
		std::cin >> p->name;
		std::cin >> p->id;
		std::cin >> p->score;
	}

	void display(Student* p) {
		std::cout << "姓名：" << p->name << "\n";
		std::cout << "学号：" << p->id << "\n";
		std::cout << "成绩：" << p->score << "\n";
	}
int main() {
	Student* p = new Student;
	input(p);
	display(p);
	delete p;
	return 0;
}