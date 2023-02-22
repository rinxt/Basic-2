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
		"Январь",
		"Февраль",
		"Март",
		"Апрель",
		"Май",
		"Июнь",
		"Июль",
		"Август",
		"Сентябрь",
		"Октябрь",
		"Ноябрь",
		"Декабрь"
	};

	int n;
	std::cout << "Введите номер месяца или 0, чтобы закончить: ";
	while (std::cin >> n && n != 0) {
		if (n <= 12 && n >= 1) {
			std::string month = monthsArr[static_cast<int>(static_cast<months>(n)) - 1];
			std::cout << "- " << month << "\n";
		}
		else std::cout << "- Ошибка! Нет месяца с таким номером\n";

		std::cout << "Введите число или 0, чтобы закончить: ";
	};

	std::cout << "До свидания!";
	return 0;
}