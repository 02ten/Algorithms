// Algorithms.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void Erotosphen(int n) {
	int m = 2;
	int j;
	int i =0;
	int *a = new int[n];
	for (i = 0; i < n; i++) {
		a[i] = i;
	}
	a[1] = 0;
	i = 2;
	while (i < n) {
		if (a[i] != 0) {
			j = i *2;
			while (j <= n) {
				a[j] = 0;
				j = j + i;
			}
		}
		i++;
	}
	for (i = 0; i < n; i++) {
		if (a[i] != 0) {
			cout << a[i] << " ";
		}
	}
	cout << '\n';
}	
int Euclid(int a , int b){
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	return a + b;
	
}
int main()
{
	
	int n, b,a;
	cin >> n;
	Erotosphen(n);
	cin >> a >> b;
	cout << Euclid(a,b);
}

