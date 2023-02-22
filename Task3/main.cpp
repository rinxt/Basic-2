#include <iostream>
#include <string>

struct address {
	std::string country;
	std::string city;
	std::string street;
	int houseNumber;
	int appNumber;
	int index;
};

void printAddress(struct address add) {
	std::cout << "Страна: " << add.country << "\n"
		<< "Город: " << add.city << "\n"
		<< "Улица: " << add.street << "\n"
		<< "Номер дома: " << add.houseNumber << "\n"
		<< "Номер квартиры: " << add.appNumber << "\n"
		<< "Индекс: " << add.index << "\n\n";
}

int main() {

	setlocale(LC_ALL, "Russian");

	address a1, a2, a3;

	a1 = { "Россия", "Москва", "Строителей", 8, 67, 107145 };
	a2 = { "Россия", "Урюпинск", "Советская", 1, 15, 123456 };
	a3 = { "Россия", "Кунгур", "Солнечная", 14, 5, 678954 };

	printAddress(a1);
	printAddress(a2);
	printAddress(a3);

	system("pause");
}