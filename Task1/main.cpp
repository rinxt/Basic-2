#include <iostream>
#include <string>

enum class months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	Julay,
	August,
	September,
	October,
	November,
	December
};


int main() {

	setlocale(LC_ALL, "Russian");

	std::string monthsArr[] = {
		"������",
		"�������",
		"����",
		"������",
		"���",
		"����",
		"����",
		"������",
		"��������",
		"�������",
		"������",
		"�������"
	};

	int n;
	std::cout << "������� ����� ������ ��� 0, ����� ���������: ";
	while (std::cin >> n && n != 0) {
		if (n <= 12 && n >= 1) {
			std::string month = monthsArr[static_cast<int>(static_cast<months>(n)) - 1];
			std::cout << "- " << month << "\n";
		}
		else std::cout << "- ������! ��� ������ � ����� �������\n";

		std::cout << "������� ����� ��� 0, ����� ���������: ";
	};

	std::cout << "�� ��������!";
	return 0;
}