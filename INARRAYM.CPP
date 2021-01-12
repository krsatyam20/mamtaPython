//insert element in array

#include<iostream.h>
#include<conio.h>

void main(){
 clrscr();
 int arr[5]; //array define

 //arr[0]=10;

 //cout<<arr[0];
//insert element using loop
for(int i=0;i<5;i++){
cout<<"please enter the valaue for ["<<i <<"]=";
cin>>arr[i];

}

//Print array element which is given by user

int j=0;
while(j<5){
cout<<arr[j]<<",";
j++;
}






getch();
}