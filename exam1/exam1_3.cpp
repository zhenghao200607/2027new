#include <iostream>
#include <string>
class Car {
private:
	std::string color;
	int number;
public:
	Car(std::string c, int n) {
		color = c;
		number = n;
	}
	~Car() {
		std::cout << "Car对象被销毁了，车牌号" << number << "\n";

	}

	void display() {
		std::cout << "颜色：" << color << "  ";
		std::cout << "车牌号：" << number << "\n";
	}
};
	int main() {
		Car car1("红色", 1001);
		Car car2("蓝色", 1002);
		car1.display();
		car2.display();
		return 0;
	}

