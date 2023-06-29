#include <iostream>
using namespace std;
int binarysearchofarray(int arr[], int n, int key)
{
	cout << "enter the value of key" << endl;
	cin >> key;
	int start = 0;
	int end = n - 1;
	int mid = start + (end - start) / 2;
	for (int i = 0; i < n; i++)
	{

		if (key == arr[mid])
		{
			return mid;
		}
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}

		mid = start + (end - start) / 2;
	}
	return -1;
}
int main()
{
	int t;
	cout << "enter no test case" << endl;
	cin >> t;
	while (t--)
	{

		int arr[100], key;
		int n;
		cout << "insert the size of array" << endl;
		cin >> n;
		cout << "insert the array" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << "printing the array" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << endl;
		}

		int ans = binarysearchofarray(arr, n, key);
		cout << ans;
	}
	return 0;
}
