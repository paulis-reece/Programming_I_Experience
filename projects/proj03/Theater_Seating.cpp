/*

Name: Reece Reklai

Date: 12/6/19

Project 3

 */
#include <fstream>  // for file input and output
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;
// Functions
ofstream fout;
ifstream fin;
char menuMain(char Choices) {
  cout << "Welcome to the reservation seat program" << endl;
  cout << "---------------------------------------" << endl;
  cout << " A) Display a seating chart" << endl;
  cout << " B) Sell one or more tickets" << endl;
  cout << " C) Display statistics such as the number of tickets sold, the "
          "number of seats still available, the total revenue from ticket sales"
       << endl;
  cout << " D) Reset the program and re-enter the theater seating and pricing "
          "information"
       << endl;
  cout << " E) Exit program" << endl;
  cout << endl;
  cout << "Response: ";
  cin >> Choices;
  if (Choices != 'A' && Choices != 'B' && Choices != 'C' && Choices != 'D' &&
      Choices != 'E') {
    while (Choices != 'A' && Choices != 'B' && Choices != 'C' &&
           Choices != 'D' && Choices != 'E') {
      cout << "Please make a decision" << endl;
      cout << " A) Display a seating chart" << endl;
      cout << " B) Sell one or more tickets" << endl;
      cout << " C) Display statistics such as the number of tickets sold, the "
              "number of seats still available, the total revenue from ticket "
              "sales"
           << endl;
      cout << " D) Reset the program and re-enter the theater seating and "
              "pricing "
              "information"
           << endl;
      cout << " E) Exit program" << endl;
      cout << endl;
      cout << "Response: ";
      cin >> Choices;
    }
    return Choices;
  }
  return Choices;
}
void updateRowCol(int &row, int &column) {
  cout << "Size of theater" << endl;
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
}
void printToConfig(vector<int> &priceRows, int &row, int &column) {
  fout.open("theater.txt");
  if (!fout.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    fout << row << endl;
    fout << column << endl;
    for (int i = 0; i < row; i++) {
      fout << priceRows.at(i) << endl;
    }
  }
  fout.close();
}
void readFromConfig(vector<int> &priceRows, int &row, int &column) {
  int temp;
  fin.open("theater.txt");
  if (!fin.is_open()) {
    cout << "Sorry file failed to open" << endl;
  } else {
    fin >> row;
    fin >> column;
    for (int i = 0; i < row; i++) {
      fin >> temp;
      priceRows.push_back(temp);
    }
    fin.close();
  }
}
void readingToConfig(int &tickets, int &soldTickets, int &Revenue) {
  fout.open("money.txt");
  if (!fout.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    fout << tickets << endl;
    fout << soldTickets << endl;
    fout << Revenue << endl;
  }
  fout.close();
}
void readingFromConfig(int &tickets, int &soldTickets, int &Revenue) {
  fin.open("money.txt");
  if (!fin.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    fin >> tickets;
    cout << endl;
    fin >> soldTickets;
    cout << endl;
    fin >> Revenue;
  }
  fout.close();
}
// Main Menu (Prompts User to make a decision by using a Main Menu)
char menuMain(char Choices);
// Records data to file 'money.txt'
void readingToConfig(int &tickets, int &soldTickets, int &Revenue);
// Reads data to file 'money.txt'
void readingFromConfig(int &tickets, int &soldTickets, int &Revenue);
// Prompts User for the size of their theater (Row and Column)
void updateRowCol(int &row, int &column);
// Puts data of row prices, number of rows, and number of column into
// 'theater.txt'
void printToConfig(vector<int> &priceRows, int &row, int &column);
// Reads off the file 'theater.txt'
void readFromConfig(vector<int> &priceRows, int &row, int &column);
// int Main Function
int main() {
  int row;             // Row of the theater
  int column;          // Column of the theater
  int Revenue = 0;     // Revenue gained from reservation of seats
  int tickets = 0;     // Available tickets
  int soldTickets = 0; // Sold tickets
  int loopCount = 0;   // Keeps track if the user checks the seating chart more
                       // than once, allow the data to be updated and consistent
  int printCount = 0;  // Counts of how many tens of power should be printed on
                       // top of the seating chart
  int printRow =
      0; // Prints the word Rows and corresponding number to the seating chart
  int printCol = 1; // Prints the word Columns and corresponding number to the
                    // seating chart
  int printR = 0;   // Prints the number of row corresponding to seating chart
  int printC =
      1; // Prints the number of columns corresponding to the seating chart
  int ticketCount = 0; // Counts of how many tickets were sold
  int rowCount = 1;    // Counts of how many rows
  int rowNum;          // The row the user wants to reserve
  int colNum;          // The column the user wants to reserve
  int colNum2; // If the user wants a range of columns, this allows for that
  int colResult =
      0; // Check if the range of seats are equal to what the user wanted
  int counter = 1;      // Counts loops, iliteration, etc.
  int loop = 0;         // Counts looping for main menu
  int numSeats = 0;     // Number of seats the user wants
  int choiceSeat;       // Decision on whether they want one or range of seats
  int sorry = 0;        // If the tickets are out or not enough
  int price;            // The price for each row
  int pricelength = 0;  // Keep track of price loopingy
  char mainMenu;        // Choice from the Main Menu
  char decisionReserve; // Reservation for seats
  char menu;            // Choice for the user to see menu again
  char ans;             // Answer for transaction
  bool successOrFail;   // If the seat is reserved or not (one seat)
  bool verdict;         // If the seat is reserved or not (range of seats)
  bool decide =
      true; // If the range of seats is equal to the number of seats requested
  vector<int> priceRows(0); // Prices corresponding to rows
  // Reads of the file 'theater.txt' and initializes the 2d array
  readFromConfig(priceRows, row, column);
  char initializeSeat[row][column];
  for (int r = 0; r < row; r++) {
    for (int c = 0; c < column; c++) {
      initializeSeat[r][c] = '#';
    }
    cout << endl;
  }
  // The begginning of the Main Menu
  do {
    switch (menuMain(mainMenu)) {
      // If the user wants to recreate the program and start his/her own theater
    case 'D':
      if (loop > 0) {
        rowCount = 1;
        counter = 1;
      }
      pricelength = 0;
      updateRowCol(row, column); // Prompts user for number of rows and columns
      tickets =
          row * column; // Available Tickets branching of the rows and columns
      cout << endl;
      // Prices stores into a vector, corresponding it to each row of the
      // seating chart
      while (pricelength < row) {
        cout << "What is the price for row " << rowCount << "? " << endl;
        cout << "Row " << rowCount << ": $";
        cin >> price;
        if (price < 0 || cin.fail()) {
          while (price < 0 || cin.fail()) {
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
        pricelength++;
      }
      for (int r = 0; r < row; r++) {
        for (int c = 0; c < column; c++) {
          initializeSeat[r][c] = '#';
        }
        cout << endl;
      }
      soldTickets = 0;
      Revenue = 0;
      readingToConfig(tickets, soldTickets, Revenue);
      printToConfig(priceRows, row, column); // Sends data to file 'theater.txt'
      break;
    case 'B':
      readingFromConfig(tickets, soldTickets, Revenue);
      readFromConfig(priceRows, row, column);
      // The reservation process begins
      do {
        if (tickets == 0) {
          cout << "Sorry sold out" << endl;
          break;
        }
        cout << "Do you want to reserve a seat? (Y)es or (N)o "
             << endl; // Prompts user if they want to reserve a seat or not
        cout << "Response: ";
        cin >> decisionReserve;
        if (decisionReserve != 'Y' && decisionReserve != 'y' &&
            decisionReserve != 'N' && decisionReserve != 'n') {
          while (decisionReserve != 'Y' && decisionReserve != 'y' &&
                 decisionReserve != 'N' && decisionReserve != 'n') {
            cout << "Please make a valid choice, do you want to reserve any "
                    "seat? "
                    "(Y)es or (N)o "
                 << endl;
            cout << "Response: ";
            cin >> decisionReserve;
          }
        }
        // If the decision is Yes, it prompts the user to pick one or more seats
        // based on the availability of tickets
        if (decisionReserve == 'Y' || decisionReserve == 'y') {
          decisionReserve = 'Y';
          if (tickets == 1) { // If the tickets are equal to one
            cout << "Sorry only one seat is available, do you want to reserve "
                    "one seat?"
                 << endl;
            cout << " 1) = One seat" << endl;
            cout << " 3) = Exit reservation" << endl;
            cout << "Response: ";
            cin >> choiceSeat;
            while (choiceSeat != 1 && choiceSeat != 3) {
              cout
                  << "Sorry only one seat is available, do you want to reserve "
                     "one seat?"
                  << endl;
              cout << " 1) = One seat" << endl;
              cout << " 3) = Exit reservation" << endl;
              cout << "Response: ";
              cin >> choiceSeat;
            }
          } else { // If the tickets are more than one
            cout << "Do you want to reserve one seat or muliple seats?" << endl;
            cout << " 1) = One seat" << endl;
            cout << " 2) = Muliple seats" << endl;
            cout << " 3) = Exit reservation" << endl;
            cout << "Response: ";
            cin >> choiceSeat;
            if (choiceSeat != 1 && choiceSeat != 2 && choiceSeat != 3) {
              while (choiceSeat != 1 && choiceSeat != 2 && choiceSeat != 3) {
                cout << "Please Enter 1 or 2 or 3" << endl;
                cout << "Do you want to reserve one seat or muliple seats?"
                     << endl;
                cout << " 1) = One seat" << endl;
                cout << " 2) = Muliple seats" << endl;
                cout << " 3) = Exit reservation" << endl;
                cout << "Response: ";
                cin >> choiceSeat;
              }
            }
          }
          if (choiceSeat == 1) {
            // If the user picks one seat, it begins the reservation process for
            // one seat
            decisionReserve = 'Y';
            // Prompts user for their seat location through row and column
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
            // Checks to see if their seat choice is already taken, updates the
            // 2d array based of that or not
            cout << endl;
            if (initializeSeat[rowNum - 1][colNum - 1] != '*') {
              initializeSeat[rowNum - 1][colNum - 1] = '*';
              ticketCount++;
              successOrFail = true;
            } else {
              successOrFail = false;
            }
            // Give the user the chance to see if they secured their seat or not
            // (display the updated seating chart) Allows the user to make
            // reservation decisions based of their new found information
            if (loopCount > 0) {
              printRow = 0;
              printCol = 1;
            }
            cout << "Front Row Seats" << endl;
            cout << endl;
            cout << "Tens    ";
            for (int t = 1; t <= column; t++) {
              if (t == 1) {
                cout << "0";
              } else if (t % 10 == 0) {
                cout << t / 10;
              } else {
                cout << " ";
              }
            }
            cout << endl;
            cout << endl;
            cout << "Column  ";
            for (int c = 0; c < column; c++) {
              if (printCol == 10) {
                printCol = printCol - printCol;
              }
              cout << printCol;
              printCol++;
            }
            cout << endl;
            cout << endl;

            for (int r = 0; r < row; r++) {
              printRow++;
              if (printRow >= 10) {
                cout << "Row " << printRow << "  ";
              } else {
                cout << "Row " << printRow << "   ";
              }
              for (int c = 0; c < column; c++) {
                cout << initializeSeat[r][c];
              }
              cout << endl;
            }
            loopCount++;
            // Depending if the seat is already reserved or not, it will update
            // the available tickets, sold tickets, and revenue gain
            if (successOrFail == false) {
              successOrFail = false;
            } else {
              cout << "Do you want to pay $" << priceRows.at(rowNum - 1)
                   << "? (Y)es or (N)o" << endl;
              cout << "Response: ";
              cin >> ans;
              if (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
                while (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
                  cout << "Please answer if you want to pay $"
                       << priceRows.at(rowNum - 1) << "? (Y)es or (N)o" << endl;
                  cout << "Response: ";
                  cin >> ans;
                }
              }
              if (ans == 'Y' || ans == 'y') {
                soldTickets = ticketCount;
                tickets--;
                Revenue += priceRows.at(rowNum - 1);
              } else if (ans == 'N' || ans == 'n') {
                for (int r = 0; r < row; r++) {
                  for (int c = 0; c < column; c++) {
                    initializeSeat[r][c] = '#';
                  }
                  cout << endl;
                }
              }
              if (ans == 'N' || ans == 'n') {
                successOrFail = false;
              }
              readingToConfig(tickets, soldTickets, Revenue);
            }
            cout << endl;
            cout << "Back Row Seats" << endl;
            if (successOrFail == true) {
              cout << endl;
              cout << "You have successfully secure a seat" << endl;
            } else {
              cout << endl;
              cout << "Sorry, the seat has been taken or you did not pay the "
                      "transaction."
                   << endl;
            }
          } else if (choiceSeat == 2) {
            // If the user select a range of seats, this reservation range of
            // seats begin
            do {
              decisionReserve = 'Y';
              // Check to see if the user entered the correct range of seats
              // they wanted after the it loops more than once
              if (decide == false) {
                cout << "Sorry, but can you re-enter your column range."
                     << endl;
                cout << "It surpassed the seat range you stated earlier."
                     << endl;
              }
              cout << "How many seats in a row do you want to reserve? "
                   << endl;
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
              // Prompts the user for the row and column (one row and range of
              // columns)
              cout << "What is the row? (1 - " << row << ")" << endl;
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
              cout << "What are your columns" << endl;
              cout << "From first Column ( Min 1 and Max " << column << " )"
                   << " : ";
              cin >> colNum;
              if (cin.fail() || colNum > column || colNum <= 0) {
                while (cin.fail() || colNum > column || colNum <= 0) {
                  cin.clear();
                  cin.ignore(1000, '\n');
                  cout << "Please enter only integers between 1 - " << column
                       << " integers" << endl;
                  cout << "First Column ( Min 1 and Max " << column << " )"
                       << " : ";
                  cin >> colNum;
                }
              }
              cout << "To last Column (between " << colNum << " to Max"
                   << " or descending if possible)"
                   << " : ";
              cin >> colNum2;
              if (cin.fail() || colNum2 > column || colNum2 <= 0 ||
                  colNum2 == colNum) {
                while (cin.fail() || colNum2 > column || colNum2 <= 0 ||
                       colNum2 == colNum) {
                  cin.clear();
                  cin.ignore(1000, '\n');
                  cout << "Please enter only integers between " << colNum
                       << " to " << column << "or descending if possible)"
                       << endl;
                  cout << "Last Column: ";
                  cin >> colNum2;
                }
              }
              // Validate if the user range seats corresponds to what they input
              if (colNum2 < colNum) {
                colResult = colNum - (colNum2 - 1);
              } else {
                colResult = colNum2 - (colNum - 1);
              }
              if (colResult != numSeats) {
                decide = false;
              } else if (colResult == numSeats) {
                decide = true;
              }
            } while (decide ==
                     false); // Loops if the range input does not match with
                             // their number of seats stated
            verdict = true;
            // Starts the initailizing process of the 2d array (colNum2 means
            // final column range and colNum is the inital column range)
            if (colNum2 < colNum) {
              for (int r = rowNum - 1; r < rowNum; r++) {
                for (int c = colNum2 - 1; c < colNum; c++) {
                  if (initializeSeat[r][c] == '*') {
                    verdict = false;
                  }
                }
              }
            } else {
              for (int r = rowNum - 1; r <= rowNum + 1; r++) {
                for (int c = colNum - 1; c < colNum2; c++) {
                  if (initializeSeat[r][c] == '*') {
                    verdict = false;
                  }
                }
              }
            }
            if (verdict == true && colNum2 < colNum) {
              for (int r = rowNum - 1; r < rowNum; r++) {
                for (int c = colNum2 - 1; c < colNum; c++) {
                  initializeSeat[r][c] = '*';
                  ticketCount++;
                  tickets--;
                }
              }
            } else if (verdict == true && colNum2 > colNum) {
              for (int r = rowNum - 1; r < rowNum; r++) {
                for (int c = colNum - 1; c < colNum2; c++) {
                  initializeSeat[r][c] = '*';
                  ticketCount++;
                  tickets--;
                }
              }
            }
            // Begins the creation of updated seating chart
            if (loopCount > 0) {
              printRow = 0;
              printCol = 1;
            }
            cout << "Front Row Seats" << endl;
            cout << endl;
            cout << "Tens    ";
            for (int t = 1; t <= column; t++) {
              if (t == 1) {
                cout << "0";
              } else if (t % 10 == 0) {
                cout << t / 10;
              } else {
                cout << " ";
              }
            }
            cout << endl;
            cout << endl;
            cout << "Column  ";
            for (int c = 0; c < column; c++) {
              if (printCol == 10) {
                printCol = printCol - printCol;
              }
              cout << printCol;
              printCol++;
            }
            cout << endl;
            cout << endl;

            for (int r = 0; r < row; r++) {
              printRow++;
              if (printRow >= 10) {
                cout << "Row " << printRow << "  ";
              } else {
                cout << "Row " << printRow << "   ";
              }
              for (int c = 0; c < column; c++) {
                cout << initializeSeat[r][c];
              }
              cout << endl;
            }
            loopCount++;
            // Validates if the user seat range is already reserved or not
            if (verdict == false) {
              ticketCount = 0;
            } else {
              cout << "Do you want to pay $" << priceRows.at(rowNum - 1)
                   << "? (Y)es or (N)o" << endl;
              cout << "Response: ";
              cin >> ans;
              if (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
                while (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n') {
                  cout << "Please answer if you want to pay $"
                       << priceRows.at(rowNum - 1) << "? (Y)es or (N)o" << endl;
                  cout << "Response: ";
                  cin >> ans;
                }
              }
              if (ans == 'Y' || ans == 'y') {
                soldTickets = ticketCount;
                tickets--;
                Revenue += priceRows.at(rowNum - 1) * numSeats;
              } else if (ans == 'N' || ans == 'n') {
                for (int r = 0; r < row; r++) {
                  for (int c = 0; c < column; c++) {
                    initializeSeat[r][c] = '#';
                  }
                  cout << endl;
                }
              }
              if (ans == 'N' || ans == 'n') {
                verdict = false;
              }
              readingToConfig(tickets, soldTickets, Revenue);
            }
            if (verdict == true) {
              cout << endl;
              cout << "Back Row Seats" << endl;
              cout << "You have successfully secure a seat" << endl;
            } else {
              cout << "Sorry, one or more seat has been taken or you did not "
                      "pay the transaction."
                   << endl;
            }
          } else if (choiceSeat == 3) {
          } else if (decisionReserve == 'N' || decisionReserve == 'n') {
            decisionReserve = 'N';
          }
        } else { // If the user says no
          decisionReserve = 'N';
        }
      } while (
          decisionReserve ==
          'Y'); // Ends the reservation process entirley once the user says no
      break;
    case 'A':
      // Seating Chart
      readFromConfig(priceRows, row, column); // Reads of the file theater.txt
      cout << "Here are the prices for each row:"
           << endl; // Prints out corresponding row to prices
      for (int r = 0; r < row; r++) {
        cout << "Row " << counter << ": $" << priceRows.at(r) << endl;
        counter++;
      }
      // Begins the output of now updated 2d array
      if (printCount > 0) {
        printR = 0;
        printC = 1;
      }
      cout << endl;
      cout << endl;
      cout << "Front Row Seats" << endl;
      cout << endl;
      cout << "Tens    ";
      for (int t = 1; t <= column; t++) {
        if (t == 1) {
          cout << "0";
        } else if (t % 10 == 0) {
          cout << t / 10;
        } else {
          cout << " ";
        }
      }
      cout << endl;
      cout << "Column  ";
      for (int c = 0; c < column; c++) {
        if (printC == 10) {
          printC = printC - printC;
        }
        cout << printC;
        printC++;
      }
      cout << endl;
      cout << endl;
      for (int r = 0; r < row; r++) {
        printR++;
        if (printR >= 10) {
          cout << "Row " << printR << "  ";
        } else {
          cout << "Row " << printR << "   ";
        }
        for (int c = 0; c < column; c++) {
          cout << initializeSeat[r][c];
        }
        cout << endl;
      }
      cout << endl;
      cout << "Back Row Seats" << endl;
      cout << endl;
      cout << "Rows: ";
      cout << row << endl;
      cout << "Column: ";
      cout << column << endl;
      printCount++;
      break;
    case 'C':
      // Shows the statistics of the theater - Tickets and Revenue
      readingFromConfig(tickets, soldTickets, Revenue);
      cout << "Current Available Tickets: " << tickets << endl;
      cout << "Sold Tickets: " << soldTickets << endl;
      cout << "Revenue: $" << Revenue << endl;
      break;
    case 'E':
      // Exits the program
      exit(0);
      break;
    } // End of switch and asks if the user wants to see menu again
    cout << endl;
    cout << "Do you want to see menu? (Y)es or (N)o "
         << endl; // Prompts user if they want to see menu
    cout << "Response: ";
    cin >> menu;
    if (menu != 'Y' && menu != 'y' && menu != 'N' && menu != 'n') {
      cout << "Please give valid answer, do you want to see menu? (Y)es or "
              "(N)o "
           << endl;
      cin >> menu;
    } else if (menu == 'Y' || menu == 'y') { // Goes to Main Menu
      menu = 'Y';
    } else if (menu == 'N' || menu == 'n') { // Exits the program
      exit(0);
    }
    loop++;
  } while (menu == 'Y' ||
           menu == 'y'); // Check if they want to loop back to main menu or not
  return 0;
}