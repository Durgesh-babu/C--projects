#include <iostream>
using namespace std;

int main()
{
	int n;
    cout << "Enter the number of elements to sort: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            } 
        }
        swap(arr[min], arr[i]);
    }

    cout << "Sorted array: \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}