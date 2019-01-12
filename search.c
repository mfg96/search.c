//mfarazsohail

#include<stdio.h>

void loadArray(int nums[], int size); //prototype
int binarySearch(int nums[], int size, int key); //prototype
int sequentialSearch(int nums[], int size, int key); //prototype
int getkey(); //prototype

int main() //main function
{
  int z,a;
  int size=500;
  int nums[500]={0};
  loadArray(nums,size);
  while(1)
  {
  	printf("1- Sequential Search \n 2- Binary Search \n 0- Quit \n Please enter a selection:");
	scanf("%d",&z);
	if(z==1)
	{
		
		a=getkey();
		if (a!=-1)
		{	
			printf("Number of comparison using sequential search is: %d \n",sequentialSearch(nums,size,a));
			break;
		}
		else 
			printf("Invalid Input\n");
	}
	else if(z==2)
	{
		
		a=getkey();
		if (a!=-1)
		{
		printf("Number of comparison using binary search is: %d \n",binarySearch(nums,size,a));
		break;
		}
		else 
			printf("Invalid Input\n");
	}
	else if(z==0)
	{
		printf("GoodBye!\n");
		break;
	}
	else
	{
		printf("Invalid Input\n");
		continue;
	}
  
  }

return 0;

}

int getkey()
{
	int y;
	printf("Please anter a positive number to search(< 250,000):");
	scanf("%d",&y);
	if(y>0 && y<250000)
	{
	return y;
	}

	else
	{
		return -1;
	}

}

void loadArray(int nums[], int size)
{
for(int x=0;x<size;x++)
{
	nums[x]=x*x;
}
}

int binarySearch(int nums[], int size, int key)
{
    int low=0,high=size-1,count=0, mid;
    do
    {
      count++;
      mid=(low+high)/2;
      if ( nums[mid]==key)
		   break;
      if (key >nums[mid])
        low = mid +1;
      else
        high = mid -1;
    } while ( low <= high);
  if ( key ==nums[mid])
    printf("%d is a perfect square\n",key);
  else
  {
    printf("%d is not a perfect square\n",key);
  }
  return count;

}

int sequentialSearch(int nums[], int size, int key)
{
  int c=0,count=0;
  for (int i=0;i<size;i++)
  {
    if (nums[i]==key)
    {
      c++;
        break;
    }
    count++;
  }
  if (c==1)
  {
    printf("%d is a perfect square\n", key);
  }
  else
  {
    printf("%d is not a perfect square\n", key);
  }
return count;
}