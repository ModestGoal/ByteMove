#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bie!!!!!!";
	char arr2[] = "####################";
	int left = 0;//元素左下标
	int right = strlen(arr1) - 1;//元素右下标
	//[]代表数组元素；没有[]代表数组中元素的下标
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(1000);
		system("cls");//执行系统命令函数
		left++;
		right--;
	}
	/*arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n", arr2);
	left++;
	right--;*/


	return 0;
}