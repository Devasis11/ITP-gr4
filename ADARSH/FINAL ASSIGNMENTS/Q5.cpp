//5. Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],b[n],k=0;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++) 
	cin>>a[i];
    for(int i=0;i<n;i++)
	{
        int c=0;
        for(int j=0;j<k;j++)
		{
            if(a[i]==b[j])
			{
                c=1;
                break;
            }
        }
        if(c==0) 
		b[k++]=a[i];
    }
    cout<<"Array without duplicates:\n";
    for(int i=0;i<k;i++) 
	cout<<b[i]<<" ";
    return 0;
}

