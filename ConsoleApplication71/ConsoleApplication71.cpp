#include <iostream>
using namespace std;


void QuickSort(int* arr, int size)
{
	int left = 0;
	int right = size - 1;
	int midvalue = arr[size / 2];
	do
	{
		while (arr[left] < midvalue)
		{
			left++;
		}
		while (arr[right] > midvalue)
		{
			right--;
		}
		if (left <= right)
		{
			swap(arr[left], arr[right]);
			left++; right--;
		}
	} while (left <= right);
	if (right > 0) QuickSort(arr, right + 1);
	if (left < size) QuickSort(arr + left, size - left);
}
void show(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	int* testarray = new int[8]{ 5,8,1,15,7,0,6,14 };
	show(testarray, 8);
	QuickSort(testarray, 8);
	show(testarray, 8);
}