#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////筛选法求100之内的素数
//int main()
//{
//	int i,j;
//	int array[100];
//	//向array数组中填充1~100所有数据
//	for (i = 0; i < 100; i++)
//	{
//		array[i] = i + 1;
//	}
//	//1不是素数，只需将1划掉--》使用0进行填充
//	array[0] = 0;
//	for (i = 0; i < 100; ++i)
//	{
//		//现在需要使用array[i]去模其之后所有的数据
//		for (j = i + 1; j < 100; ++j)
//		{
//			if (0 == array[i])
//				continue;
//			if (0 != array[j] % array[i] == 0)
//			{
//				array[j] = 0;
//			}
//		}
//	}
//
//	//输出所有的素数
//	for (i = 0; i < 100; ++i)
//	{
//		if (0 != array[i])
//		{
//			printf("%d ", array[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
////用选择法对10个整数排序
//int main()
//{
//	int i,j,temp;
//	int maxPos;//标记最大元素所在得位置
//	int array[10] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//
//	//将排序之前数组中的元素输出
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	for (i = 0; i < size; ++i)//控制选择总的趟数
//	{
//		//具体选择的方式
//		//选择法来进行排序
//		maxPos = 0;
//		for (j = 1; j < size - i; ++j)
//		{
//			if (array[j] > array[maxPos])
//			{
//				maxPos = j;
//			}
//		}
//		//已经找到最大元素所在的位置
//		temp = array[maxPos];
//		array[maxPos] = array[size - 1 - i];
//		array[size - 1 - i] = temp;
//	}
//	//输出排序好的结果
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
////求一个3x3的整型矩阵对角线元素之和
//int main()
//{
//	int i, j;
//	int sumLT2RB = 0, sumRT2LB = 0;
//	//接收矩阵中的数据
//	int array[3][3];
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 3; ++j)
//		{
//			scanf("%d", &array[i][j]);
//		}
//	}
//	//求左上角到右下角对角线元素之和
//	//行下标与列下标是相等的
//	for (i = 0; i < 3; ++i)
//	{
//		sumLT2RB += array[i][i];
//	}
//	//求右上角到左下角对角线元素之和
//	for (i = 0, j = 2; i < 3; i++, j--)
//	{
//		sumRT2LB += array[i][j];
//	}
//	printf("左上角到右下角对角线元素之和：%d\n", sumLT2RB);
//	printf("右上角到左下角对角线元素之和：%d\n", sumRT2LB);
//
//	return 0;
//}

//#include<stdio.h>
////有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中
//int main()
//{
//	int key = 0;
//	int end = 8;
//	int i;
//	int array[10] = { 0,1,2,3,4,6,7,8,9 };
//	printf("请输入要插入的元素：");
//	scanf("%d", &key);
//
//	printf("原数组中的元素：\n");
//	for (i = 0; i < 9; ++i)
//	{
//		printf("%d", array[i]);
//	}
//	printf("\n");
//
//	//1.找待插入元素在数组中的位置---从后往前来进行查找
//	//注意：如果待插入元素比数组中任何一个元素都小
//	//	end最终来到-1的位置，如果继续比较，数组越界而导致代码崩溃
//	while (end >= 0 && key < array[end])
//	{
//		array[end + 1] = array[end];
//		end--;
//	}
//
//	//2.插入元素
//	array[end + 1] = key;
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d", array[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

////将一个数组中的值按逆序重新存放
//#include<stdio.h>
//int main()
//{
//	int array[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int begin = 0;
//	int end = sizeof(array) / sizeof(array[0]) - 1;
//	int temp = 0;
//	int i = 0;
//
//	printf("逆序之前数组的元素序列为：\n");
//	for (i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//
//	//从左侧找一个数据，然后从右侧找一个数据，交换
//	while (begin < end)
//	{
//		temp = array[begin];
//		array[begin] = array[end];
//		array[end] = temp;
//
//		begin++;
//		end--;
//	}
//
//	printf("逆序之后数组的元素序列为：\n");
//	for (i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

