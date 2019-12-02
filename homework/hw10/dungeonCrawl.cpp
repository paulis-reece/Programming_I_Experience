/****************************************************************************
 *
 * hw10: A basic dungeon crawler adventure game
 *
 * File Name: dungeonCrawl.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <cstdlib>  // for random number generator
#include <iostream> // for cout and cin
#include <vector>
using namespace std;

/*--------------------------------------------------------------------
 * Precodition: None
 * Postcondition:
 *   Prompts the user for a valid direction (n,s,e,w, or r for random)
 *   and loops with error message until one is given.
 */
char getValidDirection();
/*--------------------------------------------------------------------
 * Precondition: None
 * Postcondition:
 *   Randomly picks a direction to move, returning n,s,e, or w
 */
char randomDirection();

/*--------------------------------------------------------------------
 * Precondition: room is an int from 1-9, direction is n,s,e,w, or r
 * Postcondition:
 *   Move from a starting room in an indicated direction.  If we run
 *   into a wall, we will stay in the same room.  Return new room #.
 */
int move(int room, char direction);

/*--------------------------------------------------------------------
 * Precondition: player and dragon are integers between 1 and 9.
 * Postcondition:
 *   Print an ASCII map starting with room 1 in the top left corner
 *   with room numbers layed out as shown.
 *   Indicating empty rooms with a '.',         1 2 3
 *   player's room with a 'P', and the          4 5 6
 *   dragon's room with a 'D'.                  7 8 9
 */
void printMap(int player, int dragon);

// The main program
int main() {
  // starting room for player and dragon and random seed
  int player, dragon, seed, score = 0;

  // seed random number generator with input
  cout << "Enter random seed: ";
  cin >> seed;
  srand(seed);

  // pick different random starting points for the player and dragon
  do {
    player = rand() % 9 + 1;
    dragon = rand() % 9 + 1;
  } while (player == dragon);

  // print out welcome message
  cout << "You have become trapped in a 3 x 3 dungeon with a hungry dragon!"
       << endl;

  // game loop runs until the dragon catches us
  while (player != dragon) {
    printMap(player, dragon);
    player = move(player, getValidDirection());
    dragon = move(dragon, randomDirection());
    score++;
  }

  // the dragon wins
  cout << "The hungry dragon has devoured you." << endl;
  cout << "But on the bright side, you survived " << score << " rounds!"
       << endl;

  return 0;
}

// define functions

char getValidDirection() {
  char directions;
  cout << "Whence will you flee? (n)orth, (s)outh, (e)ast, (w)est, or "
          "(r)andom: ";
  cin >> directions;
  if (directions != 'n' && directions != 's' && directions != 'w' &&
      directions != 'e' && directions != 'r') {
    do {
      cout << "Invalid entry. Whence will you flee? (n)orth, (s)outh, (e)ast, "
              "(w)est, or "
              "(r)andom: ";
      cin >> directions;
    } while (directions != 'n' && directions != 's' && directions != 'w' &&
             directions != 'e' && directions != 'r');
  } else if (directions == 'r') {
    directions = rand() % 4 + 1;
    if (directions == 4) {
      directions = 'n';
      return directions;
    } else if (directions == 3) {
      directions = 's';
      return directions;
    } else if (directions == 2) {
      directions = 'e';
      return directions;
    } else if (directions == 1) {
      directions = 'w';
      return directions;
    } else {
      return directions;
    }
    return directions;
  }
  return directions;
}

int move(int room, char direction) {
  if (room == 1) {
    if (direction == 'e') {
      room = 2;
    } else if (direction == 's') {
      room = 4;
    } else {
      room = 1;
    }
  } else if (room == 2) {
    if (direction == 'w') {
      room = 1;
    } else if (direction == 's') {
      room = 5;
    } else if (direction == 'e') {
      room = 3;
    } else {
      room = 2;
    }
  } else if (room == 3) {
    if (direction == 'w') {
      room = 2;
    } else if (direction == 's') {
      room = 6;
    } else {
      room = 3;
    }
  } else if (room == 4) {
    if (direction == 'n') {
      room = 1;
    } else if (direction == 'e') {
      room = 5;
    } else if (direction == 's') {
      room = 7;
    } else {
      room = 4;
    }
  } else if (room == 5) {
    if (direction == 'n') {
      room = 2;
    } else if (direction == 's') {
      room = 8;
    } else if (direction == 'e') {
      room = 6;
    } else if (direction == 'w') {
      room = 4;
    }
  } else if (room == 6) {
    if (direction == 'n') {
      room = 3;
    } else if (direction == 'w') {
      room = 5;
    } else if (direction == 's') {
      room = 9;
    } else {
      room = 6;
    }
  } else if (room == 7) {
    if (direction == 'n') {
      room = 4;
    } else if (direction == 'e') {
      room = 8;
    } else {
      room = 7;
    }
  } else if (room == 8) {
    if (direction == 'w') {
      room = 7;
    } else if (direction == 'n') {
      room = 5;
    } else if (direction == 'e') {
      room = 9;
    } else {
      room = 8;
    }
  } else if (room == 9) {
    if (direction == 'n') {
      room = 6;
    } else if (direction == 'w') {
      room = 8;
    } else {
      room = 9;
    }
  }
  return room;
}

void printMap(int player, int dragon) {
  vector<int> grid = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < grid.size(); i++) {
    if (player == grid.at(i)) {
      cout << 'P';
    }
    if (dragon == grid.at(i)) {
      cout << 'D';
    }
    if (player != grid.at(i) && dragon != grid.at(i)) {
      cout << '.';
    }
    if (grid.at(i) % 3 == 0) {
      cout << endl;
    }
  }
}

char randomDirection() {
  int dir = rand() % 4 + 1;
  if (dir == 4)
    return 'n';
  else if (dir == 3)
    return 's';
  else if (dir == 2)
    return 'e';
  else
    return 'w';
}
