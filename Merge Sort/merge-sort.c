#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 void merge_(unsigned int A[], int p, int q, int r){


 unsigned int L[100];
 unsigned int R[100];

int y=0,z=0;

int n1=q-p+1;
int n2=r-q;

for(int i=0; i<=n1; i++){

L[i]=A[p+i];

if(i==(n1) ){

L[i]=INFINITY;

}

}

//printf("\n  L[0],L[1]=%d,%d \n",L[0],L[1]);



for(int j=0; j<=n2; j++){

R[j]=A[q+j+1];

if(j==(n2) ){
R[j]=INFINITY;
}

}

//printf("\n  R[0],R[1]=%d,%d \n",R[0],R[1]);

y=0;
z=0;
for(int k=p; k<=r;k++){

 if(L[y]<=R[z]){
 A[k]=L[y];
 y++;
 }else{
 A[k]=R[z];
 z++;

 }

}

//printf("\n  A[0],A[1],A[2],A[3],A[4],A[5]=%d,%d,%d,%d,%d,%d \n",A[0],A[1],A[2],A[3],A[4],A[5]);


}//end merge_


void merge_sort(unsigned int A[], int p, int r){



if(p<r){

int q=(p+r)/2;
merge_sort(A,p,q);
merge_sort(A,q+1,r);
merge_(A,p,q,r);

}




}




int main()
{
static unsigned int A[]={1,5,7,8,2,4,6,9};
//static unsigned int A[]={5,3,4,1};
//static unsigned int A[]={10,9,8,7,6,5,4,3,2,1,20,19,18,17,16,15,14,13,12,11};
int n=sizeof(A)/sizeof(int);
merge_sort(A,0,n-1);

for(int i=0; i<n;i++){
 printf("A[%d]=%d\n", i,A[i]);

}

    return 0;
}
