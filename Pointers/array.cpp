#include<iostream>
#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#endif

using namespace std;

int main()
{
	int cols = 4, rows = 5;

	// How to create 1D array
	int* T = new int[rows];

	for (int i = 0; i < rows; i++) {
		T[i] = i;
	}

	for (int i = 0; i < rows; i++) {
		cout << T[i] << " ";
	}

	cout << endl;

	delete[] T;

	// How to create 2D array
	int** T2 = new int* [rows];
	for (int i = 0; i < rows; i++) {
		T2[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
			T2[i][j] = 1 + i;
		}
	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
			cout << T2[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] T2[i];
	}
	delete[] T2;
}