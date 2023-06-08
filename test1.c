#include "types.h"
#include "param.h"
#include "user.h"

#define MAX 2000


int arr[MAX];

void fill(int *arr, int n) {
    int j = n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = j;
        j--; 
    }
}

void bubble_sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void wastetime() {
    
    
    fill(arr, MAX);
    bubble_sort(arr, MAX);

}


int main(int argc, char *argv[]){ 
    
    int pid;
    
    if((pid=fork(25)) == 0){
        wastetime();
        
        printf(1, "Tickets 25\n");
        
        exit();
    }
    
    if((pid=fork(50)) == 0){
        wastetime();
        
        printf(1, "Tickets 50\n");
        
        exit(); 
    }

    if((pid=fork(100)) == 0){
        wastetime();
        
        printf(1, "Tickets 100\n");
        
        exit();
    }

    if((pid=fork(200)) == 0){
        wastetime();
        
        printf(1, "Tickets 200\n");
        
        exit();
    }

    if((pid=fork(400)) == 0){
        wastetime();
        
        printf(1, "Tickets 400\n");
        
        exit();
    }
    

    wait();
    wait();
    wait();
    wait();
    wait();
    
    exit();
} 
