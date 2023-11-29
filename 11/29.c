#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[10000]="", pos[100] = "", buf[10000] = "", in[100] = "", c = 0, a = 0, b = 0;
	int n = 0,m=0;
	scanf("%s", pos);
	scanf("%s", str);
	char* p = &str,p1;
	char* sep = " ";
	strcpy(buf, str);
	for (p1=strtok(str,sep);p1!=NULL ;p1=strtok(NULL,sep))
	{
		strcpy(in, p1);
		if ((strcmp(in, pos) == 0) && n == 0)
		{
			a = m;
			n++;
		}
		else if (strcmp(in, pos) == 0)
			n++;
		m++;
	}
	printf("%d %d", n, a);
	return 0;
}
	//long long a = 0, b = 0, c = 2, n = 0, n1 = 1, n2 = 1,n3=1,d=0;
	//char arr[1000]="", arr1[1000]="", arr2[1000]="",res[1002]="";
	//arr1[0] = '1', arr2[0] = '2';
	//scanf("%lld", &n);
	//if (n == 1)
	//	arr[0] = '1';
	//else if (n == 2)
	//	arr[0] = '2';
	//for (a = 3; a <= n; a++)
	//{
	//	d = 0;
	//	n1 = strlen(arr1);
	//	n2 = strlen(arr2);
	//	if (n1 <= n2)
	//		b = n1;
	//	else
	//		b = n2;
	//	for (c = 0; c < b; c++)
	//	{
	//		arr[c] = (arr1[c] + arr2[c] - '0' - '0'+d) % 10 + '0';
	//		d = (arr1[c] + arr2[c] - '0' - '0'+d) / 10;
	//	}
	//	if (d + arr1[c] + arr2[c]> 0)
	//	{
	//		if (arr2[c] > 0)
	//			arr[c] = (d + arr2[c] - '0') % 10 + '0';
	//		else
	//			arr[c] = (d)+'0';
	//	}
	//	n3 = strlen(arr);
	//	for (c = 0; c < n2; c++)
	//	{
	//		arr1[c] = arr2[c];
	//	}
	//	for (c = 0; c < n3; c++)
	//	{
	//		arr2[c] = arr[c];
	//	}
	//}
	//for (c = 0; c < n3; c++)
	//{
	//	res[c] = arr[n3-c-1];
	//}
	//printf("%s", res);