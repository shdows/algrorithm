#include "stdio.h"

#define LENGTH 10

void swap(int *array, int i, int j){
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
}

/*
冒泡排序，每次遍历，将列表中最大的放到最右侧，但是与选择排序不同，每次遍历都会交换相互比较的两个元素, 就像最大的数往上冒一样。
*/
int sort(int *array, int length){
   if (array == NULL || length < 2)
   {
        return 0;
   }

    for (int end = length - 1; end > 0; end--)
    {
        for (int i = 0; i < end; i++)
        {
            if (array[i + 1] < array[i])
            {
                swap(array, i + 1, i);
            }
            
        }
    }
    return 0;
}




int main(int argc, char const *argv[])
{
    int array[LENGTH] = {1, 2, 4 ,5, 6, 7, 8, 10, 9, 3};
    sort(array, LENGTH);
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    return 0; 
}