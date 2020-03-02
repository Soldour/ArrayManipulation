#include <stdio.h>
#include <stdlib.h>



void removeI(int arr[], int numof_cell);

void expand(int arr[], int numof_cell);
    

void get_size(int n);



int main(int argc, char* argv[])
{
    int* arr_pointer = NULL; 
    int initialSpace = 0;
   
     arr_pointer = (int*)malloc(initialSpace * sizeof(int));
   
    int numberOfCell = 10;
    arr_pointer = (int*)realloc(arr_pointer, numberOfCell * sizeof(int));

    for (int i = 0; i < numberOfCell; i++)
    {
        arr_pointer[i] = i;
        printf("%d\n", arr_pointer[i]); // the original array with inttial number of cell
    }
   
    for (int i = 0; i < 2; i++) {           // to itrete the number of value and blockes added 
        printf("///////////////////''''''''''''///////////////////\n");

        expand(arr_pointer, numberOfCell);              


        printf("///////////////////''''''''''''///////////////////\n");
        numberOfCell++;
    }
    for (int i = 0; i < numberOfCell; i++)
    {
        
        printf("the array %d\n", arr_pointer[i]); // compare  the original array with the curernt array
    }

    get_size(numberOfCell);

   
    for (int i = 0; i < 3; i++) {
        printf("///////////////////''''''''''''///////////////////\n");

        removeI(arr_pointer, numberOfCell);
        printf("///////////////////''''''''''''///////////////////\n");
        numberOfCell--;
    }

    get_size(numberOfCell);
  
    for (int i = 0; i < numberOfCell; i++)
    {

        printf("the array %d\n", arr_pointer[i]); //compare  the original array with the curernt array
    }

    free(arr_pointer);
    return 0;


}


