//�Ƶ{��   
void bubbleSort(int * x)
{
	int k,j,temp; //�ܼƫŧi
	for(j=5;j>1;j--){//�Ĥ@�h�j��
		for(k=0;k<j-1;k++){//�ĤG�h�j��
			if (x[k+1] < x[k]) {
				temp=x[k+1]; //�洫�⤸��
				x[k+1]=x[k];
				x[k]=temp;
				
			}
		}
	} 	
}
