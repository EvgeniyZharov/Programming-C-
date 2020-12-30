
#include <iostream>
using namespace std;
 
 int nod(int a, int b) {

    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
			return i;
        }
    }
    return 0;
}
 
int main() {
    int t1, t2;
    cin >> t1 >> t2;
    cout <<  t1 * (t2 / nod (t1, t2));
    return 0;
}
