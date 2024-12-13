#include<stdio.h>
int is_winner(int(*)[]);
void display(int(*)[]);

int main()
{
	int arr[3][3]={0};
	int(*ptr)[3]=arr;

	int flag=0;
	int r,c;
	for(int i=0; i<=9; i++)
	{
		if(!flag)
		{
			display(arr);
			 do
                        {
                                printf("\nUSER1 enter index:\n");
                                scanf("%d %d",&r,&c);
                        }while(!((r>=0 && r<3) && (c>=0 && c<3)) && printf("Enter valid index!\n"));


			if(arr[r][c])
			{
				printf("\nIndex is already occupied!\n");
				i--;
				continue;
			}
			arr[r][c]=5;
			if(is_winner(ptr))
			{
				printf("===>USER 1 is winner\n");
				return 0;
			}
			flag=1;
			continue;
		}
		
		if(flag)
                {
			display(arr);
                        do
			{
				printf("\nUSER2 enter index:\n");
                        	scanf("%d %d",&r,&c);
			}while(!((r>=0 && r<3) && (c>=0 && c<3)) && printf("Enter valid index!\n"));

			if(arr[r][c])
                        {
                                printf("\nIndex is already occupied!\n");
                                i--;
                                continue;
                        }

                        arr[r][c]=7;
			if(is_winner(ptr))
			{
                                printf("===>USER 2 is winner\n");
				return 0;
			}
                        flag=0;
                }
	}
	printf("Match draw!\n");
}

int is_winner(int (*arr)[3])
{
	int count;
	for(int i=0; i<3; i++)
	{
		count=0;
		for(int j=0; j<2; j++)
		{
			if(arr[i][j]!=arr[i][j+1])
				break;
			count++;
			if(count==2)
				return arr[i][j];
		}
	}

	for(int i=0; i<3; i++)
	{
		count=0;
		for(int j=0; j<2; j++)
		{
			if(arr[j][i]!=arr[j+1][i])
				break;
			count++;
			if(count==2)
				return arr[j][i];
		}
	}

	count=0;
	for(int i=0; i<2; i++)
	{
		if(arr[i][i]!=arr[i+1][i+1])
			break;
		count++;
		if(count==2)
			return arr[i][i];
	}

	count=0;
	for(int i=0, j=2; i<2; i++,j--)
	{
		if(arr[i][j]!=arr[i+1][j-1])
			break;
		count++;
		if(count==2)
			return arr[i][j];
	}
	return 0;
}


void display(int (*ptr)[3])
{
	for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        printf("%d ",ptr[i][j]);
                }
                printf("\n");
        }
}

