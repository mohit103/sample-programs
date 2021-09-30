#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // it takes high element as pivot.

	int i = (low - 1); //  means i = -1 , i is basically keeping track of smaller 

elements then j so ehen j founds a element which is smaller than high it can swap it 

with i,index of smaller element and also used to indicate position of the pivot where 

pivot should be placed

	for(int j =low ; j<= high - 1; j++)
	{
		if (arr[j] < pivot) // if current element is smaller then our pivot
		{
             i++; // increment index of smaller element.
             swap(&arr[i] , &arr[j]);// swap 
		}
	}

	swap(&arr[ i + 1], &arr[high]); // now we will have alll smaller number 

then pivot in left of i and larger no in right of i so we have to swap i+1 index and high 

to put our pivot in position.
	return (i + 1); // return the address of pivot element.
}

void QuickSort( int arr[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(arr, low, high); // pivot element index will be 

stored inside it.
        
        QuickSort(arr, low, pi - 1); // quicksort on left side.
        QuickSort(arr, pi +1, high); // quicksort on right side.

    }
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver Code
int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    QuickSort(arr, 0, n - 1); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 
