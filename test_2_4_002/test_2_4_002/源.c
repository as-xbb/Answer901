#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////������������е�����
//int main()
//{
//	int array[10][10];
//
//	int i, j;
//	for (i = 0; i < 10; ++i)
//	{
//		//����������е�ÿһ�н��и�ֵ
//		for (j = 0; j <= i; ++j)
//		{
//			//��0����Խ����ϵ����ݶ���1
//			if (0 == j || i == j)
//			{
//				array[i][j] == 1;
//			}
//			else
//			{
//				//����λ��
//				array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		for (j = 0; j <= i; ++j)
//		{
//			printf("%6d", array[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include<stdio.h>
//����ط�����ֻ������ħ����
int main(){
	//int array[100][100] = { 0 };
	//int N;	//ħ����Ľ���
	//int row = 0, col = 0;
	//int prevrow = 0, prevcol = 0;//ǰһ��Ԫ�����ڵ�������
	//int i,j;
	//while (1){
	//	printf("������ħ����Ľ�������3~100��\n");
	//	scanf("%d", &N);
	//	if (0 != N % 2 && (N >= 3 && N < 100)){
	//		break;
	//	}
	//}
	////����1����0�����м��λ��
	//col = N / 2;
	//array[row][col] = 1;
	//// ����ʣ�µ�N^2-1��Ԫ�أ��������¹��������д��
	////��һ��Ԫ�ش���ڵ�ǰԪ����һ����һ��
	//for (i = 2; i <= N * N; ++i){
	//	row--;
	//	col++;
	//	if (row < 0){
	//		row = N - 1;
	//	}
	//	if (col >= N){
	//		col = 0;
	//	}
	//	if (0 != array[row][col]){
	//		//row��col��λ���Ѿ���Ԫ��---->ǰһ��Ԫ�صĵ�ǰ�е���һ��
	//		row = prevrow + 1;
	//		col = prevcol;
	//	}
	//	array[row][col] = i;
	//	prevcol = col;
	//	prevrow = row;
	//}
	////���
	//for (i = 0; i < N; ++i){
	//	for (j = 0; j < N; ++j){
	//		printf("%6d", array[i][j]);
	//	}
	//	printf("\n");
	//}
	printf("%on", 010 << 1 ^ 1);

	return 0;
}