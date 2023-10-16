#include<iostream>
using namespace std;
int display(int arr[20][20],int row,int col);
void addsub(int arr1[20][20],int arr2[20][20],int row,int col);
void multi(int arr1[20][20],int arr2[20][20],int row,int col,int col1);
int main()
{//Start of main function
	int mat1[20][20],mat2[20][20],row1,col1,row2,col2;
	cout<<"\n\t\t\tWELCOME TO MATRIX ALGEBRA ."<<endl<<endl;
	cout<<"Enter Row for 1st matrix :-  ";
	cin>>row1;
	cout<<"Enter Column for 1st matrix :- ";
	cin>>col1;
	cout<<"Enter Row for 2nd matrix :-  ";
	cin>>row2;
	cout<<"Enter Column for 2nd matrix :- ";
	cin>>col2;
	cout<<"Enter Elements in 1st Matrix ."<<endl<<endl;
	 mat1[20][20]=display(mat1,row1,col1);
	cout<<"Enter Elements in 2nd Matrix. "<<endl<<endl;
	 mat2[20][20]=display(mat2,row2,col2);
	if((row1==row2)&&(col1==col2))
	{
      addsub(mat1,mat2,row1,col1);
    }
    else
    {
    	cout<<"\nAddition and Subtraction is not possible of matrices. "<<endl;
	}
	if(col1==row2)
	{
		 multi(mat1,mat2,row1,col2,col1);
	}
	else
	{   
	    cout<<"\nMultiplication of matrices is not possible."<<endl;
		cout<<"\nPlease take column 1 = row 2 ."<<endl;
    }
}//End of main function


int display(int arr[20][20],int row,int col)//Function for displaying matrix
{ int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter Element A["<<i+1<<"]["<<j+1<<"] : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\n\nDisplaying Matrix. :- "<<endl<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	return arr[20][20];
}//End of Display function


void addsub(int arr1[20][20],int arr2[20][20],int row,int col)//addition function
{ 
    cout<<"\n\nAddition of two matrices :- "<<endl;
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			cout<<" "<<(arr1[i][j]+arr2[i][j]);
		}
		cout<<endl;
	}
	
	cout<<"\n\nSubtraction of two matrices :- "<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			cout<<" "<<(arr1[i][j]-arr2[i][j]);
		}
		cout<<endl;
	}
}//End of addition and subtraction function


void multi(int arr1[20][20],int arr2[20][20],int row,int col,int col1)//Multiplication function
{ 
    int i,j,k;
	int multi[20][20];
	cout<<"\n\nMultiplication of matrices :- "<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{ multi[i][j]=0;
	    	for(k=0;k<col1;k++)
	    	{
			multi[i][j]+=arr1[i][k]*arr2[k][j];
		    }
	    	cout<<" "<<multi[i][j];
		}
	    cout<<endl;
	}
}//End of Multiplication function
