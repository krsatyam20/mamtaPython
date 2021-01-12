/* array : it is a collection of similar data types element
int : only integer
1,2.2,3 :Wrong

1,2,34,45,54
Advantage
single variable can store multiple data
int a=1
b=2
 a={1,2,34,45,54}

Disadvantage
	Pre fixed size
a[5]: here a is variable and 5 is a size of array
Types of array
	=>Single dimensional Array
	=> Multidimensional Array


*/

#include<iostream.h>
#include<conio.h>

void main(){

clrscr();
int arr[5]={1,2,34,45,54}; //Creating array and initializtion array

//print array element
// single element print
cout<<arr[3];

//all element

for(int i=0;i<5;i++){


 cout<<arr[i]<<endl;

}






 getch();
 }










