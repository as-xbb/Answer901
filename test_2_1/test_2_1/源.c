#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////ɸѡ����100֮�ڵ�����
//int main()
//{
//	int i,j;
//	int array[100];
//	//��array���������1~100��������
//	for (i = 0; i < 100; i++)
//	{
//		array[i] = i + 1;
//	}
//	//1����������ֻ�轫1����--��ʹ��0�������
//	array[0] = 0;
//	for (i = 0; i < 100; ++i)
//	{
//		//������Ҫʹ��array[i]ȥģ��֮�����е�����
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
//	//������е�����
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
////��ѡ�񷨶�10����������
//int main()
//{
//	int i,j,temp;
//	int maxPos;//������Ԫ�����ڵ�λ��
//	int array[10] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//
//	//������֮ǰ�����е�Ԫ�����
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	for (i = 0; i < size; ++i)//����ѡ���ܵ�����
//	{
//		//����ѡ��ķ�ʽ
//		//ѡ������������
//		maxPos = 0;
//		for (j = 1; j < size - i; ++j)
//		{
//			if (array[j] > array[maxPos])
//			{
//				maxPos = j;
//			}
//		}
//		//�Ѿ��ҵ����Ԫ�����ڵ�λ��
//		temp = array[maxPos];
//		array[maxPos] = array[size - 1 - i];
//		array[size - 1 - i] = temp;
//	}
//	//�������õĽ��
//	for (i = 0; i < size; ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
////��һ��3x3�����;���Խ���Ԫ��֮��
//int main()
//{
//	int i, j;
//	int sumLT2RB = 0, sumRT2LB = 0;
//	//���վ����е�����
//	int array[3][3];
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 3; ++j)
//		{
//			scanf("%d", &array[i][j]);
//		}
//	}
//	//�����Ͻǵ����½ǶԽ���Ԫ��֮��
//	//���±������±�����ȵ�
//	for (i = 0; i < 3; ++i)
//	{
//		sumLT2RB += array[i][i];
//	}
//	//�����Ͻǵ����½ǶԽ���Ԫ��֮��
//	for (i = 0, j = 2; i < 3; i++, j--)
//	{
//		sumRT2LB += array[i][j];
//	}
//	printf("���Ͻǵ����½ǶԽ���Ԫ��֮�ͣ�%d\n", sumLT2RB);
//	printf("���Ͻǵ����½ǶԽ���Ԫ��֮�ͣ�%d\n", sumRT2LB);
//
//	return 0;
//}

//#include<stdio.h>
////��һ�����ź�������飬Ҫ������һ�����󣬰�ԭ������Ĺ��ɽ�������������
//int main()
//{
//	int key = 0;
//	int end = 8;
//	int i;
//	int array[10] = { 0,1,2,3,4,6,7,8,9 };
//	printf("������Ҫ�����Ԫ�أ�");
//	scanf("%d", &key);
//
//	printf("ԭ�����е�Ԫ�أ�\n");
//	for (i = 0; i < 9; ++i)
//	{
//		printf("%d", array[i]);
//	}
//	printf("\n");
//
//	//1.�Ҵ�����Ԫ���������е�λ��---�Ӻ���ǰ�����в���
//	//ע�⣺���������Ԫ�ر��������κ�һ��Ԫ�ض�С
//	//	end��������-1��λ�ã���������Ƚϣ�����Խ������´������
//	while (end >= 0 && key < array[end])
//	{
//		array[end + 1] = array[end];
//		end--;
//	}
//
//	//2.����Ԫ��
//	array[end + 1] = key;
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d", array[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

////��һ�������е�ֵ���������´��
//#include<stdio.h>
//int main()
//{
//	int array[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int begin = 0;
//	int end = sizeof(array) / sizeof(array[0]) - 1;
//	int temp = 0;
//	int i = 0;
//
//	printf("����֮ǰ�����Ԫ������Ϊ��\n");
//	for (i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//
//	//�������һ�����ݣ�Ȼ����Ҳ���һ�����ݣ�����
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
//	printf("����֮�������Ԫ������Ϊ��\n");
//	for (i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

