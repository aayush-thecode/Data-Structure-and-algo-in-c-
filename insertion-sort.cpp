#include <iostream>
using namespace std;


void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {

    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i -1;
        while(prev >= 0 && arr[prev] > curr)  {
            swap(arr[prev], arr[prev +1]);
            prev --;
        }

        arr[prev + 1] = curr;
    }
    print(arr, n);

}


int main() {

    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void insertionSort( int arr[], int n )
{
	for( int i=1;i<n;i++)
	{
		 int key= arr[i];
		 int j=i-1;
		 
		 while( j>=0 && arr[j]< key)
		 {
		 	arr[j+1]= arr[j];
		 	j--;
		 }
		 arr[j+1] = key;
	}
}
int main()
{
	int arr[]= {1,3,5,7,9};
	int n=5;
	
	insertionSort( arr, n );
	
	for( int i=0;i<n;i++)
	{
		 cout<<arr[i]<<" ";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
void insertionSort( int arr[], int n )
{
	for( int i=1;i<n;i++)
	{
		 int key= arr[i];
		 int j=i-1;
		 
		 while( j>=0 && arr[j]< key)
		 {
		 	arr[j+1]= arr[j];
		 	j--;
		 }
		 arr[j+1] = key;
	}
}
int main()
{
	int arr[]= {1,3,5,7,9};
	int n=5;
	
	insertionSort( arr, n );
	
	for( int i=0;i<n;i++)
	{
		 cout<<arr[i]<<" ";
	}
	return 0;
} 