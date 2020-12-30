#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float s, m, n, p = 0.5, k, t = 0.5;
	cin >> s >> m >> n;
	while ((s * p * pow(1 + p, n))/(12 * (pow(1 + p, n) - 1)) != m) {
		t /= 2;
	if ((s * p * pow(1 + p, n))/(12 * (pow(1 + p, n) - 1)) > m){
		p += t;
		k++;
		cout<< p<< endl;
	} else if ((s * p * pow(1 + p, n))/(12 * (pow(1 + p, n) - 1)) < m){
		p += t;
		k++;
		cout << p << endl;
	}}
	cout << p << k;
	return 0;
}
