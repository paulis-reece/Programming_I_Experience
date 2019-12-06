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

// Functions
char menu(char Choices) {
  cout << "Welcome to the reservation seat program" << endl;
  cout << "---------------------------------------" << endl;
  cout << "(A) Display a seating chart" << endl;
  cout << "(B) Sell one or more tickets" << endl;
  cout << "(C) Display statistics such as the number of tickets sold, the "
          "number of seats still available, the total revenue from ticket sales"
       << endl;
  cout << "(D) Reset the program and re-enter the theater seating and pricing "
          "information"
       << endl;
  return Choices;
}
void updateRowCol(int &row, int &column) {
  cout << "How big do you want your theater to be?" << endl;
  cout << "Row: ";
  cin >> row;
  if (cin.fail() || row <= 0) {
    while (cin.fail() || row <= 0) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please enter only positive integers" << endl;
      cout << "Row: ";
      cin >> row;
    }
  }
  cout << "Column: ";
  cin >> column;
  if (cin.fail() || column <= 0) {
    while (cin.fail() || column <= 0) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please enter only positive integers" << endl;
      cout << "Column: ";
      cin >> column;
    }
  }
  row = row;
  column = column;
}

int main() {
  int row;
  int column;
  int printRow = 0;
  int printCol = 1;
  int printR = 0;
  int printC = 1;
  double price;
  double Revenue = 0;
  double finalRevenue = 0;
  int rowCount = 1;
  int rowNum;
  int colNum;
  int colNum2;
  int colResult = 0;
  int counter = 1;
  int numSeats = 0;
  int choiceSeat;
  int sorry = 0;
  char decisionReserve;
  char menu;
  bool successOrFail;
  bool decide = false;
  vector<double> priceRows(0);
  do {
    cout << "Welcome to the reservation seat program" << endl;
    cout << "---------------------------------------" << endl;
    cout << "(A) Display a seating chart" << endl;
    cout << "(B) Sell one or more tickets" << endl;
    cout << "(C) Display statistics such as the number of tickets sold, the "
            "number of seats still available, the total revenue from ticket "
            "sales"
         << endl;
    cout
        << "(D) Reset the program and re-enter the theater seating and pricing "
           "information"
        << endl;
    updateRowCol(row, column);
    char initializeSeat[row][column];
    cout << endl;
    cout << "Front Row Seats" << endl;
    cout << endl;
    cout << "Column  ";
    for (int c = 1; c <= column; c++) {
      if (printC == 10) {
        printC = printC - printC;
      }
      cout << printC;
      printC++;
    }
    cout << endl;
    cout << endl;
    for (int r = 1; r <= row; r++) {
      printR++;
      if (printR >= 10) {
        cout << "Row " << printR << "  ";
      } else {
        cout << "Row " << printR << "   ";
      }
      for (int c = 1; c <= column; c++) {
        initializeSeat[row][column] = '#';
        cout << initializeSeat[row][column];
      }
      cout << endl;
    }
    cout << endl;
    cout << "Back Row Seats" << endl;
    cout << endl;
    cout
        << "All seats are currently free in the theater shown above, there are "
        << row;
    cout << " rows and ";
    cout << column << " columns" << endl;
    cout << "The prices for each row of seats is up to your discretion" << endl;
    cout << "Starting from the front row, what is the price for each row "
         << endl;
    do {
      cout << "Row " << rowCount << ": $";
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
    } while (priceRows.size() < row);
    cout << endl;
    cout << "Here are the prices for each row:" << endl;
    for (int r = 0; r < priceRows.size(); r++) {
      cout << "Row " << counter << ": $" << priceRows.at(r) << endl;
      counter++;
    }
    cout << endl;
    cout << "Are there any seats you want to reserve? (Y)es or (N)o " << endl;
    cout << "Response: ";
    cin >> decisionReserve;
    if (decisionReserve != 'Y' && decisionReserve != 'y' &&
        decisionReserve != 'N' && decisionReserve != 'n') {
      while (decisionReserve != 'Y' && decisionReserve != 'y' &&
             decisionReserve != 'N' && decisionReserve != 'n') {
        cout << "Please make a valid choice, do you want to reserve any seats? "
                "(Y)es or (N)o "
             << endl;
        cin >> decisionReserve;
      }
    } else if (decisionReserve == 'Y' || decisionReserve == 'y') {
      cout << "Do you want to reserve one seat or muliple seats?" << endl;
      cout << " 1) = One seat" << endl;
      cout << " 2) = Muliple seats" << endl;
      cout << " 3) = Exit reservation" << endl;
      cout << "Answer: ";
      cin >> choiceSeat;
      if (choiceSeat != 1 && choiceSeat != 2 && choiceSeat != 3) {
        while (choiceSeat != 1 && choiceSeat != 2 && choiceSeat != 3) {
          cout << "Please Enter 1 or 2 or 3" << endl;
          cout << "Do you want to reserve one seat or muliple seats?" << endl;
          cout << " 1) = One seat" << endl;
          cout << " 2) = Muliple seats" << endl;
          cout << " 3) = Exit reservation" << endl;
          cin >> choiceSeat;
        }
      }
      switch (choiceSeat) {
      case 1:
        cout << "What seat do you want to reserve? " << endl;
        cout << "Row ( Min 1 and Max " << row << " )"
             << " : ";
        cin >> rowNum;
        if (cin.fail() || rowNum > row || rowNum <= 0) {
          while (cin.fail() || rowNum > row || rowNum <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter only integers between 1 - " << row
                 << " integers" << endl;
            cout << "Row: ";
            cin >> rowNum;
          }
        }
        cout << "Column ( Min 1 and Max " << column << " )"
             << " : ";
        cin >> colNum;
        if (cin.fail() || colNum > column || colNum <= 0) {
          while (cin.fail() || colNum > column || colNum <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter only integers between 1 - " << column
                 << " integers" << endl;
            cout << "Column: ";
            cin >> colNum;
          }
        }
        cout << endl;
        if (initializeSeat[rowNum][colNum] != '*') {
          initializeSeat[rowNum][colNum] = '*';
        }
        cout << "Front Row Seats" << endl;
        cout << endl;
        cout << "Column  ";
        for (int c = 1; c <= column; c++) {
          if (printCol == 10) {
            printCol = printCol - printCol;
          }
          cout << printCol;
          printCol++;
        }
        cout << endl;
        cout << endl;

        for (int r = 1; r <= row; r++) {
          printRow++;
          if (printRow >= 10) {
            cout << "Row " << printRow << "  ";
          } else {
            cout << "Row " << printRow << "   ";
          }
          for (int c = 1; c <= column; c++) {
            if (initializeSeat[r][c] == '*') {
              cout << '*';
              Revenue += priceRows[r];
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
        if (successOrFail == true) {
          cout << endl;
          cout << "You have successfully secure a seat";
        } else {
          cout << endl;
          cout << "Sorry, the seat has been taken.";
        }
        break;
      case 2:
        do {
          if (decide == true) {
            cout << "Sorry, but can you re-enter your column range." << endl;
            cout << "It surpassed the seat range you stated earlier." << endl;
          }
          cout << "How many seats in a row do you want to reserve? " << endl;
          cout << "Number of Seats ( Min 2 and Max " << column << " )"
               << " : ";
          cin >> numSeats;
          if (cin.fail() || numSeats > column || numSeats <= 1) {
            while (cin.fail() || numSeats > column || numSeats <= 1) {
              cin.clear();
              cin.ignore(1000, '\n');
              cout << "Please enter the number of seats in a row" << endl;
              cout << "Number of Seats ( Min 2 and Max 30 ) : ";
              cin >> numSeats;
            }
          }
          cout << "What is the row?" << endl;
          cout << "Row: ";
          cin >> rowNum;
          if (cin.fail() || rowNum > row || rowNum <= 0) {
            while (cin.fail() || rowNum > row || rowNum <= 0) {
              cin.clear();
              cin.ignore(1000, '\n');
              cout << "Please enter only integers between 1 - " << row
                   << " integers" << endl;
              cout << "Row: ";
              cin >> rowNum;
            }
          }
          cout << "What is the range of your column" << endl;
          cout << "From first Column ( Min 1 and Max " << column << " )"
               << " : ";
          cin >> colNum;
          if (cin.fail() || colNum > 30 || colNum <= 0) {
            while (cin.fail() || colNum > 30 || colNum <= 0) {
              cin.clear();
              cin.ignore(1000, '\n');
              cout << "Please enter only integers between 1 - " << column
                   << " integers" << endl;
              cout << "First Column ( Min 1 and Max " << column << " )"
                   << " : ";
              cin >> colNum;
            }
          }
          cout << "To last Column (between 1 to" << colNum << " integers"
               << " or from " << colNum;
          cout << " to "
               << " )"
               << " : ";
          cin >> colNum2;
          if (cin.fail() || colNum2 > column || colNum2 <= 0 ||
              colNum2 == colNum) {
            while (cin.fail() || colNum2 > column || colNum2 <= 0 ||
                   colNum2 == colNum) {
              cin.clear();
              cin.ignore(1000, '\n');
              cout << "Please enter only integers between 1 to " << colNum
                   << " integers"
                   << " or from " << colNum;
              cout << " to " << column << endl;
              cout << "Last Column: ";
              cin >> colNum2;
            }
          }
          colResult = colNum2 - colNum;
          if (colResult != numSeats) {
            decide = true;
          } else if (colResult == numSeats) {
            decide = false;
          }
        } while (decide == true);
        cout << endl;
        for (int r = colNum; r < colNum + 1; r++) {
          for (int c = colNum; c < colNum2; c++) {
            if (initializeSeat[r][c] != '*') {
              initializeSeat[r][c] = '*';
            }
          }
        }
        cout << "Front Row Seats" << endl;
        cout << endl;
        cout << "Column  ";
        for (int c = 1; c <= column; c++) {
          if (printCol == 10) {
            printCol = printCol - printCol;
          }
          cout << printCol;
          printCol++;
        }
        cout << endl;
        cout << endl;

        for (int r = 1; r <= row; r++) {
          printRow++;
          if (printRow >= 10) {
            cout << "Row " << printRow << "  ";
          } else {
            cout << "Row " << printRow << "   ";
          }
          for (int c = 1; c <= column; c++) {
            if (initializeSeat[r][c] == '*') {
              cout << '*';
              Revenue += priceRows[r];
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
        if (successOrFail == true) {
          cout << endl;
          cout << "You have successfully secure a seat";
        } else {
          cout << endl;
          cout << "Sorry, the seat has been taken.";
        }
        break;
      case 3:
        break;
      }
    } else if (decisionReserve == 'N' || decisionReserve == 'n') {
      decisionReserve = 'N';
    }
    cout << endl;
    cout << "Do you want to see menu? (Y)es or (N)o " << endl;
    cin >> menu;
    if (menu != 'Y' && menu != 'y' && menu != 'N' && menu != 'n') {
      cout
          << "Please give valid answer, do you want to see menu? (Y)es or (N)o "
          << endl;
      cin >> menu;
    } else if (menu == 'Y' || menu ==  'y') {
      menu = 'Y';
    } else if (menu == 'N' || menu == 'n') {
      exit(0);
    }
    cout << endl;
  } while (menu == 'Y' || menu == 'y');
  return 0;
}