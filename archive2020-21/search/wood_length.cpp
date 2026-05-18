#include <bits/stdc++.h>

using namespace std;

int find_length(vector<int> v,int mid,int B){
	
	int i = mid;
	int sum = 0;
	while(i < v.size()){
		if(v[i] > B){ sum += v[i]-B;}
		i++;
	}

	return sum;
}
int main(){

	vector<int> A = {0,1,2,3,4,5,6,7};
	int B = 3;

	sort(A.begin(),A.end());

    int start = 0;
    int end = A.size()-1;
    int mid ;
    int found_len;

    while(start <= end){

        mid = (start+end)/2 ;
        found_len = find_length(A,mid,B);
        cout<<"for len "<<mid<<"sum is "<<found_len<<"\n";

        if( found_len ==  B){
            cout<<mid;
            // return mid;
        }

        else if(found_len > B){
            start = mid+1;

        }
        else{
            end = mid-1;
        }


    }

    cout<<found_len;
    return found_len;
	return 0;
}