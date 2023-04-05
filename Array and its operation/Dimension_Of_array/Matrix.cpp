#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printingOutputs(int arr[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int i,j,arr1[3][3],arr2[3][3];

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr1[i][j];
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr2[i][j];
		}
	}

	int finalArray[3][3];
	for(i=0;i<3;i++)
	{
		int loop = 0;
		while(loop<3)
		{
			if(loop==0)
			{
				int sum = 0;
				for(j=0;j<3;j++)
				{
					int first = arr1[i][j];
					int second = arr2[j][loop];

					int third = first*second;

					sum = sum + third;

				}
				finalArray[i][loop] = sum;
			}
			else if(loop==1)
			{
				int sum = 0;
				for(j=0;j<3;j++)
				{
					int first = arr1[i][j];
					int second = arr2[j][loop];

					int third = first*second;

					sum = sum + third;

				}
				finalArray[i][loop] = sum;
			}
			else if(loop ==2)
			{
				int sum = 0;
				for(j=0;j<3;j++)
				{
					int first = arr1[i][j];
					int second = arr2[j][loop];

					int third = first*second;

					sum = sum + third;

				}
				finalArray[i][loop] = sum;
			}
			loop++;
		}
	}
	printingOutputs(finalArray);

}