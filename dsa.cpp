#include<iostream>
using namespace std;
int main()
{
    int arr[5][5],maximum;
   
    for (int i = 0; i < 5; i++)
    {cout<<"Enter the marks of roll number"<<i+1<<"=";

        for (int j = 0; j < 5; j++)
        {
          cin >> arr[i][j];
        }
    }cout<<"Entered marks of the student are "<<endl;
    for (int i = 0; i < 5; i++)
    {int sum =0,max=0;
        for (int j = 0; j < 5; j++)
        {
          cout << arr[i][j]<<" ";
            sum=sum+arr[i][j];
            if (max<arr[i][j])
            {
               maximum=arr[i][j]; 
            }
            else{
                maximum=max;
            }
        }
        cout<<"Total marks of the "<<i+1<<" student are : "<<sum;
        cout<<"\t";
        cout<<"\n";
           
    }
  cout<<"Maximum marks are "<<maximum;

    return 0;
}