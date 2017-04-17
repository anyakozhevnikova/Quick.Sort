#ifndef __QuickS_H__
#define __QuickS_H__


namespace QuickS
{
	//Функция быстрой сортировки
	void QuickSort(int array[], int l, int r) 
	{
		int t;
		int x = array[l + (r - l) / 2]; //x - середина массива
		int i = l; //указатель на начало массива
		int j = r; //указатель на конец массива

		//Пока элемент из правого и левого подмассивов не пересеклись
		while (i <= j)
		{
		    
			while (array[i] < x) i = i+1; //движение по левому подмассиву
			while (array[j] > x) j = j-1; //движение по правому подмассиву

			//меняем элементы местами 
			if (i <= j)
			{
				t = array[i];
				array[i] = array[j];
				array[j] = t;
				i= i+1;
				j= j-1;
			}
		}
		// дальнейшая сортировка подмассивов с помощью рекурсивного вызова
		if (i < r)
			QuickSort(array, i, r);

		if (l < j)
			QuickSort(array, l, j);
	}
}
#endif