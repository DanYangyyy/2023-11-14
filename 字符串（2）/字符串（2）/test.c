#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//strtok
//int main()
//{
//	char* p = "hello@world.123?456";
//	const char* sep = "@.?";
//	char* str = NULL;
//	char arr[100] = { 0 };
//	strcpy(arr, p);
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}



//memcpy
//void* memcpy(void* dest, const void* src, size_t count);
#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = (char*)dest;
//	while (count--)
//	{
//		*(char*)dest  =  *(char*)src;//强制类型转换
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//memmove
void* memmove(void* dest, const void* src, size_t count);

void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	char* ret = (char*)dest;
		if (dest < src)
		{
			while (count--)
			{
				*(char*)dest = *(char*)src;
				dest = (char*)dest + 1;
				src = (char*)src + 1;
			}
		}
		else
		{
			while (count--)
				*((char*)dest + count) = *((char*)src + count);
		}
		return ret;
	}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1+2, arr1, 20);
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}