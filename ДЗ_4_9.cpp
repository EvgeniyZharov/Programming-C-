#include <iostream>
#include <math.h>
using namespace std;

int func_one(string number, int cc_one){
	int num_dec, d, len_num;
	// num_dec - ���������� ���������� �����, d - ����� �� ������������ ������� ����� �����, len_num - ����� �����
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
	// n - ���������� ���-�� �������� � ����� �����������, m - ������, ��� n, �� ��������
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
	printf("������� ����� �����: ");
	cin >> number;
	printf("\n������� �� ����� �����: ");
	cin >> cc_one;
	printf("\n������� ��������� ��: ");
	cin >> cc_two;
	cout<<func_two(func_one(number, cc_one), cc_two);
	return 0;
}
