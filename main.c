#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int const *x); //�禡�ŧi


int main(void){
	int a[5] ={23,44,7,26,3}; //�̪�}�C��
	size_t i ; //counter//
	
	printf("�̪�}�C��:\n"); //��̪ܳ�}�C���Ƨ�
	
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
	
	bubbleSort(a);  //�I�s�ƧǨ�� 
	
	printf("\n�ƧǹL���:\n"); //��ܪw�j�ƧǹL�᪺�Ƨ�
	
	for(i=0;i<5;i++)
	{
		printf("%4d",a[i]);
	}
}


