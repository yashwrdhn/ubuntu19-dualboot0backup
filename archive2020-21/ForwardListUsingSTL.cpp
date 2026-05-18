#include <iostream>

#include <algorithm>
#include <forward_list>

using namespace std;

void ShowForwardList(forward_list<int>f_List);


int main()
{
	
	forward_list<int> f_List =  { 8,1,2,3,5,45};
	forward_list<int> ::iterator itr = f_List.begin();
	forward_list<int> f_List2 ;

	
	// itr = f_List.begin();
	// auto itr2 = next(itr,3);
	// printf("%d \n",*itr2 );

	f_List.push_front(453);
	f_List.pop_front();

	f_List2.assign({3,4,5,23,3,2,2});
	

	ShowForwardList(f_List2);
	return 0;
}


void ShowForwardList(forward_list<int>f_List){
	forward_list<int> ::iterator itr = f_List.begin();
	while(itr != f_List.end()){
		printf("%d \n",*itr++);
	}

}