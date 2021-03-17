#pragma once
#include<stdio.h>


//打印函数
void print(int* a, int n);
//直接插入排序
void  InsertSort(int* a, int n);

//希尔排序
void ShellSort(int* a, int n);


//直接选择排序
void SelectSort(int* a, int n,int begin,int end);

//堆排序
void HeapSort(int* a, int n);

//冒泡排序
void ButtleSort(int* a,int n);

//快速排序()
void  QuickMethod(int* a, int begin,int end);