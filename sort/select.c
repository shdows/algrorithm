#include "stdio.h"

#define LENGTH 10

void swap(int *array, int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

/*
select sort,每次遍历将最大放在右侧；O(n)
*/
int sort(int *array, int length){
    if (array == NULL || length < 2)
        return 0;

    for (int end = length - 1; end > 0; end --)  
    {
        int index = 0;
        for (int i = 0; i < end; i++)
        {
            if (array[i + 1] > array[index]){
                index = i + 1;
            }
            swap(array, end, index);
        }
        
    }
       
    return 0;
}

int main(int argc, char const *argv[])
{
    int a[LENGTH] = {1,2,2,6,4,5,7,8,9,10};
    sort(a, LENGTH);
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;

}
