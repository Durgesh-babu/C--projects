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

    int j,key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    

    cout << "Sorted array: \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}