#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool is_odd(int n){
	return (n%2 == 1);
}

int main(){

	vector<int> vec = {10,20,30,45,50,20,25};
	//pred checks the condition for each element
	cout<<any_of(vec.begin(), vec.end(),is_odd)<<"\n";

	cout<<none_of(vec.begin(), vec.end(),is_odd)<<"\n";

	//to find 45 in vector ,iterator is returned
	auto itr = find(vec.begin(), vec.end(),45);
	cout<<*itr<<"\n";

	//to count the occurence of certain element
	cout<<count(vec.begin(), vec.end(),20)<<"\n";

	//to count the occurence of certain element that satisy certain condition
	cout<<count_if(vec.begin(), vec.end(),(is_odd))<<"\n";

	

	return 0;
}