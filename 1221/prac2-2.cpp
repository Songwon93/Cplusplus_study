#include<iostream>
using namespace std;

int main() {
	int i;
	cout << "���ϴ� ������ �Է�\n";
	cin >> i;

	for (int j=1; j <= 9; j++) {
		cout << i << " x " << j << " = " << i * j <<"\n";
	}
	for (int a = 1; a <= 9; a++) {
		for (int b = 1; b <= 9; b++) {
			cout << a << " x " << b << " = " << a * b << " ";
			int count=0;
			count++;
			if (count == 9) {
				count = 0; 
				cout << "\n";
			}
		}
	}
}