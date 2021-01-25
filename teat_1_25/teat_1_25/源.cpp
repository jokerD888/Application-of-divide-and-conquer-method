#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int n,i,max,min;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		int j,m,num;
//		scanf("%d",&m);
//		 for(j=0;j<m;j++)
//		 {
//		 	scanf("%d",&num);
//		 	if(j==0)
//		 	{
//		 		min=num;
//		 		max=num;
//			}
//			else
//			{
//				if(num<min) min=num;
//				if(num>max) max=num;
//			}
//		 }
//		 printf("%d %d\n",max,min);
//	}
//	return 0;
// }
//利用分治法求第k小的数 
#include<stdio.h>
int main(void)
{
	int n, m, k, min, i;
	int arr[80];
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i < n; i++)
	{
		int j, num, s = 1;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &num);
			if (j == 0)
			{
				arr[0] = num;
			}
			else
			{
				arr[s] = num;
				s++;
			}
		}
		for (j = 0; j < m; j++)
		{
			int t, temp;
			for (t = j + 1; t < m; t++)
			{
				if (arr[t] < arr[j])
				{
					temp = arr[j];
					arr[j] = arr[t];
					arr[t] = temp;
				}
			}
		}
		printf("%d\n", arr[k - 1]);
	}
	return 0;
}