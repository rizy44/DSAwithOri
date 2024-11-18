
//Thực hành 30-9, mỗi lần swap sẽ in ra
#include<bits/stdc++.h>
using namespace std;

void InMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void SelectionSortTang(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;
			}
		}
		swap(arr[min_index], arr[i]);
	}
}

void SelectionSortGiam(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int max_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[max_index] < arr[j]) {
				max_index = j;
			}
		}
		swap(arr[max_index], arr[i]);
	}
}

//Thực hành 30-9, mỗi lần swap sẽ in ra
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bool Changed = 0;
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min_index] > arr[j]) 
			{
				min_index = j;
				Changed = 1;
			}
		}
		if (Changed) {
			swap(arr[min_index], arr[i]);
			InMang(arr, n);
			Changed = 0;
		} else {
			break;
		}
	}
	delete[] arr;
	return 0;
}
