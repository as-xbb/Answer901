/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++)                       //�ӵ�һ��Ԫ�ؿ�ʼ����ѭ��
    {
        for (int j = i + 1; j < numsSize; j++)                   //�ֱ�������Ԫ����ӽ��бȽ�
        {
            if (nums[i] + nums[j] == target)                 //����Ԫ�����Ϊ����Ŀ��ֵtarget
            {
                int* a = (int*)malloc(sizeof(int) * 2);     //������ʾ���붯̬����
                a[0] = i;                                 //���õ���Ԫ���±괫������
                a[1] = j;
                *returnSize = 2;                          //���ص������СΪ2
                return a;                               //��������
            }
        }
    }
    return 0;
}