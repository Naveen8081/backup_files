#include<stdio.h>
int main()
{
        int n;
        int count;
        int flag;
	int lar=0;
	int larv;
	int i;
        printf("Enter number of elements:\n");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(int j=0;j<n;j++)
        {
                count=0;
                for(int l=0;l<j;l++)
                {
                        flag=0;
                        if(arr[l]==arr[j])
                        {       flag=1;
                                break;
                        }
                }
                if(flag==1)
                        continue;
                for(int k=0;k<n;k++)
                {
                        if(arr[j]==arr[k])
                                count++;
                }
		if(count>lar)
		{
			lar=count;
			larv=arr[j];
		}	
	}
	printf("The number %d repeated %d times,which is the largest freq.\n",larv,lar);
}
