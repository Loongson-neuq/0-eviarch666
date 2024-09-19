#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    int arr[] = {a, b, c};
    for(int i = 0; i<2; i++){
        if(arr[i] < arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    if(arr[0]<arr[1]){
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    result.max = arr[0];
    result.mid = arr[1];
    result.min = arr[2];
}
