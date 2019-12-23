#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j, m, k, sum;
	cin >> m >> n >> k;
	sum = 0;
	int** arr = new int* [m];

	for (i = 0; i < m; i++)
	{
		arr[i] = new int[n];

		for (j = 0; j < n; j++)
		{
			cout << endl << "Введите элемент матрицы[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		sum += arr[k-1][i];
	}
	cout << sum << endl;

	system("pause");
	return 0;
	
}
