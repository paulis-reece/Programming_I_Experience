/*

Name: Reece Reklai

Date: 12/6/19

Project 3

 */
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;

// Functions and Global Variable

const int row = 10;    // Global Variable
const int column = 30; // Global Variable

// Functions

void printSeats(char array[row][column]) {
  for (int r = 1; r <= row; r++) {
    for (int c = 1; c <= column; c++) {
      cout << '#';
    }
    cout << endl;
  }
  cout << endl;
  cout << "Back Row Seats" << endl;
}
void printInitializedSeats(char array[row][column], vector<int> money,
                           int &Revenue, bool &successOrFail) {
  cout << "Front Row Seats" << endl;
  cout << endl;

  for (int r = 1; r <= row; r++) {

    for (int c = 1; c <= column; c++) {
      if (array[r][c] == '*') {
        cout << '*';
        Revenue += money[r];
        successOrFail = true;
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }
  if (successOrFail != true) {
    successOrFail = false;
  } else {
    successOrFail = true;
  }
  cout << endl;
  cout << "Back Row Seats" << endl;
}

void reservation(int Rows, int Cols, char array[row][column]) {
  if (array[Rows][Cols] != '*') {
    array[Rows][Cols] = '*';
  }
}

void mulipleReservation(vector<int> ROWS, vector<int> COLUMNS,
                        char array[row][column], int &Revenue) {
  for (int r = 0; r < ROWS.size(); r++) {
    for (int c = 0; c < COLUMNS.size(); c++) {
      if (array[ROWS.at(r)][COLUMNS.at(c)] != '*') {
        array[ROWS.at(r)][COLUMNS.at(c)] = '*';
      }
    }
  }
}

int main() {
  int price;
  int rowCount = 1;
  int counter = 1;
  int rowNum;
  int colNum;
  int Revenue = 0;
  int finalRevenue = 0;
  int numSeats = 0;
  char printSeat[row][column];
  char initializeSeat[row][column];
  char decisionReserve;
  char choiceSeat;
  bool successOrFail;
  vector<int> mulipleRows(0);
  vector<int> mulipleCols(0);
  vector<int> priceRows(0);
  cout << "Welcome to the reservation seat program" << endl;
  cout << "---------------------------------------" << endl;
    cout << "(A) Display a seating chart" << endl;
    cout << "(B) Sell one or more tickets" << endl;
    cout << "(C) Display statistics such as the number of tickets sold, the number of seats still available, the total revenue from ticket sales" << endl;
    cout << "(D) Reset the program and re-enter the theater seating and pricing information" << endl;

  cout << "Front Row Seats" << endl;
  cout << endl;
  printSeats(printSeat);
  cout << endl;
  cout << "All seats are currently free in the theater shown above, there are "
          "ten rows and thirty columns on each row."
       << endl;
  cout << "The prices for each row of seats is up to your discretion." << endl;
  do {
    cout << "Starting from the front row, what is the price for row "
         << rowCount << ": $";
    cin >> price;
    if (price < 0) {
      while (price < 0) {
        cout << endl;
        cout << "Please enter a valid integer" << endl;
        cout << "what is the price for row " << rowCount << ": ";
        cin >> price;
        cout << endl;
      }
      priceRows.push_back(price);
    } else {
      priceRows.push_back(price);
    }
    rowCount++;
  } while (priceRows.size() < 10);
  cout << endl;
  cout << "Here are the prices for each row." << endl;
  for (int r = 0; r < priceRows.size(); r++) {
    cout << "Row " << counter << ": $" << priceRows.at(r) << endl;
    counter++;
  }
  cout << endl;
  cout << "Are there any seats you want to reserve? (Y)es or (N)o " << endl;
  cout << "Response: ";
  cin >> decisionReserve;
  if (decisionReserve == 'Y' || 'y') {
    cout << "Do you want to reserve one seat or muliple seats?" << endl;
    cout << "(A) = One seat" << endl;
    cout << "(B) = Muliple seats" << endl;
    cout << "(C) = Exit reservation" << endl;
    cout << "Answer: ";
    cin >> choiceSeat;
    switch(choiceSeat){
    case 'A':
      cout << "What seat do you want to reserve? " << endl;
      cout << "Row: ";
      cin >> rowNum;
      if (cin.fail() || rowNum > 10 || rowNum <= 0) {
        while (cin.fail() || rowNum > 10 || rowNum <= 0) {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Please enter only integers between 1 - 10 rows" << endl;
          cout << "Row: ";
          cin >> rowNum;
        }
      }
      cout << "Column: ";
      cin >> colNum;
      if (cin.fail() || colNum > 30 || colNum <= 0) {
        while (cin.fail() || colNum > 10 || colNum <= 0) {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Please enter only integers between 1 - 30 columns" << endl;
          cout << "Column: ";
          cin >> colNum;
        }
      }
      cout << endl;
      reservation(rowNum, colNum, initializeSeat);
      printInitializedSeats(initializeSeat, priceRows, Revenue, successOrFail);
      if (successOrFail == true) {
        cout << endl;
        cout << "You have successfully secure a seat";
      } else {
        cout << endl;
        cout << "Sorry, the seat has been taken.";
      }
      break;
     case 'B':
      cout << "How many seats in a row do you want to reserve? " << endl;
      cout << "Number of Seats ( Min 1 and Max 30 ) : ";
      cin >> numSeats;
            if (cin.fail() ||  numSeats > 30 || numSeats <= 0) {
          while (cin.fail() || numSeats > 30 || numSeats <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter the number of seats in a row" << endl;
            cout << "Number of Seats ( Min 1 and Max 30 ) : ";
            cin >> numSeats;
          }
        }
        cout << "What is the row?" << endl;
        cout << "Row: ";
        cin >> rowNum;
        if (cin.fail() || rowNum > 10 || rowNum <= 0) {
          while (cin.fail() || rowNum > 10 || rowNum <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter only integers between 1 - 10 rows" << endl;
            cout << "Row: ";
            cin >> rowNum;
          }
        }
      do {
        cout << "Column: ";
        cin >> colNum;
        if (cin.fail() || colNum <= 30 || colNum <= 0) {
          while (cin.fail() || colNum <= 10 || colNum <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter only integers between 1 - 30 columns" << endl;
            cout << "Column: ";
            cin >> colNum;
          }
        }
        mulipleCols.push_back(colNum);
      } while (mulipleCols.size() < numSeats);
      cout << endl;
      mulipleReservation(mulipleRows, mulipleCols, initializeSeat, Revenue);
      printInitializedSeats(initializeSeat, priceRows, Revenue, successOrFail);
      if (successOrFail == true) {
        cout << endl;
        cout << "You have successfully secure a seat";
      } else {
        cout << endl;
        cout << "Sorry, the seat has been taken.";
      }
      break;
    case 'C':

    default:
    while(choiceSeat != 'A' && choiceSeat != 'B' && choiceSeat != 'C' ){
    cout << "Please Enter A or B" << endl;
    cout << "Do you want to reserve one seat or muliple seats?" << endl;
    cout << "(A) = One seat" << endl;
    cout << "(B) = Muliple seats" << endl;
    cout << "(C) = Exit reservation" << endl;
    cin >> choiceSeat;
    }

break;
  }
  } else if (decisionReserve == 'N' || 'n') {

  } else if (decisionReserve != 'Y' && decisionReserve != 'y' &&
             decisionReserve != 'N' && decisionReserve != 'n') {
  }

  return 0;
}