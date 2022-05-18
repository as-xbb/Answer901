/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++)                       //从第一个元素开始暴力循环
    {
        for (int j = i + 1; j < numsSize; j++)                   //分别与后面的元素相加进行比较
        {
            if (nums[i] + nums[j] == target)                 //若两元素相加为整数目标值target
            {
                int* a = (int*)malloc(sizeof(int) * 2);     //按照提示申请动态数组
                a[0] = i;                                 //将得到的元素下标传入数组
                a[1] = j;
                *returnSize = 2;                          //返回的数组大小为2
                return a;                               //返回数组
            }
        }
    }
    return 0;
}