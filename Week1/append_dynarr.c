//Appending to a dynamic array
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
int *data;
size_t size;
size_t capacity;
} Array;

void init(Array *arr,size_t capacity)
{ 
arr->data = (int *)malloc(capacity*sizeof(int));
if(!arr->data) printf("Memory allocation failed!");
arr->size = 0;
arr->capacity = capacity;
}

void input(Array *arr, int ele)
{ 
if(arr->size < arr->capacity)
{
arr->data[arr->size] = ele;
arr->size++;
}
else
{ 
arr->capacity = (arr->capacity == 0) ? 2 : arr->capacity*2;
int* temp = (int *)realloc(arr->data, arr->capacity*sizeof(int));
if(!temp) 
{
printf("Memory allocation failed");
return;
}
arr->data = temp;
arr->data[arr->size] = ele;
arr->size++;
}
} 

void display(Array *arr)
{
    printf("Array elements: ");
    for (size_t i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\nSize: %zu, Capacity: %zu\n", arr->size, arr->capacity);
}

void freeArray(Array *arr)
{
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

int main()
{ 
size_t capacity; Array arr; char ch; int ele;
printf("Enter the initial size of the dyanmic array: "); scanf("%zu", &capacity);
init(&arr, capacity);
printf("Do you want to append an element (y/n): "); scanf(" %c", &ch);
while(ch == 'y')
{
printf("Enter element to append: "); scanf("%d", &ele);
input(&arr, ele);
printf("Do you wish to append another element? (y/n): "); scanf(" %c", &ch);
}
display(&arr);
freeArray(&arr);
return 0;
}

