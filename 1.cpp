/*
Homework 8: Print Me


Write a program that reads 2 integers A, B
	B is either -1 or 1
If -1, print 2*A+1
If 1, print A*A

*/

#include<iostream>
using namespace std;

int main() {



	int a ,b;
	cout <<"a: ";
	cin >> a >> b;

	int is_it_pos = (b+1)/2 ;
	int is_it_neg = 1- is_it_pos ;

 cout << is_it_pos * (a*a) + is_it_neg * ((2*a) -1);

}