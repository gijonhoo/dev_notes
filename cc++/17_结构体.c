#include<stdio.h>
#include<stdlib.h>
/**
	�ṹ��Ĵ�С ���ڵ��ڽṹ����ÿ��������ռ�ֽ����ĺ�
	�ṹ��Ĵ�С ���� ���ı�����ռ�ֽ�����������
	c�ṹ���в��ܶ��庯�� 
	����ָ�� studypoint 
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
	printf("�ṹ��studentռ%d���ֽ�\n", sizeof(stu));
} 
