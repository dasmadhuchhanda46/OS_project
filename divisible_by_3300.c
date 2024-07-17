#include<stdio.h>

#define SIZE 1000
int main()
{   
    int sum1=0,sum2=0;
    int N;
    int arr[SIZE];
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<N; i+=2){
        sum1=sum1+arr[i];
    }   
    for(int i=1; i<N; i+=2){
        sum2=sum2+arr[i];
    } 
    if((sum2-sum1)%11==0 && (sum1+sum2)%3==0 && arr[N-1]==0 && arr[N-2]==0){
        printf("YES");
    } 
    else{
        printf("NO");
    }
}