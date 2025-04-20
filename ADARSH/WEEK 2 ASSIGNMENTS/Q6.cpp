/*6. Write a C++ program that takes two 2D arrays (matrices) of size
3×3 as input from the user. First, the program should calculate and
print the sum of the two original matrices. After that, it should compute
the transpose of both the original matrices. Finally, the program
should calculate and display the sum of the two transposed matrices
as well.*/
#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],sum[3][3],ta[3][3],tb[3][3],tsum[3][3];
    cout<<"Enter elements of 1st matrix(3x3):\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    cout<<"Enter elements of 2nd matrix(3x3):\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>b[i][j];
    cout<<"Sum of original matrices:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
		{
            ta[j][i]=a[i][j];
            tb[j][i]=b[i][j];
        }
    cout<<"Sum of transposed matrices:\n";
    for(int i=0;i<3;i++)
	{
        for(int j=0;j<3;j++)
		{
            tsum[i][j]=ta[i][j]+tb[i][j];
            cout<<tsum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

