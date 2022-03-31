#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(string t_name,int t_hp,int t_potion){
      name = t_name;
      hp = t_hp;
      potion = t_potion;
      next=NULL;
      cout<<"adding "<< name <<endl;
}
NODE:: ~NODE(){
      cout<<"monster name : "<<name<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Node data:"<<name<<endl;
 }
void NODE::insert(NODE*& new_node){ // new_next->next=hol;
     new_node->next=this; //new_node->next=hol;

}
int NODE::get_potion(){
  return potion;
}