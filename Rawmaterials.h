#ifndef RAWMATERIALS_H_INCLUDED
#define RAWMATERIALS_H_INCLUDED

int ITEMSTORE;
int ITEMCOUNT;
bool DIGStick = 0;
unsigned int i;
float water_mL;

char WaitSelect;
int DIRT_COUNT;
int STICK_COUNT;
int STONE_COUNT;
int CLAY_COUNT;
int VINE_COUNT;
int LOG_COUNT;
int MUSHROOM_COUNT;
int BEETLE_COUNT;
int RABBIT_COUNT;

class BOOLS {
    public:
        void hasDIGSTICK();
};
class Equipment{
    public:
       void makeDigStick();
       void madeDigStick();
};
class Resources{
    public:
        void getDirt();
        void getSticks();
        void getStones();
        void getClay();
        void getWater();
        void getVines();
        void getLogs();
        void getMushrooms();
        void getBeetles();
        void getRabbits();
};

class List : protected BOOLS,protected Resources{
    public:
        vector<int> listNums;
        void DList();
            
 // IF SELECTION CURSOR MOVED DOWN
          void detect_Select();
          void detect_NaturesResources();
          void move_Cursor_DOWN();
// IF SELECTION CURSOR MOVED UP
           void move_Cursor_UP();
};
class Inventory : protected List{
    public:
        // INVENTORY
        int a;
        void Dirt_Listing();
        void Sticks_Listing();
        void Stones_Listing();
        void Clay_Listing();
        void Water_Listing();
        void Vines_Listing();
        void Logs_Listing();
        void Mushrooms_Listing();
        void Beetles_Listing();
        void Rabbits_Listing();
      // End of Listings
        void storeITEM();
            } // End of If (ITEMSTORE++)
        void viewITEMS();
#endif //RAWMATERIALS_H_INCLUDED
