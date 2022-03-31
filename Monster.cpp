#include <iostream>
using namespace std;
#include"Monster.h"

monster::monster(string temp_name,int temp_hp=1,int temp_potion=0){
      name = temp_name;
      potion = temp_potion;
      hp = temp_hp;
      next=NULL;
      cout<<"adding "<< name <<endl;
}
monster:: ~monster(){
      cout<<"monster name : "<<name<<" is being deleted"<<endl;
}
monster* monster::move_next(){
      return next;
}
void  monster:: show_node(){
         cout<<"monster name:"<<name<<endl;
         cout<<"monster potion:"<<potion<<endl;
         cout<<"monster hp:"<<hp<<endl;
 }
void monster::insert(monster*& new_monster){ // new_next->next=hol;
     new_monster->next=this; //new_monster->next=hol;

}
void monster::strike(int dmg){
  hp-=dmg;
  cout<<endl<<"*************"<<endl;
  show_node();
  cout<<"*************"<<endl<<endl;
  if(hp<=0){
    cout <<"Victory!!!"<<endl;
  }
}
int monster::get_hp(){
  return hp;
}
