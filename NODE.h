#include <string>
using std::string;

class NODE{
      int hp,potion;
      string name;
      NODE* next;
public:
        NODE(string,int,int);
        void show_node();
        void insert(NODE*&);
        NODE* move_next();
        ~NODE();
        int get_potion();
      };


