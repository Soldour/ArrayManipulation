
void removeI(int arr[], int numof_cell) {
    numof_cell -= 1;
    arr = (int*)realloc(arr, numof_cell * sizeof(int));
    for (int i = numof_cell - 1; i > numof_cell; i--) {
        arr[i] = arr[i];
        printf("%d\n", arr[i]);
    }


    for (int i = 0; i < numof_cell; i++) {

        printf("%d\n", arr[i]);
    }
    printf("///////////////////'''''one item is REMOVED from the array'''''''///////////////////\n");
}

void expand(int arr[], int numof_cell) {
    numof_cell++;
    arr = (int*)realloc(arr, numof_cell * sizeof(int));
    for (int i = numof_cell - 1; i < numof_cell; i++) {
        arr[i] = rand() % 20 + i;
        printf("%d\n", arr[i]);
    }

    printf("///////////////////'''''one item is added'''''''///////////////////\n");
    for (int i = 0; i < numof_cell; i++) {

        printf("%d\n", arr[i]);
    }
}

void get_size(int n) {
    printf("the current number of cell is  %d \n", n);

}
