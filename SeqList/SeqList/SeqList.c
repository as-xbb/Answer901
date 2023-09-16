#include"SeqList.h"
#include<assert.h>
void SLInit(SL* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	ps->size = 0;
	ps->capacity = 4;
}

void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	assert(ps);
	// ����Ҫ����
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, ps->capacity * 2 * (sizeof(SLDataType)));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//SLCheckCapacity(ps);

	//ps->a[ps->size] = x;
	//ps->size++;
	SLInsert(ps, ps->size, x);
}

void SLPopBack(SL* ps)
{
	assert(ps);
	//// ����ļ��
	////if (ps->size == 0)
	//	//return;

	//// �����ļ��
	//assert(ps->size > 0);

	////ps->a[ps->size - 1] = 0;
	//ps->size--;
	SLErase(ps, ps->size);
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//SLCheckCapacity(ps);

	//// Ų������
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	//ps->a[0] = x;
	//ps->size++;

	SLInsert(ps, 0, x);
}

void SLPopFront(SL* ps)
{
	assert(ps);
	//assert(ps->size > 0);

	//int begin = 1;
	//while (begin < ps->size)
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	++begin;
	//}
	//ps->size--;
	SLErase(ps, 0);
}

// ��posλ�ò���x
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);

	int end = ps->size - 1;
	while (end>=pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

// ɾ��posλ�õ�ֵ
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}
//�޸�posλ�õ�ֵ
void SLModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}