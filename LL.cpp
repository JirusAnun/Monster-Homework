#include <iostream>
#include"NODE.h"
#include"Monster.h"
#include"LL.h"
using namespace std;
LL::LL(){ //done
       hol=NULL;
       size=0;
}

LL::~LL(){
   //clear all nodes
   NODE* t=hol;
   for(int i=0;i<size;i++){
      t = hol;
      hol = hol->move_next();
      delete t;  
   }
   size = 0;       
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
        t->show_node();
        t = t->move_next();
     }
}
void LL::add_node(NODE *&new_node){//done

          hol->insert(new_node);// new_next->next=hol;
          hol=new_node;        

       size++;

 }
int LL::atk_ALL(monster& boss){
  NODE* t=hol;
     int i,all_potion=0;
     for(i=0;i<size;i++){
        all_potion+=t->get_potion();
        t = t->move_next();
     }
  if(boss.get_hp()>0 && hol!=NULL){
    int dmg = rand() % all_potion;
    cout << "Atack damage : "<<dmg << endl;
    boss.strike(dmg);
    if(rand()%5 == 0){
      NODE* t=hol;
       for(int i=0;i<2;i++){
          t = hol;
          hol = hol->move_next();
          delete t;  
       }
       size-=2;
    if(size==0){
      cout << "All dead" << endl;
    }
    }
  }
}
