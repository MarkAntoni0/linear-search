#include <stdio.h>

int search(int arr[],int key){
    for (int i=0; i<5; i++) {
        if(key==arr[i]){
            return i;
        }
    }
    return -1;

}

int main(int argc, const char * argv[]) {

    int arr[] = {10,20,30,40,50};
    int number = 40;
    printf("the location is: %d\n", search(arr, number));
    
    
    return 0;
}
