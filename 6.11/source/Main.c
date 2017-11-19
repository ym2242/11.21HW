#include<stdio.h>
#define SIZE 10

int main(void)
{
	//a題
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass, hold,counter=0;
	size_t i;
	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	puts("");
	for (pass = 1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE - pass; i++)              //最大數字已定位不須比較
		{
			if (a[i]>a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				
			}
			counter++;
		}
	}
	puts("Data items in ascending order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	printf("\n\na的次數:%d\n\n", counter);
	//--------------------------------------------------------------------------------------b題-----------------------------------------------------------------------------------------
	int counter1 = 0;
	int exam = 0;
	int b[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	puts("Data items in original order");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", b[i]);
	}
	puts("");
	for (pass = 1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE - pass; i++)
		{
			if (b[i]>b[i + 1])
			{
				hold = b[i];
				b[i] = b[i + 1];
				b[i + 1] = hold;				
				exam++;                 //檢查是否有交換動作
			}
			counter1++;
		}
		if (exam==0)                    //沒有交換動作便跳出迴圈
		{
			pass = SIZE;
		}
		else                            //有交換動作則初始化exam繼續比較
		{
			exam = 0;
		}
	}
	puts("Data items in ascending order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}

	printf("\n\nb的次數:%d\n", counter1);
	puts("\n若是在以a題的前提下進行才為30次,否則以例題的程式修改為36次!\n");
	system("pause");
	return 0;
}