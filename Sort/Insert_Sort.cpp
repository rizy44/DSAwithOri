#include<bits/stdc++.h>
using namespace std;
void InsertSortTang(int arr[],int n)
{
	for (int i = 1;i < n;i++)
	{
		int a = arr[i];int pos = i - 1;
		while (pos >= 0 && a < arr[pos])
		{
			arr[pos + 1] = arr[pos];
			--pos;
		}
		arr[pos + 1] = a;
	}
}

void InserSortGiam(int arr[], int n)
{
	for (int i = 1;i < n;i++)
	{
		int a = arr[i];int pos = i - 1;
		while (pos >= 0 && a > arr[pos])
		{
			arr[pos + 1] = arr[pos];
			--pos;
		}
		arr[pos + 1] = a;
	}
}
void InMang(int *a,int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << " ";
	}
	cout<<endl;
}
//Thuwuc hanh 30-9, mỗi lần swap sẽ in ra
int main()
{
	int n;
	cin>>n;
	int*arr =new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < n; i++)
	{
		int a = arr[i];
		int pos = i - 1;
		while (pos >= 0 && a < arr[pos])
		{
			arr[pos + 1] = arr[pos];
			--pos;
			InMang(arr, n);
		}
		arr[pos + 1] = a;
		InMang(arr, n);
	}
}
