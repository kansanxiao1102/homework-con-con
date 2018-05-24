#include <stdio.h>
#include <stdlib.h>



void bubbleSort(int const *x); //函式宣告// 


int main(void){
const int  a[5] ={10,56,42,12,13}; //最初陣列值//
	size_t i ; //counter//
	
	printf("最初陣列值:\n"); //顯示最初陣列的排序// 
	
	for(i=0;i<5;i++){
		printf("%4d",a[i]);
	}
	 

	 
	bubbleSort(a);  //呼叫排序函數 
	
	printf("\n排序過後值:\n"); //顯示泡沫排序過後的排序//
	
	for(i=0;i<5;i++){
		printf("%4d",a[i]);
	}
}


