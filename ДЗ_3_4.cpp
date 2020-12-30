#include <iostream>
#include <fstream>
using namespace std;

// Функция разделяет строку на символы и проверяет номер каждого символа, выводя только числа
void func_one(string line){
	for (int i = 0; i < line.length(); ++i){
		if (48 <= line[i] and line[i] <= 57){
			cout << line[i];
		}
	}
	
}

int main(){
	setlocale(LC_ALL, "Russian");
	ofstream new_file;
	new_file.open("file_new.txt");
	string line;
	printf("Введите строку, состоящую из чисел и иных символов: ");
	getline(cin, line);
	new_file<<line;
	printf("\nСтрока сохранена в текстовом файле, сейчас начнется сортировка\n");
	new_file.close();
	
	ifstream file;
	file.open("file_new.txt");
	string a;
	while (!file.eof()){
		file >> a;
		func_one(a);
		
	}
	file.close();
}
