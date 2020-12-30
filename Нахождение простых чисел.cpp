#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Введите минимальную и максимальную границы нахождения простых чисел: ");
	int min, max;
	cin >> min >> max;
    int f = 0;
    for (int j = min; j <= max; j++)
    {
        f = 0;
        for(int i = 2; i < j && f == 0; i++) 
        {
            if( j % i == 0 ) 
            {
                f = 1;  
                break;       
            }
        }
        if(f == 0)  
            cout<<j<<setw(3);
    }
    cout<<endl;
    cin.get();
    return 0;
}
