#include <stdio.h>

union student{
    int roll;
    int marks;
}stu;

int main()
{
    // scanf("%d", &stu.roll);
    // printf("%d\t %d\n", stu.roll, stu.marks);
    // scanf("%d", &stu.marks);
    // printf("%d\t %d\n", stu.roll, stu.marks);

    // int a;
    // float b;
    // char c;
    // int *p = &a;
    // printf("%p, %p, %p\n", p, &a, &c);


    int arr[] = {1,2,3,4,5};
    int *p = arr;
    int sum = 0;
    int i = 0;
    for(p = &arr[0]; p <= &arr[4]; p++){
        sum += *p;
        
    } 
    printf("%d\n", sum);
}