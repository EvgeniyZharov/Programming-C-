#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

float circle(float r){
	float pi = 3.14;
	return pi * r * r;
}

float square(float a){
	return a * a;
}

float triangle_one(float b, float c, float d){
	float p;
	p = (b + c + d) / 2;
	return pow(p*(p - b)*(p - c)*(p - d), 0.5);
}

float triangle_two(float e, float f, float alpha){
	float pi = 3.14;
	return 0.5 * e * f * sin(alpha * pi / 180);
}

float triangle_three(float a, float h){
	return 0.5 * a * h;
}

int main(){
	setlocale(LC_ALL, "Russian");
	printf("��������� ��� ���������� �������� �����\n �������� ������: 1 - ����, 2 - �������, 3 - �����������: ");
	int num;
	cin >> num;
	if (num == 1){
		printf("\n����� ������ ������� �����, ������� ������: ");
		float r;
		cin >> r;
		if (r < 0){
			printf("\n������ �� ����� ���� �������������");
		} else if (r == 0){
			printf("\n��� �����, ������� ����� ����");
		} else {
			printf("\n������� �����: %4.5f", circle(r));
		}
		
	} else if (num == 2){
		printf("\n����� ������ ������� �������� ������� ����� �������: ");
		float a;
		cin >> a;
		if (a < 0){
			printf("\n������� �� ����� ���� �������������");
		} else if (a == 0) {
			printf("\n��� �����, ������� ����� ����");
		} else {
			printf("\n������� ��������: %4.5f", square(a));
		}
		
	} else if (num == 3){
		printf("\n����� ������ ������� ������������ �������� ������: 1 - �� 3 ��������, 2 - �� 2 �������� � ����, 3 - �� ��������� � ������: ");
		int n;
		cin >> n;
		if (n == 1){
			printf("\n������� ����� ������ ������������: ");
			float b, c, d;
			cin >> b >> c >> d;
			if (b <= 0 || c <= 0 || d <= 0){
				printf("\n��� ������� ���� �� ������ ���� �����, ���� ������ ����");
			} else {
				printf("\n������� ������������: %4.5f", triangle_one(b, c, d));	
			}
			
		} else if (n == 2){
			printf("\n������� ����� ������ � ���� ����� ���� � ��������: ");
			float e, f, alpha;
			cin >> e >> f >> alpha;
			if (e <= 0 || f <= 0){
				printf("\n��� ������� ���� �� ������ ������������ ��� ����� ����");
			} else if (alpha <= 0 || alpha > 180){
				printf("\n����� ����� � ������������� �� ������");
			} else {
				printf("\n������� ������������: %4.5f", triangle_two(e, f, alpha));
			}
			
		} else if (n == 3){
			printf("\n������� ����� ��������� � ������ ������������: ");
			float a, h;
			cin >> a >> h;
			if (a <= 0 || h <= 0){
				printf("\n��� ����� �������� ������ � ��������� ������� �� �����������");
			} else {
				printf("\n������� ������������: %4.5f", triangle_three(a, h));
			}
			
		} else {
			printf("\n����� ������� ���.");
		}
	} else {
		printf("\n������ ������� ���.");
	}
}
