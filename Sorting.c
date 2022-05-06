#include <stdio.h>

int main() {
    int i,j,n,temp,flag=0;
    
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    
    int ar[n];
    
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    
    for(i=0;i<n;i++){
       flag = 0;
       for(j=0;j<n-1-i;j++){
           if(ar[j]>ar[j+1]){
               temp = ar[j];
               ar[j] = ar[j+1];
               ar[j+1] = temp;
               flag = 1;
           }
       }
       if(flag==0){
           break;
       }
   }

    printf("Elements after Sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
    
    for(i=0;i<n;i++){
        flag = 0;
        if(n%2==0){
            for(j=n/2;j<n-1-i;j++){
                if(ar[j]<ar[j+1]){
                    temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                    flag = 1;
                }
            }
            if(flag==0){
                break;
            }    
        }

        else{
            for(j=(n/2+1);j<n-1-i;j++){
                if(ar[j]<ar[j+1]){
                    temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                    flag = 1;
                }
            }
            if(flag==0){
                break;
            }    
        }
        
    }
    
    printf("\nElements after Sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
    
    return 0;
}
