#include <iostream>
#include <string.h>
using namespace std;

const int N = 10;
const int M = 20;
char mas[N][M];

char line[N*M];

int main() {
	int i;
	setlocale(LC_ALL, "Ukrainian");
	for (i = 0; i < N; i++)
	{
		cout << "����i�� " << i+1 << " �����: ";
		cin.getline(mas[i], M, '\n');
	}

	strcpy(line, mas[0]);
	for (i = 1; i < N; i++)
		strcat(line, mas[i]);

	cout << "��'������� �����:" << endl;
	cout << line <<endl;
	return 0;
}
