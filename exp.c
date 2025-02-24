#include<stdio.h>
void main(){
    int low,high;
    printf("Enter the range: \n");
    scanf("%d %d",&low,&high);
    printf("The Ramanujan numbers in the given range are: \n");
    for(int n=low;n<=high;n++){
        int count=0;
        for(int i=1;i*i*i<n;i++){
            for(int j=i;j*j*j<n;j++){
               int sum=(i*i*i)+(j*j*j);
               if(sum>n)      break;
               if(sum==n)     count++;
            }
            if(count==2){
                printf("%d  ",n);
                break;
            }
        }
    }
    printf("\n");  
}
