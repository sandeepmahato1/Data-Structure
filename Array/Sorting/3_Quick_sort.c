#include<stdio.h>
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}


int partition(int a[],int i,int j){
    int pivot=a[i];
    int l=i;

    for(int R=i+1;R<=j;R++){
        if(a[R]<=pivot){
            l=l+1;
            swap(&a[l],&a[R]);
        }
    }
    swap(&a[i],&a[l]);
    return l;
}


void QuickSort(int a[],int i,int j){
    if(i<j){
        //get the partition index
        int m=partition(a,i,j);
        //recursively sort the subarrays
        QuickSort(a,i,m-1);
        QuickSort(a,m+1,j);

    }
}


int main(){
    int a[]={12,1,103,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);

    printf("Original array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    QuickSort(a,0,n-1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}





// #include <stdio.h>

// void printArray(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");
// }

// int partition(int A[], int low, int high)
// {
//     int pivot = A[low];
//     int i = low + 1;
//     int j = high;
//     int temp;

//     do
//     {
//         while (A[i] <= pivot)
//         {
//             i++;
//         }

//         while (A[j] > pivot)
//         {
//             j--;
//         }

//         if (i < j)
//         {
//             temp = A[i];
//             A[i] = A[j];
//             A[j] = temp;
//         }
//     } while (i < j);

//     // Swap A[low] and A[j]
//     temp = A[low];
//     A[low] = A[j];
//     A[j] = temp;
//     return j;
// }

// void quickSort(int A[], int low, int high)
// {
//     int partitionIndex; // Index of pivot after partition

//     if (low < high)
//     {
//         partitionIndex = partition(A, low, high); 
//         quickSort(A, low, partitionIndex - 1);  // sort left subarray 
//         quickSort(A, partitionIndex + 1, high); // sort right subarray
//     }
// }

// int main()
// {
//     //int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
//     int A[] = {9, 4, 4, 8, 7, 5, 6};
//     // 3, 5, 2, 13, 12, 3, 2, 13, 45
//     // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
//     // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
//     int n = 9;
//     n =7;
//     printArray(A, n);
//     quickSort(A, 0, n - 1);
//     printArray(A, n);
//     return 0;
//}



