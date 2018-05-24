void bubbleSort(int const *x)
{
	int k,j,temp; //變數宣告//
	for(j=5;j>1;j--){//第一層迴圈// 
		for(k=0;k<j-1;k++){//第二層迴圈//
			if (x[k+1] < x[k]) {
				temp=x[k+1]; //交換兩元素// 
				x[k+1]=x[k];
				x[k]=temp;
				
			}
		}
	} 
	
}
