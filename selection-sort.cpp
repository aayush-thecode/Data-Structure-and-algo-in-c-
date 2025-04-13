#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    //O(n^2) // O(n*logn) is better than O(n^2)
    for(int i = 0; i<n-1; i++) {
        int minIdx = i;
        //loop for find min
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    print(arr, n);
}

int main() {
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void selectionSort( int arr[] , int n)
{
      for( int i=0;i<n-1;i++)
      {
         int mx=i;
         for( int j=i+1;j<n;j++)
         {
         	if( arr[mx]< arr[j])
         	{
         		mx=j;
         	}
         }
         int temp= arr[i];
         arr[i]= arr[mx];
         arr[mx]=temp;
      }
}
int main()
{
	int arr[]= {1,3,5,7,9};
	int n=5;
	selectionSort( arr,n );
	for( int i=0;i<n;i++)
	{
		 cout<<arr[i]<<" ";
	}
	return 0;
}