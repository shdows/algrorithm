#include "stdio.h"


void merge(int *array, int start, int mid, int end){
    int temp[end - start + 1];
    　
}


/*
合并排序，时间复杂度n * log n，核心思想：递归保持局部最优，再进行合并。
*/
int sort(int *array, int start, int end){
    if (array == NULL || start == end) 
    {
        return 0;
    }
    int mid =start + (end - start) >> 1;
    sort(array, start, mid);
    sort(array, mid + 1, end);
    merge(array, start, mid, end);
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
