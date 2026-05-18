

// so quicksort solves the issue of merge sorts space complexities.
// we if finds pivots and partition it and then repeat



#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int l,int h){
	int i=l-1;
	int temp = 0;
	int pivot = arr[h];

	for(int j=l;j<h;++j){
		if(arr[j] <= pivot){
			
			temp = arr[++i];
			arr[i] = arr[j];
			arr[j] = temp;
			
		}	
	}
	temp = arr[++i];
	arr[i] = pivot;
	arr[h] = temp;
	// cout<<arr[i]<<" "<<arr[h];
	return i;
}

void quicksort(vector<int>&arr,int low,int high){
	if (low < high){
		
		int p = partition(arr,low,high);
		
	

		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
		
	}
} 
int main(){

	vector <int> arr= {10,9,2,3,4,5,34,5,23,1,1,3,1};

	quicksort(arr,0,arr.size()-1);
	for(int i=0; i<arr.size();++i) cout<<arr[i]<<" ";
	cout<<"\n";	
	return 0;
}

