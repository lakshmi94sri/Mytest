#include <stdio.h>
int binarysearch(int x,int v[],int n)
{
	int low = 0;
	int high = n-1;
	int mid  = (low+high)/2;
	while(low < high  && x != v[mid])
			{
			    if (x > v[mid])
			    
			      low = mid + 1;
			      
			     else
			     
			        high = mid - 1;
				
				}
	if (x == v[mid])
	
	   return mid;
	
	else 
	
	    return -1;
	    

	}
int main()
{
	int ar[]={2,4,6,7,9,29,45,46,49,50,51};
	printf("%d",binarysearch(7, ar, 8));
			return 0;
			}

