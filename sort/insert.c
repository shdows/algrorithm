#include "stdio.h"


#define LENGTH 10


void swap(int *array, int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

/*
插入排序，是从左到右依次保证左右的有序。即右1开始，与左侧对比进行插入，保证左侧有序。
*/
int sort(int *array, int length){
    if (array == NULL || length < 2)
    {
        return 0;
    }
     
    for (int sorted = 1; sorted < length; sorted++)
    {
        for (int insert = sorted; insert > 0; insert--)
        {
            if (array[insert] < array[insert - 1])
            {
                swap(array, insert, insert - 1);
            }
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int array[LENGTH] = {10,9,8,7,6,5,4,3,2,1};
    sort(array, LENGTH);
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    return 0;
}
