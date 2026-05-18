#include <iostream>
#include <array>
#include <vector>

using namespace std;
vector <int> merge(vector <int>  left,vector <int> right);
vector <int> sort(vector <int>  myArray);



int main(){
	

	vector <int> myArray = {4,2,1,5,6,8,0,7,9,3};
	vector <int> a2 = sort(myArray);
	auto itr = a2.begin();
	while(itr != a2.end()){
		printf("%d ",*itr++ );
	}
	return 0;
}

vector <int>  sort(vector <int> myArray){

	int size = myArray.size();
	vector <int> left;
	vector <int> right;
	vector <int> L;
	vector <int> R;
	if (myArray.size() == 1) return myArray;
	else
	{

		auto itr = myArray.begin();

		for(int i=0 ; i<size/2 ; ++i){
			left.push_back(myArray.at(i));
		}
		for(int i=size/2; i<size;++i){
			right.push_back(myArray.at(i));
		}

	}
	left= sort(left);
	right= sort(right);
		
	return merge(left,right);	
}

vector <int> merge(vector <int> left,vector <int> right){

	vector <int> v3;
	int i,j,k;
	i=j=k=0;

	while( i<left.size() && j<right.size() ){
		if(left[i] < right[j]){
			v3.push_back(left[i++]);
		}
		else{
			v3.push_back(right[j++]);
		}
	}
	while(i <left.size()){
		v3.push_back(left[i++]);
	}
	while(j <right.size()){
		v3.push_back(right[j++]);
	}


		return v3;	
}



// keep on dividing the list into 2 halves and then join it back from the singlest element 