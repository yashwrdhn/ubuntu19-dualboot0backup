#include <bits/stdc++.h>

using namespace std;


int main(){

    vector<int> A = { 2,7,7,7,7,8,8,8};
    vector<int> v2;
    int B = 7;

    int count = 0;
    int found = 0;
    int start = 0;
    int end = A.size()-1;
    int mid = 0;

    

    while(start <= end){

        mid = start + (end-start)/2 ;

        if(A[mid] == B ) { 
            
            found = 1;
            count++;
            for(int i=mid-1;i>=start;--i){
                if(A[i] == B)count++;
                else break;
            }

            for(int j=mid+1;j<=end;++j){
                if(A[j] == B)count++;
                else break;
            }

            break;
            // return count;
        }

        else if(A[mid] < B){
            start = mid+1;
            }

        else{
            end = mid-1;
        }
    }


    cout<<count;

    

    return 0;
}
