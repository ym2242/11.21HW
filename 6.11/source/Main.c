#include<stdio.h>
#define SIZE 10

int main(void)
{
	//a�D
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
		for (i = 0; i < SIZE - pass; i++)              //�̤j�Ʀr�w�w�줣�����
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

	printf("\n\na������:%d\n\n", counter);
	//--------------------------------------------------------------------------------------b�D-----------------------------------------------------------------------------------------
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
				exam++;                 //�ˬd�O�_���洫�ʧ@
			}
			counter1++;
		}
		if (exam==0)                    //�S���洫�ʧ@�K���X�j��
		{
			pass = SIZE;
		}
		else                            //���洫�ʧ@�h��l��exam�~����
		{
			exam = 0;
		}
	}
	puts("Data items in ascending order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}

	printf("\n\nb������:%d\n", counter1);
	puts("\n�Y�O�b�Ha�D���e���U�i��~��30��,�_�h�H���D���{���קאּ36��!\n");
	system("pause");
	return 0;
}