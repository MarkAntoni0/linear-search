//
//  main.c
//  bubble sorting
//
//  Created by Mark Antonio on 3/13/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.
//

#include <stdio.h>



int main(int argc, const char * argv[]) {
    int arr[6]={0,1,2,3,4,5};
    int target;
    printf("insert the element you are looking for: ");
    scanf("%d",&target);
    //searching the array
    int found=0;
    for (int i=0; i<6; i++) {
        if(arr[i]==target){
            printf("Found in location [%d]\n",i);
            found = 1;
            break;
        }
    }
    if(found==0){
        printf("Not found\n");
    }
    
    return 0;
}
