#include <iostream>
#include <fstream>
using namespace std;

int main() 
{  
   setlocale(LC_ALL, "Russian");
   // создание текстового файла
   ofstream new_file;
   new_file.open("text_file.txt");
   printf("Введите текст для файла: ");
   string line;
   getline(cin, line);
   cout << line;
   new_file<<line;
   cout<<"\nТекствовый файл успешно записан"<< endl;
   new_file.close();
   
   ifstream file;
   file.open("text_file.txt");
   printf("Файл открыт\n");
   string a;
   while (!file.eof())
   {
   	file >> a;
   	cout << a;
   }
   file.close();
   printf("Файл закрыт.");
   return 0;
}
