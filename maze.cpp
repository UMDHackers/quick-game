#include <iostream>
#include <windows.h>
using namespace std;

char Map[30][30]= {"#############################",
                   "#                           #",					
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#                           #",
                   "#@                          #",
		   "#############################"
};

bool game_on = true;
int game_speed = 100;

int main() {
  int x = 0, y = 0, food_itr; 
 while(game_on) {
  system("clear");
  for(x = 0; x < 30; x++) {
    cout<< Map[x] << endl;
  }
  for(y = 0; y < 30; y++) {
    for(x = 0; x < 30; x++) {
      switch(Map[y][x]){
        case '@':
	{
	  if(GetAsyncKeyState(VK_UP) != 0) {
	    int y2 = (y-1);
	    switch(Map[y2][x])
	    {
	      case ' ':
	      {
		Map[y][x] = ' ';
		y -= 1;
		Map[y2][x] = '@';
	      }
		
	    }
	  }
	}

      }
    }
  }
  Sleep(game_speed);
 }
 return 0;
}
