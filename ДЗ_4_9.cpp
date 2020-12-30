#include <iostream>
#include <math.h>
using namespace std;

int func_one(string number, int cc_one){
	int num_dec, d, len_num;
	// num_dec - полученное десятичное число, d - цифра на определенной позиции этого числа, len_num - длина числа
	len_num = number.length() - 1;
	for (int i = 0; i < number.length(); i++){
		d = ((int) number[len_num] - (int) '0');
		num_dec += d * pow(cc_one, i);
		len_num--;
	}
	cout << num_dec<<endl;
	return num_dec;
}

string func_two(int num_dec, int cc_two){
	char line[100], main_number[100];
	int number = 25, cc = 3, n, m;
	// n - запоминает кол-во символов в числе динамически, m - делает, как n, но статично
	for (int i = 0; num_dec > 0; num_dec /= cc_two, i++){
		line[i] = num_dec % cc_two + '0';
		n = i;
	}
	m = n + 1;
	for (int j = 0; j < m; j++){
		main_number[j] = line[n];
		n--;
	}
	main_number[m] = 0;
	cout<<main_number<<endl;
	return main_number;
}

int main(){
	setlocale(LC_ALL, "Russian");
	string number, number_two;
	int cc_one, cc_two;
	printf("Введите целое число: ");
	cin >> number;
	printf("\nВведите СС этого числа: ");
	cin >> cc_one;
	printf("\nВведите требуемую СС: ");
	cin >> cc_two;
	cout<<func_two(func_one(number, cc_one), cc_two);
	return 0;
}
