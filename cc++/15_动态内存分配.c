#include<stdio.h>
#include<stdlib.h>

void main(){
	printf("������༶��������\n");
	int count;
	scanf("%d", &count);
	
	int* pointer = malloc(sizeof(int) * count); 
	int i;
	for(i = 0; i < count; i++){
		printf("�������%d��ѧ����ѧ�ţ�", i+1);
		scanf("%d", pointer+i); 
	} 
	for(i =0; i < count; i++){
		printf("��%d��ѧ����ѧ���ǣ�%d\n", i+1, *(pointer + i));
	}
	printf("������������������");
	int increment;
	scanf("%d",&increment);
	pointer = realloc(pointer, sizeof(int)*(count + increment));
	for(i = count; i< count +increment; i++){
		printf("�������%d��ѧ����ѧ�ţ�", i+1);
		scanf("%d", pointer+i); 
	} 
	for(i = count; i< count +increment; i++){
		printf("��%d��ѧ����ѧ���ǣ�%d\n", i+1, *(pointer + i));
	}
}
