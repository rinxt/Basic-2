#include <iostream>
#include <string>


struct account {
	int number;
	std::string name;
	double balance;
};

void changeBalance(struct account &acc, const int newBalnce) {
	acc.balance = newBalnce;
}

int main() {

	setlocale(LC_ALL, "Russian");

	account a;
	int userNewBalance;
	std::cout << "������� ����� �����: "; std::cin >> a.number;
	std::cout << "������� ��� ���������: "; std::cin >> a.name;
	std::cout << "������� ������: "; std::cin >> a.balance;
	std::cout << "������� ����� ������: "; std::cin >> userNewBalance;

	changeBalance(a, userNewBalance);

	std::cout << "��� ����: " << a.name << ", " << a.number << ", " << a.balance << "\n";

	system("pause");
}