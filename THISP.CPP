#include<iostream.h>
#include<conio.h>
class student{
  //Global Variable
  public:
  int id;
  float marks;
   //Constructor define here
   student(int id,float marks){
     this->id=id;
     this->marks=marks;

   }
  void display()
  {
   cout<<"Student Id=" << id<<endl;
   cout<<"student marks" <<marks<<endl;
  }

};
void main(){
clrscr();
  student obj=student(101,75.d5);
  obj.display();
getch();
}














