#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int m_one = 37, i_one = 3, c_one = 64, m_two = 25173, i_two = 13879, c_two = 65537, h = 1, t, s;
	printf("\nЧтобы начать рандомный ряд - 1, чтобы завершить - 0: ");
	cin >> t;
	s = rand();
	while (t == 1) {
		if (h % 2 == 0){
			s = (m_one * s + i_one) % c_one;
			h++;
		} else {
			s = (m_two * s + i_two) % c_two;
			h++;
		}
		printf("Число: %i", s);
		printf("\nЧтобы продолжить рандомный ряд - 1, чтобы завершить - 0: ");
		cin >> t;
	}
	if (t == 0) {
		printf("\nВсе работа программы завершена, окончательное число: %i", s);
	} else {
		printf("\nТакой команды нет, программа остановлена.");
	}
	return 0;
}
