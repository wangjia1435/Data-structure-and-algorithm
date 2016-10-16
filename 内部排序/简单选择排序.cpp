#include <stdio.h>

// 简单选择排序, [0..n]
// 每次从 后面选一个最小的放到前面来
// wangjia shell
// 从i=0时，找出后面n-i个元素的最小值;记住下表存放在pos中;交换data[i]和data[j]
// 跟一般的选择排序思路会有区别
// 一般的时i=0时，分别与后面n-i个元素一一比较，然后交换
void select_sort(int *data, int n)
{
	int i, j, tmp;
	int min, pos;

	for (i=0; i<n; i++)
	{
		min = 0x4FFFFFFF;
		tmp = data[i];   pos = i;
		for (j=i; j<n; j++)
		{
			if (data[j] < min)
			{
				min = data[j];
				pos = j;
			}
		}
		if (pos != i)	// 如果不是自己
		{
			data[i] = data[pos];
			data[pos] = tmp;
		}
	}
}

int main(void)
{
	int i, n;
	int data[100];

	printf("请输入 n, 及 n 个元素: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) scanf("%d", data + i);

	select_sort(data, n);
	printf("排序后: ");
	for (i=0; i<n; i++) printf("%d, ", data[i]);
	printf("\n\n");
	return 0;
}
