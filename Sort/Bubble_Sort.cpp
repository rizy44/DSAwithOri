#include<bits/stdc++.h>
using namespace std;
void BubbleSortTang(int arr[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - i - 1;j++)//n-i-1 la so phan tu da sap xep
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);

		}
	}
}

void BubbleSortGiam(int arr[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - i - 1;j++)
		{
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

//Thực hành 30-9, mỗi lần swap sẽ in ra
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - i - 1;j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				for (int k = 0;k < n;k++)
				{
					cout << a[k] << " ";
				}
			}
			cout<<endl;	
		}
	}
}