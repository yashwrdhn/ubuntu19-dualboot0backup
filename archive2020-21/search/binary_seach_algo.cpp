#include <bits/stdc++.h>

using namespace std;

int Binary_search(vector<int>v, int len, int x){
	
	int start = 0;
	int end = len-1;
	int mid = 0;

	while(start <= end){

		mid = start + (end-start)/2;

		if(v[mid] == x) return mid;

		else if(v[mid] < x){
			start = mid+1;
		}

		else{ end = mid-1;}

	}

	return -1;
}

int main(){

	vector<int> arr = {0,1,2,3,4,5,6,7,8,9,10,11,12,15};
	int len = arr.size();
	int element = 15;
	
	int index = Binary_search(arr,len,element);

	cout<<index;

	return 0;	
}

