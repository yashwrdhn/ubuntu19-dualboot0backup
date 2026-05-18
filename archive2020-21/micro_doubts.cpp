#include <stdio.h>
#include <iostream>

using namespace std;

int main(){


	unsigned  char channel_num = '7';

	if(channel_num <= '7'){
		
		int num = channel_num - '0';



	}

	else{
		cout<<"no";
	}

	int x = channel_num - '0';
	// cout<<(0x07);

	cout<< (channel_num & 0x07);
	

	

	return 0;
}