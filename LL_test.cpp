#include <iostream>
#include<cstdlib>
#include"NODE.h"
#include"Monster.h"
#include"LL.h"
using namespace std;
int main(int argc, char *argv[])
{  LL A; //Linked List =>constructor L.hol=NUL L.size=0
   int i; 
   NODE *t; 

   for(i=1;i<argc;i+=3) {
      t=new NODE(argv[i],atoi(argv[i+1]),atoi(argv[i+2])); //constructor
      A.add_node(t); //add front of linked List + size++
  }
              
    A.show_all();
    monster Boss("Big Boss",1000,200);

    A.atk_ALL(Boss); // random ลดค่า hp จาก potion สูงสุด
    A.atk_ALL(Boss); // เมื่อ Boss ตายจะจบโปรแกรมทันที
  
    return 0;
}
