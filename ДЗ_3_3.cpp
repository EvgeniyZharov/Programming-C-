#include <iostream>
#include <fstream>
using namespace std;

int main() 
{  
   setlocale(LC_ALL, "Russian");
   // �������� ���������� �����
   ofstream new_file;
   new_file.open("text_file.txt");
   printf("������� ����� ��� �����: ");
   string line;
   getline(cin, line);
   cout << line;
   new_file<<line;
   cout<<"\n���������� ���� ������� �������"<< endl;
   new_file.close();
   
   ifstream file;
   file.open("text_file.txt");
   printf("���� ������\n");
   string a;
   while (!file.eof())
   {
   	file >> a;
   	cout << a;
   }
   file.close();
   printf("���� ������.");
   return 0;
}
