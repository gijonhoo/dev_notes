#include<stdio.h>
#include<stdlib.h>
/**
	结构体的大小 大于等于结构体中每个变量所占字节数的和
	结构体的大小 等于 最大的变量所占字节数的整数倍
	c结构体中不能定义函数 
	函数指针 studypoint 
**/
void study(){
	printf("1234567890\n");
} 

struct Student{
	short age;
	int score;
	char sex;
	void(*studypoint)();
};

void main(){
	struct Student stu = {18, 100, 'f'};
	stu.studypoint = &study;
	stu.studypoint();
	printf("stu.age = %d\n",stu.age);
	printf("stu.score = %d\n",stu.score);
	printf("stu.sex = %c\n",stu.sex);
	printf("结构体student占%d个字节\n", sizeof(stu));
} 
