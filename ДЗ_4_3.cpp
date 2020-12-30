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
	printf("Программа для вычисления площадей фигур\n выберите фигуру: 1 - круг, 2 - квадрат, 3 - треугольник: ");
	int num;
	cin >> num;
	if (num == 1){
		printf("\nЧтобы узнать площадь круга, введите радиус: ");
		float r;
		cin >> r;
		if (r < 0){
			printf("\nРадиус не может быть отрицательным");
		} else if (r == 0){
			printf("\nЭто точка, площадь равна нулю");
		} else {
			printf("\nПлощадь круга: %4.5f", circle(r));
		}
		
	} else if (num == 2){
		printf("\nЧтобы узнать площадь квадрата введите длину стороны: ");
		float a;
		cin >> a;
		if (a < 0){
			printf("\nСторона не может быть отрицательной");
		} else if (a == 0) {
			printf("\nЭто точка, площадь равна нулю");
		} else {
			printf("\nПлощадь квадрата: %4.5f", square(a));
		}
		
	} else if (num == 3){
		printf("\nЧтобы узнать площадь треугольника выберите способ: 1 - по 3 сторонам, 2 - по 2 сторонам и углу, 3 - по основанию и высоте: ");
		int n;
		cin >> n;
		if (n == 1){
			printf("\nВведите длины сторон треугольника: ");
			float b, c, d;
			cin >> b >> c >> d;
			if (b <= 0 || c <= 0 || d <= 0){
				printf("\nКак минимум одна из сторон либо равна, либо меньше нуля");
			} else {
				printf("\nПлощадь треугольника: %4.5f", triangle_one(b, c, d));	
			}
			
		} else if (n == 2){
			printf("\nВведите длины сторон и угол между ними в градусах: ");
			float e, f, alpha;
			cin >> e >> f >> alpha;
			if (e <= 0 || f <= 0){
				printf("\nКак минимум одна из сторон отриуательна или равна нулю");
			} else if (alpha <= 0 || alpha > 180){
				printf("\nТаких углов у треугольников не бывает");
			} else {
				printf("\nПлощадь треугольника: %4.5f", triangle_two(e, f, alpha));
			}
			
		} else if (n == 3){
			printf("\nВведите длины основания и высоты треугольника: ");
			float a, h;
			cin >> a >> h;
			if (a <= 0 || h <= 0){
				printf("\nПри таких значниях высоты и основания площадь не вычесляется");
			} else {
				printf("\nПлощадь треугольника: %4.5f", triangle_three(a, h));
			}
			
		} else {
			printf("\nТакой функции нет.");
		}
	} else {
		printf("\nТакого условия нет.");
	}
}
