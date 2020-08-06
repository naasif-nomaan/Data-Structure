#include <stdio.h>
#include <stdlib.h>

int main()
{

int step=0, item=0,n=0, temp=0, j=0;

int arr[]={23,1,4,6,7,8,3};

n=sizeof(arr)/sizeof(int);

for(int i=0; i<n;i++){


  step=i;
   j=i;
 while(step>-1){

 if( arr[j]>arr[j+1]){

   temp=arr[j];
   arr[j]=arr[j+1];
   arr[j+1]=temp;


   }
step--;
j--;
}








}

for(int i=0; i<sizeof(arr)/sizeof(int);i++){

printf("arr[%d]=%d \n",i,arr[i]);
}

    return 0;
}
