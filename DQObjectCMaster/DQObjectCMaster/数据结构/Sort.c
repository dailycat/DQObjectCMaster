//
//  Sort.c
//  DQObjectCMaster
//
//  Created by wondertek on 2019/2/13.
//  Copyright © 2019年 deqing. All rights reserved.
//

#include <stdio.h>


void swap(int num[],int a, int b) {
    int temp = num[a];
    num[a] = num[b];
    num[b] = temp;
}

void selectSort(int num[]) {
    int i = 0,j = 0;
    int k = -1;
    
    for (; i < sizeof(num)/ sizeof(*num); i++) {
        k = i;
        
        for (j = i;j <sizeof(num)/ sizeof(*num); j++) {
            if (num[j] < num[k]) {
                k = j;
            }
        }
        swap(num, k, i);
    }
}

void insertSort(int num[], int len) {
    int i = 0,j = 0,temp = 0;
    int k = -1;
    
    for (i = 1; i < len; i++) {
        k = i;
        temp = num[k];
        
        for (j = i - 1; (j > 0) && (num[j] > temp); j++) {
            num[j+1] = num[j];
            k = j;
        }
        num[k] = temp;
    }
}
