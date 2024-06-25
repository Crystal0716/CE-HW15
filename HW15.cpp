#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std ;
void f(int i , double a1 , double a2 ) ;
int main()
{
	f( 0 , 0.00 , 0.00 ) ;
	return (0) ;

}
void f(int i , double a1 , double a2 )
{
	double sum ;
	if ( i == 0 )
	{
		a2 = 1 ;
		cout << i << " : " << a2 << endl ;
		f( i+1 , a1 , a2 ) ;
	}
	else if ( i == 1 )
	{
		a1 = 2 ;
		cout << i << " : " << a1 << endl ;
		f( i+1 , a1 , a2 ) ;
	}
	else if ( i == 20 )
		return ;
	else 
	{
		sum = ( 4.00 * a1 - 8.00 * a2 ) / 3 ;
		a2 = a1 ;
		a1 = sum ;
		cout << i << " : " << sum << endl ;
		f( i+1 , a1 , a2 ) ;
	}
}