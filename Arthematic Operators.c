Write a C program to find the Arithematic operations using functions.

#include<stdio.h>
int x,n;
int add(x,n)
int add(int x,int n)
{
	return x+n;
}
int sub(x,n)
int sub(int x,int n)
{
	return x-n;
}
int mul(x,n)
int mul(int x,int n)
{
	return x*n;
}
int div(x,n)
int div(int x,int n)
{
	return x/n;
}
int power(x,n)
int power(int x,int n)
{
	if(n==0)
	return 1;
