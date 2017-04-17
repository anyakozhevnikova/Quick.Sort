#include <iostream>
#include "QuickSort.h"
using namespace std;
	int main()
{
	int n = 7;
	int arr1[7] = { 10, 7, 4, 1, 14, 9, 22 };

	int m = 4;
	int arr2[4] = { 0, -1, 4, 0};

	QuickS::QuickSort(arr1, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	QuickS::QuickSort(arr2, 0, m-1);
	for (int i = 0; i < m; i++)
	{
		cout << arr2[i] << " ";
	}

	return 0;
}