#include "MyLib.h"

// ������� ���������� �������
void selectionSort(bool up, vector<Tool>& arr, int size, vector<int>& id) {
	// ������� ���� ��������� �� ��� ��������� ������
	for (int i = 0; i < size - 1; i++) {
		// ����������� ������� ���������� (��� �������������, ������� �� ��������� up) ��������
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			// ��������, �� ������� ��������� �� ���������� �� �� ���������
			if (up == true) {
				// ���� �������� ������� ������ �� ���������, ������� minIndex
				if (arr[j] < arr[minIndex]) {
					minIndex = j;
				}
			}
			// ���� ������� ��������� �� ���������
			if (up == false) {
				// ���� �������� ������� ������ �� ���������, ������� minIndex
				if (arr[j] > arr[minIndex]) {
					minIndex = j;
				}
			}
		}
		// ���� ��������� ������ ���������� (��� �������������) �������� �� ������� ��������� �������, �� ������� �� ����������
		if (minIndex != i) {
			// ���� ���������� �������� arr[i] � arr[minIndex]
			Tool temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;

			// ���� ���������� �������� id[i] � id[minIndex] ��� ���������� ���������� �� ������������� � ����� ����������������
			int t;
			t = id[i];
			id[i] = id[minIndex];
			id[minIndex] = t;
		}
	}
}
