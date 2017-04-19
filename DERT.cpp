#include <iostream>
#include <vector>
#include <stdlib.h> // sleep(1000) 1 second
#include <stdio.h>
#include <unistd.h>
using namespace std;

/* i am trying to make a game from this project , where you can do stock exchange and build a portfolio up*/
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
        void hasDIGSTICK(){
            //stick stone vine
            if (DIGStick) {
                std::cout << " Geology/Minerals Unlocked" << std::endl;
            }
        }
};
class Equipment{
    public:
       void makeDigStick();
       void madeDigStick();
};
class Resources{
    public:

        void getDirt(){
            DIRT_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT DIRT*\r\n";

        }
        void getSticks(){
            STICK_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT STICK*\r\n";
        }
        void getStones(){
            STONE_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT STONE*\r\n";
        }
        void getClay(){
            CLAY_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT CLAY*\r\n";
        }
        void getWater(){
            std::cout << " GOT WATER +25mL\r\n";
            std::cout << "TOTAL WATER: " << water_mL <<"L\r\n";
        }
        void getVines(){
            VINE_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT VINES*\r\n";
        }
        void getLogs(){
            LOG_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT LOG*\r\n";
        }
        void getMushrooms(){
            MUSHROOM_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT MUSHROOMS*\r\n";
        }
        void getBeetles(){
            BEETLE_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT BEETLES*\r\n";
        }
        void getRabbits(){
            RABBIT_COUNT++;
            ITEMCOUNT++;
            std::cout << "GOT RABBIT*\r\n";
        }
};


class List : protected BOOLS,protected Resources{

    public:
        vector<int> listNums;
        void DList() {
           //  LIST SIZE
            for (i = 0; i < 11; i++){
            listNums.push_back(i);

            }
            // DISPLAY LIST
            for (i = 0; i < 11; i++){
                if (listNums[i] == 0){
                    std::cout << "Dirt" << std::endl;
                }
                if (listNums[i] == 1){
                    std::cout << "Sticks" << std::endl;
                }
                if (listNums[i] == 2){
                    std::cout << "Stones" << std::endl;
                }
                if (listNums[i] == 3){
                    std::cout << "Clay" << std::endl;
                }
		            if (listNums[i] == 4){
                    std::cout << "Water" << std::endl;
                }
                if (listNums[i] == 5){
                    std::cout << "Vines" << std::endl;
                }
                if (listNums[i] == 6){
                    std::cout << "Logs" << std::endl;
                }
                if (listNums[i] == 7){
                    std::cout << "Mushrooms" << std::endl;
                }
		            if (listNums[i] == 8){
                    std::cout << "Beetles" << std::endl;
                }
                if (listNums[i] == 9){
                    std::cout << "Rabbit" << std::endl;
                }
                if (listNums[i] == 10){
                    if (DIGStick){
                    std::cout << "New Resources" << std::endl;
                     }
                }
            }
          }
 // IF SELECTION CURSOR MOVED DOWN

