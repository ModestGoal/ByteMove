#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to bie!!!!!!";
	char arr2[] = "####################";
	int left = 0;//Ԫ�����±�
	int right = strlen(arr1) - 1;//Ԫ�����±�
	//[]��������Ԫ�أ�û��[]����������Ԫ�ص��±�
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����
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