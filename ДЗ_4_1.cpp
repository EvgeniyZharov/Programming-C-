#include <iostream>
#include <fstream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	ofstream new_file;
	new_file.open("file_new.txt");
	string line;
	printf("Введите строку, состоящую из чисел: ");
	getline(cin, line);
	new_file<<line;
	printf("\nСтрока сохранена в текстовом файле, сейчас начнется суммирование\n");
	new_file.close();
	
	ifstream file;
	file.open("file_new.txt");
	string a;
	while (!file.eof()){
		file >> a;
		for (int i = 0; i < a.length(); ++i){
			if (48 <= a[i] and a[i] <= 57){
				sum += (int) a[i] - (int) '0';
		}
	}
	}
	cout<<sum<<endl;
	file.close();
}
