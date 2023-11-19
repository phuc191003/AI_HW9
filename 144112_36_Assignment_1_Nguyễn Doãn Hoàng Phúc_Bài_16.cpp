/*
 Program: Assignment 1 - Exercise 16
 Purpose: Practice
 Author: Nguyễn Doãn Hoàng Phúc - 20213722
 Date: 2023.12.08
*/

#include<iostream>

using namespace std;

int n, fib[1001];

int main()
{
    printf("This is Assignment 1- Exercise 16\n");
    printf("Nhap n: ");
    scanf("%d", &n);
    fib[0] = fib[1] = 1;
    printf("%d %d ", fib[0], fib[1]);
    for(int i = 2; i <= n; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }   
    return 0;
}