#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        cout << "innerloop";
        for(int j=0; j<n-i-1; j++) {
            cout << "outerloop";
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {
            return; //array is already sorted.
        }
    }
    print(arr, n);
}

int main() {
    int arr[5] = {5,4,1,3,2};
    bubbleSort(arr, 5);

}


#include <bits/stdc++.h>

using namespace std;
void bubbleSort( int arr[] , int n)
{
     
      for( int i=0;i<n;i++)
      {
         for( int j=0;j<n-1-i;j++)
         {
             if( arr[j]<arr[j+1])
             {
                 int temp= arr[j];
                 arr[j] = arr[j+1];
                 arr[j+1] = temp;
             }
         }
      }
}
int main()
{
	int arr[]= {1,3,5,7,9};
	int n=5;
	bubbleSort( arr,n );
	for( int i=0;i<n;i++)
	{
		 cout<<arr[i]<<" ";
	}
	return 0;
}
