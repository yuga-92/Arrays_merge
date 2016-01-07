//
//  main.c
//  Arrays_merge
//
//  Created by Yuga Hal on 12/13/15.
//  Copyright © 2015 Yuga Hal. All rights reserved.
//
#include <stdio.h>
//This program split two arrays into one
int main(int argc, const char * argv[]) {
    int arr1[] = {6,3,56,1,33};
    int arr2[] = {6,7,8,9,2,66,443,222};
    int arr3[sizeof(arr1)/sizeof(arr1[0]) +sizeof(arr2)/sizeof(arr2[0])];
    int j= 0;
    int i =0;
    while (i < sizeof(arr3)/sizeof(arr3[0])){
        if (i < sizeof(arr1)/sizeof(arr1[0])) {
            arr3[i] = arr1[i];
            
        }
        else{
            arr3[i] = arr2[j];
            j++;
        }
        i++;
        
    }
    for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}
