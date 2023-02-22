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
	std::cout << "¬ведите номер счета: "; std::cin >> a.number;
	std::cout << "¬ведите им€ владельца: "; std::cin >> a.name;
	std::cout << "¬ведите баланс: "; std::cin >> a.balance;
	std::cout << "¬ведите новый баланс: "; std::cin >> userNewBalance;

	changeBalance(a, userNewBalance);

	std::cout << "¬аш счет: " << a.name << ", " << a.number << ", " << a.balance << "\n";

	system("pause");
}