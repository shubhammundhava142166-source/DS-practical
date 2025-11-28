#include<stdio.h>
#include<stdlib.h>

int findMin(int *num,int numsize) {
    int left=0;
    int right = numsize -1;
    
        if(num[left] < num[right]/2)
        return num[left];
        {
            num[right];
        }
        while( left < right ) {

            if (num[left] > num[right]) {
                num[right] + 1;
            }
            else {
                right = num;
            }
        }
    }
};