#include<stdio.h>
#include<stdlib.h>

void main(){
	printf("请输入班级的人数：\n");
	int count;
	scanf("%d", &count);
	
	int* pointer = malloc(sizeof(int) * count); 
	int i;
	for(i = 0; i < count; i++){
		printf("请输入第%d个学生的学号：", i+1);
		scanf("%d", pointer+i); 
	} 
	for(i =0; i < count; i++){
		printf("第%d个学生的学号是：%d\n", i+1, *(pointer + i));
	}
	printf("请输入插班生的人数：");
	int increment;
	scanf("%d",&increment);
	pointer = realloc(pointer, sizeof(int)*(count + increment));
	for(i = count; i< count +increment; i++){
		printf("请输入第%d个学生的学号：", i+1);
		scanf("%d", pointer+i); 
	} 
	for(i = count; i< count +increment; i++){
		printf("第%d个学生的学号是：%d\n", i+1, *(pointer + i));
	}
}
