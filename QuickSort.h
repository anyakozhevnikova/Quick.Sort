#ifndef __QuickS_H__
#define __QuickS_H__


namespace QuickS
{
	//������� ������� ����������
	void QuickSort(int array[], int l, int r) 
	{
		int t;
		int x = array[l + (r - l) / 2]; //x - �������� �������
		int i = l; //��������� �� ������ �������
		int j = r; //��������� �� ����� �������

		//���� ������� �� ������� � ������ ����������� �� �����������
		while (i <= j)
		{
		    
			while (array[i] < x) i = i+1; //�������� �� ������ ����������
			while (array[j] > x) j = j-1; //�������� �� ������� ����������

			//������ �������� ������� 
			if (i <= j)
			{
				t = array[i];
				array[i] = array[j];
				array[j] = t;
				i= i+1;
				j= j-1;
			}
		}
		// ���������� ���������� ����������� � ������� ������������ ������
		if (i < r)
			QuickSort(array, i, r);

		if (l < j)
			QuickSort(array, l, j);
	}
}
#endif