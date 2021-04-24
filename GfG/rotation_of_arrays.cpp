#include <iostream>
#include <vector>
using namespace std;


void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void rotate_by_second_array_left(int A[],int k ,int n)
{
  if(k==1)
  {
    int temp=A[0];
    for(int i=0;i<n;i++)
    {
      A[i]=A[i+1];
    }
    A[n-1]=temp;
  }
  else
  {
    int B[k]={0};
    int j=0;
    for(int i=0;i<k;i++)
    {
      B[j]=A[i];
      j++;
      cout<<B[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        A[i]=A[i+k];
    }

    j=0;
    int i=n-k;
    while(i<n)
    {
        A[i]=B[j];
        i++;
        j++;
    }
  }
}


void Rotate_by_right_by_array(int A[],int k,int n)
{

   int i=0;
   int j=n-k;
   int B[k]={0};

   while(j<n)
   {
     B[i++]=A[j++];
   }
   
   i=0;
   j=n-k;
   while(j<=n)
   {
     A[j++]=A[i++];
   }

   i=0;
   j=0;
   while(i<k)
   {
     A[i++]=B[j++];
   }
}

void by_trick_for_left_revrse_ka_revrse_is_correct(int A[],int k,int n) //For Right Rotation
{
  int i=0;
  int j=n-k-1;

  while(i<j)
  {  
    swap(A[i],A[j]);
    i++;
    j--;
  }

  j=n-k;
  int l=n-1;
  while(j<l)
  {
     swap(A[j],A[l]);
     j++;
     l--;
  }
  
  i=0;
  j=n-1;
  while(i<j)
  {
    swap(A[i],A[j]);
    i++;
    j--;
  }
}



int main()
{
   int A[]={1,2,3,4,5,6};
   int k;
   cout<<"Enter the times of the Rotation :";
   cin>>k;
   int n=sizeof(A)/sizeof(A[0]);
   Display(A,n);
   cout<<"By the Extra Array Rotation : ";
   Rotate_by_right_by_array(A,k,n);
   Display(A,n);

   int B[]={1,2,3,4,5,6};
   int n1=sizeof(B)/sizeof(B[0]);
   Display(B,n1);
   cout<<"By trick of Right";
   by_trick_for_left_revrse_ka_revrse_is_correct(B,k,n1);
   Display(B,n1);
}