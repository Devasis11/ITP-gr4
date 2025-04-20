//1. Write a C++ program to move all the negative elements to one side of the array
#include<iostream>
using namespace std;
void arrange(int b[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
	{
        if(b[i]<0)
		{
            if(i!=j)
			{
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
            j++;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) 
	cin>>a[i];
    arrange(a,n);
    cout<<"Array after shifting negatives to one side :\n";
    for(int i=0;i<n;i++) 
	cout<<a[i]<<" ";
    return 0;
}

