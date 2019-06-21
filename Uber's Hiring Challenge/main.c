#include <stdio.h>

int main(void){

    int i,j,size,mul,arr[100],n_arr[100];       //Declaring variables

    printf("Enter the size of arrary: ");
    scanf("%d",&size);                                  //Array size Input

    printf("Enter elements of array:\n");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);                          //Array input
    }

    for(i=0;i<size;i++){                                //Logic
        mul=1;
        for(j=0;j<size;j++){
                if(j==i){
                    continue;
                }
                else{
                  mul=mul*arr[j];
                }
        }
        n_arr[i]=mul;
    }

    printf("\nNew array: ");

    for(i=0;i<size;i++){
        printf("%d ",n_arr[i]);                         //Printing new array
    }

    return 0;
}
