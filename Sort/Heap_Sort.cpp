#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i) 
{

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right; 
    if (largest != i) {
       swap(arr[i], arr[largest]);
       heapify(arr, n, largest);
    }
}
void BuildHeap(int* A, int n)
{
	int i = (n - 1) / 2;
	while (i >= 0)
	{
        heapify(A, n, i);
		i--;
	}
}

void HeapSort(int* a, int n) {
    BuildHeap(a, n);
    while (n > 0) {
        n = n - 1;
        swap(a[0], a[n]);
        heapify(a, n, 0);
    }
}
void HeapSortGiam(int* a,int n)
{
        for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Trích xuất từng phần tử từ heap
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }

}
int main()
{
    int a[9] = { 8,2,1,9,4,5,7,6,3 };
    HeapSortGiam(a, 9);
    for (int i = 0;i <9;i++)
    {
       cout << a[i] << " ";
    }
    return 0;
}