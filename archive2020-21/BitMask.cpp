#include <iostream>
#include <bitset>

using namespace std;

int main(){

	int N,K;
	N = 3;
	
	K=7;
	for(int i=1; i<=K; ++i){
		cout<<(N & 1<<i)<<"\n";
	}


	return 0;
}