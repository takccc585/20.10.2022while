#include<iostream>
using namespace std;
int main() {
	//18
	/*int N;
	cin >> N;
	int i = 1;
	int sum = 0;
	while (i <= N) {
		if (i % 2 != 0 and i % 3 != 0 and i % 5 != 0) {
			sum++;
		}		
		i++;
	}
	cout << sum << endl;*/
	//19
	/*for (int a = 10; a < 100; a++) {
		for (int b = 10; b < 100; b++) {
			int sum = (a * 100) + b;
			int proizv = a * b;
			if (sum % proizv ==0) {
				cout << sum << endl;
			}
		}
	}*/
	//21
	/*float n;
	cin >> n;
	float sum = 0;
	float i = 2.0;
	while (i<=n) {
		sum = sum + (1 / (2*(i * i)));
		i+=1;
	}
	cout << sum;*/
	//22
	/*float n;
	cin >> n;
	float sum = 0;
	float i = 1.0;
	while (i <= n) {
		sum = sum + 1/i;
		i += 1;
	}
	cout << sum;*/
	//23
	/*int n =1024;
	int sum = 0;
	int i = 1.0;
	while (i <= n) {
		sum = sum + i;
		i *= 2;
	}
	cout << sum;*/
	//24
	int n = 10;
	int sum = 0;
	int i = 1;
	int proizv = 1;
	while (i <= n) {
		sum = sum + i;
		proizv = sum * proizv;
		i++;
	}
	cout << proizv;
	return 0;
}