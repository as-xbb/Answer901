#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////保存杨辉三角中的数据
//int main()
//{
//	int array[10][10];
//
//	int i, j;
//	for (i = 0; i < 10; ++i)
//	{
//		//给杨辉三角中的每一行进行赋值
//		for (j = 0; j <= i; ++j)
//		{
//			//第0列与对角线上的数据都是1
//			if (0 == j || i == j)
//			{
//				array[i][j] == 1;
//			}
//			else
//			{
//				//其他位置
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
//这个地方我们只考虑奇魔方阵
int main(){
	//int array[100][100] = { 0 };
	//int N;	//魔方阵的阶数
	//int row = 0, col = 0;
	//int prevrow = 0, prevcol = 0;//前一个元素所在的行与列
	//int i,j;
	//while (1){
	//	printf("请输入魔方阵的阶数：（3~100）\n");
	//	scanf("%d", &N);
	//	if (0 != N % 2 && (N >= 3 && N < 100)){
	//		break;
	//	}
	//}
	////放置1：第0行最中间的位置
	//col = N / 2;
	//array[row][col] = 1;
	//// 对于剩下的N^2-1个元素，按照以下规则来进行存放
	////下一个元素存放在当前元素上一行下一列
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
	//		//row、col该位置已经有元素---->前一个元素的当前列的下一行
	//		row = prevrow + 1;
	//		col = prevcol;
	//	}
	//	array[row][col] = i;
	//	prevcol = col;
	//	prevrow = row;
	//}
	////输出
	//for (i = 0; i < N; ++i){
	//	for (j = 0; j < N; ++j){
	//		printf("%6d", array[i][j]);
	//	}
	//	printf("\n");
	//}
	printf("%on", 010 << 1 ^ 1);

	return 0;
}