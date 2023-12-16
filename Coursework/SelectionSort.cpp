#include "MyLib.h"

// ‘ункц≥€ сортуванн€ вибором
void selectionSort(bool up, vector<Tool>& arr, int size, vector<int>& id) {
	// «овн≥шн≥й цикл проходить по вс≥х елементах масиву
	for (int i = 0; i < size - 1; i++) {
		// «находженн€ ≥ндексу м≥н≥мального (або максимального, залежно в≥д параметра up) елемента
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			// ѕерев≥рка, чи потр≥бно сортувати за зростанн€м чи за спаданн€м
			if (up == true) {
				// якщо поточний елемент менший за м≥н≥мальний, оновити minIndex
				if (arr[j] < arr[minIndex]) {
					minIndex = j;
				}
			}
			// якщо потр≥бно сортувати за спаданн€м
			if (up == false) {
				// якщо поточний елемент б≥льший за м≥н≥мальний, оновити minIndex
				if (arr[j] > arr[minIndex]) {
					minIndex = j;
				}
			}
		}
		// якщо знайдений ≥ндекс м≥н≥мального (або максимального) елемента не дор≥внюЇ поточному ≥ндексу, то обм≥н€ти њх значенн€ми
		if (minIndex != i) {
			// ќбм≥н значенн€ми елемент≥в arr[i] ≥ arr[minIndex]
			Tool temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;

			// ќбм≥н значенн€ми елемент≥в id[i] ≥ id[minIndex] дл€ збереженн€ в≥дпов≥дност≥ м≥ж ≥нструментами ≥ њхн≥ми ≥дентиф≥каторами
			int t;
			t = id[i];
			id[i] = id[minIndex];
			id[minIndex] = t;
		}
	}
}