          void detect_Select(){
            if (WaitSelect == '*') {
                if (listNums[i] == 0){
                    std::cout << "Dirt - Earthy Dust on the ground.\r\n";
                  }
                if (listNums[i] == 1){
                    std::cout << "Sticks - Fallen of a tree usually on the ground.\r\n";
                  }
                if (listNums[i] == 2){
                    std::cout << "Stones - Small rocks on the ground.\r\n";
                  }
                if (listNums[i] == 3){
                    std::cout << "Clay - Sticky muddy dirt earth substance found under the ground.\r\n";
                  }
                if (listNums[i] == 4){
                    std::cout << "Water - Molecules of H20.\r\n";
                  }
                if (listNums[i] == 5){
                    std::cout << "Vines - Found on Trees and Bushes.\r\n";
                  }
                if (listNums[i] == 6){
                    std::cout << "Logs - Fallen trees.\r\n";
                  }
                if (listNums[i] == 7){
                    std::cout << "Mushrooms - Fungius.\r\n";
                  }
                if (listNums[i] == 8){
                    std::cout << "Beetles - Bugs.\r\n";
                  }
                if (listNums[i] == 9){
                    std::cout << "Rabbit - A small hairy fast mammel.\r\n";
                  }
                if (listNums[i] == 10){
                  std::cout << "New Resources -::::::.\r\n";
                 }
            }
          }
          void detect_NaturesResources(){
            if (WaitSelect == '/' && listNums[i] == 0){
              Resources Nature;
              Nature.getDirt();
            }
            else if (WaitSelect == '/' && listNums[i] == 1){
              Resources Nature;
              Nature.getSticks();
            }
            else if (WaitSelect == '/' && listNums[i] == 2){
              Resources Nature;
              Nature.getStones();
            }
            else if (WaitSelect == '/' && listNums[i] == 3){
              Resources Nature;
              Nature.getClay();
            }
            else if (WaitSelect == '/' && listNums[i] == 4){
              Resources Nature;
              Nature.getWater();
              usleep (2000000);
              water_mL += 0.025;
            }
            else if (WaitSelect == '/' && listNums[i] == 5){
              Resources Nature;
              Nature.getVines();
            }
            else if (WaitSelect == '/' && listNums[i] == 6){
              Resources Nature;
              Nature.getLogs();
            }
            else if (WaitSelect == '/' && listNums[i] == 7){
              Resources Nature;
              Nature.getMushrooms();
            }
            else if (WaitSelect == '/' && listNums[i] == 8){
              Resources Nature;
              Nature.getBeetles();
            }
            else if (WaitSelect == '/' && listNums[i] == 9){
              Resources Nature;
              Nature.getRabbits();
            }
          }
          void move_Cursor_DOWN(){
               if (WaitSelect == '+') {
                   listNums[i]++;
                   if (listNums[i] > 10){
                       listNums[i]--;
                       detect_Select();
                      }
                    }
                  }
          // IF SELECTION CURSOR MOVED UP
           void move_Cursor_UP(){
                if (WaitSelect == '-'){
                    listNums[i]--;
                    if (listNums[i] < 0){
                        listNums[i]++;
                        detect_Select();
                    }
                  }
                }
};
class Inventory : protected List{
    public:
        // INVENTORY
        int a;
        void Dirt_Listing(){
        if (listNums[0] && WaitSelect == 'p'){
            std::cout << "Dirt: x" << DIRT_COUNT;
            std::cout << "\r\n";
        }
      }
        void Sticks_Listing(){
        if (listNums[1] && WaitSelect == 'p'){
            std::cout << "Sticks: x" << STICK_COUNT;
            std::cout << "\r\n";
        }
      }
        void Stones_Listing(){
        if (listNums[2]&& WaitSelect == 'p'){
            std::cout << "Stones: x" << STONE_COUNT;
            std::cout << "\r\n";
        }
      }
        void Clay_Listing(){
        if (listNums[3] && WaitSelect == 'p'){
            std::cout << "Clay: x" << CLAY_COUNT;
            std::cout << "\r\n";
        }
      }
        void Water_Listing(){
          if (listNums[4] && WaitSelect == 'p'){
            std::cout << "Water: " << water_mL << "mL";
            std::cout << "\r\n";
        }
      }
        void Vines_Listing(){
        if (listNums[5] && WaitSelect == 'p'){
            std::cout << "Vines: x" << VINE_COUNT;
            std::cout << "\r\n";
        }
      }
        void Logs_Listing(){
        if (listNums[6] && WaitSelect == 'p'){
            std::cout << "Logs: x" << LOG_COUNT;
            std::cout << "\r\n";
        }
      }
        void Mushrooms_Listing(){
        if (listNums[7] && WaitSelect == 'p'){
            std::cout << "Mushrooms: x" << MUSHROOM_COUNT;
            std::cout << "\r\n";
        }
      }
        void Beetles_Listing(){
          if (listNums[8] && WaitSelect == 'p'){
            std::cout << "Beetles: x" << BEETLE_COUNT;
            std::cout << "\r\n";
        }
      }
        void Rabbits_Listing(){
        if (listNums[9] && WaitSelect == 'p'){
            std::cout << "Rabbit: x" << RABBIT_COUNT;
            std::cout << "\r\n";
        }
      }
      // End of Listings
        void storeITEM(){
            if (ITEMSTORE++){
                listNums.push_back(i);

                if (ITEMSTORE++){

                  }
                  if (DIRT_COUNT >= 1)    {Dirt_Listing();}
                  if (STICK_COUNT >= 1)   {Sticks_Listing();}
                  if (STONE_COUNT >= 1)   {Stones_Listing();}
                  if (CLAY_COUNT >= 1)    {Clay_Listing();}
                  if (water_mL >= 1)      {Water_Listing();}
                  if (VINE_COUNT >= 1)    {Vines_Listing();}
                  if (LOG_COUNT >= 1)     {Logs_Listing();}
                  if (MUSHROOM_COUNT >= 1){Mushrooms_Listing();}
                  if (BEETLE_COUNT >= 1)  {Beetles_Listing();}
                  if (RABBIT_COUNT >= 1)  {Rabbits_Listing();}
                }


            } // End of If (ITEMSTORE++)
        void viewITEMS(){
            std::cout << "NUMBER OF ITEMS: " << ITEMCOUNT;
            std::cout << "\r\n\r\n";
            std::cout << listNums[i];

        }

};
int main(){
    std::cout << " WELCOME TO THE GAME CALLED DESERORT \n press h: to View instructions how to play\n\n\n\n" << std::endl;
char help;
system("stty raw");
while(1){

     help=getchar();
     if(help=='h'|| help =='H'){
	       system("stty cooked");
	       std::cout << std::endl;
     	   std::cout << "Instructions \n#########################################\n";
     	   std::cout << " To play the game you must collect resorces and remake civilazation, Gather resources and make them into other resources." << std::endl;
         std::cout << "Press (i) - to goto inventory - (/) , (*), (-), (+) - to select resoruces - (`) - Terminate program." << std::endl;
	       std::cout << "#########################################" << std::endl;
	        break;
	       }
     }
    std::cout << " Collect Natures Resources. " <<std::endl;
    List WL;
    WL.DList();
    int WAIT = 0;
system("stty raw");
    while (WAIT == 0){
        WaitSelect=getchar(); // wait for user input

// IF PRESSED "~"
            if (WaitSelect == '`') {
              break;
            }
// IF PRESSED "*"
 WL.detect_Select(); //-NOTE Detect Listings
 WL.move_Cursor_UP();
 WL.move_Cursor_DOWN();
/* -NOTE : Put cursor into functions and then in if statements above higher.
*/// IF PRESSED "/"
        WL.detect_NaturesResources();

// IF ENTERED INVENTORY
        if (WaitSelect == 'i'){
          std::cout << "=================INVENTORY================\r\n";
          std::cout << "Press p to view Items\r\n";
        }
            Inventory IVENT;
            IVENT.storeITEM();
            if (WaitSelect == 'p'){
                  IVENT.viewITEMS();
                  IVENT.storeITEM();
                  std::cout << "\r\n";
            }

    } // WAIT
    system("stty cooked");
    std::cout << "EXITING PROGRAM." << endl;
    usleep (1000000);
    std::cout << "EXITING PROGRAM 1." << endl;
    usleep (1000000);
        std::cout << "EXITING PROGRAM 2.." << endl;
        usleep (1000000);
            std::cout << "EXITING PROGRAM 3..." << endl;
            usleep (1000000);
                std::cout << "EXITING PROGRAM !!!" << endl;
                return 0;
                exit(0);

} // main
