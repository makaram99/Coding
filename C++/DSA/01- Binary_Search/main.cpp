#include <iostream>
using namespace std;
//binary search function
int binarySearch(int arr[], int L, int R, int x);
//The main function
int main()
{
	int arr[] = { 1, 3, 4, 15, 20, 35 };
	int x = 20;
	int n = sizeof(arr) / sizeof(arr[0]);
	int index = binarySearch(arr, 0, n - 1, x);
        if (index == -1)
              cout << "Element is not present in array \n";
        else
              cout << "The index is: " << index;

	return 0;
}

int binarySearch(int arr[], int L, int R, int x)
{
	if (R >= L) {
		int mid = L + (R - L) / 2;

		// Search at the middle
		if (arr[mid] == x)
			return mid;
		// Search in the left subarray
		if (arr[mid] > x)
			return binarySearch(arr, L, mid - 1, x);
		// Search in the right subarray
		return binarySearch(arr, mid + 1, R, x);
	}
	//The element is not found
	return -1;
}
