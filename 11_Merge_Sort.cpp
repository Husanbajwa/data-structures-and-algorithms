#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{	
	int i=l,j=mid+1,k=l;
	int temp[r+1];
	while(i<=mid && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++,k++;	
		}	
		else
		{
			temp[k]=arr[j];
			j++,k++;
		}
	}
	while(i<=mid)
	{
		temp[k]=arr[i];
		i++,k++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];
		j++,k++;
	}
	for(int p=l;p<=r;p++)
	{
		arr[p]=temp[p];
	}

}


void merge_sort(int arr[],int l,int r)
{	
	if(l<r)
	{	
		int mid;
		mid =(l+r)/2;
	
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

int main()
{

	int n, l=0;
    int arr[n];
    cout<<" Enter length/Size of List "<<endl;
    cin>>n;
    cout<<" Enter "<<n<<" Elements For List "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    
    cout<<" Unsorted array"<<endl;
    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
		}
	cout<<"\n\n\n";	
	
	//call the algorithm
	merge_sort(arr,l,n-1);
		
		
    cout<<" Sorted array"<<endl;
    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
			}
			return 0;
}
