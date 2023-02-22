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
	std::cout << "������: " << add.country << "\n"
		<< "�����: " << add.city << "\n"
		<< "�����: " << add.street << "\n"
		<< "����� ����: " << add.houseNumber << "\n"
		<< "����� ��������: " << add.appNumber << "\n"
		<< "������: " << add.index << "\n\n";
}

int main() {

	setlocale(LC_ALL, "Russian");

	address a1, a2, a3;

	a1 = { "������", "������", "����������", 8, 67, 107145 };
	a2 = { "������", "��������", "���������", 1, 15, 123456 };
	a3 = { "������", "������", "���������", 14, 5, 678954 };

	printAddress(a1);
	printAddress(a2);
	printAddress(a3);

	system("pause");
}