#include<stdio.h>
#include <bitset>
#include <iostream>
using namespace std;

// void lcd_print_binary(unsigned char row_num, unsigned char col_num, unsigned char num)
// {
// 	int binary[8] = {0};
// 	int num = num;
// 	int i=0;
// 	while(num){
// 		binary[i++] = num%2;
// 		num /= 10;
		
// 	} 
	
// }
// void lcd_print_hexadecimal(unsigned char row_num, unsigned char col_num, unsigned char num)
// {
	
// }

// void lcd_print_decimal(unsigned char row_num, unsigned char col_num, unsigned char num)
// {
	
// }

// void lcd_print_octal(unsigned char row_num, unsigned char col_num, unsigned char num)
// {
	
// }

void to_binary(int num){

	char s1[8],s2[8],extra ;
	int n=0;
	int i=0;
	while(num){
		if(num & 1){
			s1[i++] = '1';
		}
		else { s1[i++] = '0'; }
		num >>= 1;
	}
	

	for(int j=i;j<8;++j){
	
		s1[j] = '0';
	}


	

	for(int j=0; j<8;++j){
		s2[j] = s1[8-j-1];	
	}
	

	// cout<<s2;
	}

int main(void){
	
	
	


	// lcd_print_hexadecimal(1 , 3, counter);	
	// lcd_print_decimal( 1 , 8, counter );		
	// lcd_print_octal(1 , 14, counter);			
	// lcd_print_binary( 2 , 9, counter);		
	// counter++;	
	int Integer = 0;
	char toOct[4] ;
	for(int i=0; i<3;++i)cout<<toOct[i];
    char toHex[3];
	char todeci[4];
    string toBin ;
    bitset<8> binary(Integer);
	while(Integer != 15){

   
    to_binary(Integer);
	sprintf(todeci, "%03d", Integer);
    sprintf(toOct, "%03o", Integer);
    sprintf(toHex, "%02X", Integer);


    cout << "\tOctal: " << toOct << "\tDecimal: " << todeci << "\tHexadecimal: " << toHex << endl;
	cout<<"\n";
	Integer++;
	}
}


