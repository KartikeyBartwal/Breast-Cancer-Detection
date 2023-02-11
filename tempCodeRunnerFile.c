#include<stdio.h>

void reverseArray(int array[],int lengthofArray);

int main(){
//  { {  {19},{40} }  ,   {  {10} , {20}  }, {  {112} , {200}  } }

    int Array[2][3][0] = { {{19},{40}}  ,   {{10},{20}},   {{112},{200}} };
    int i3 = 0;
    int i2 = 0;

// For Printing 3rd dimensional values
    // int *ptr = &Array[0][0][0];
    // printf("%d, %d \n",*(ptr),*(ptr+1));
    // printf("%u, %u",ptr,ptr+1);
    while(i2 != 3){
        while(i3 != 2){
            int *ptr = &Array[0][i2][i3];            
            printf("%u, ",*ptr);
            i3++;

        }
        i2++;
        i3 = 0;
    }
    return 0;
}