/*************************************************************************
 *
 * Demonstration: Split the grade calculator into separate header and 
 *                implementation files
 *
 * File Name: grade.cpp
 * Course:    CPTR 141
 */

#include <iostream>  // for cin and cout
#include <string>    // for string type
#include <vector>    // to use vectors
#include <cctype>    // to convert to uppercase
using namespace std;


// Function definitions go here

int getInt(string message) {
   
  // temporary variable to hold input and success flag
  int theInt;
  bool success = false;
   
  // keep asking until the give us a correct integer
  do {
     cout << message << " ";
     if( ! (cin >> theInt) ) {
        cerr << "Error: Please enter a valid integer!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
     } else {
        success = true;
     }     
  } while( ! success );
 
  // return the value
  return theInt;
        
};


double getGrade(int i) {
   
   // temporary variable to hold grade and success flag
   double tmpGrade;
   bool success = false;
   
   // prompt for grade until we get a valid grade
   do {
      cout << "Enter grade " << i+1 << ": ";
      if( ! (cin >> tmpGrade) || tmpGrade < 0 || tmpGrade > 100 ) {
         cerr << "Error: Enter a grade between 0 and 100!" << endl;
         cin.clear();
         cin.ignore(1000,'\n');
      } else {
         success = true;
      }
   } while( ! success );
    
   // return the grade
   return tmpGrade;
        
};


char menuPrompt( vector<double> myGrades ) {
   
   // temporary character variable for choice
   char tmpChoice;
   
   // clear cin of all input
   cin.clear();
   cin.ignore(1000,'\n');
   
   // print out grades
   cout << endl;
   cout << "Grades: ";
   for(int i = 0; i < myGrades.size(); i++) {
      cout << myGrades.at(i);
      if( i == myGrades.size() - 1 ) {
         cout << endl;
      } else {
         cout << ", ";
      }      
   }
   
   // print out menu
   cout << endl;
   cout << "Please Select an Action" << endl;
   cout << "=============================================" << endl;
   cout << "  A - Add a Grade       R - Replace a Grade"   << endl;
   cout << "  I - Compute Minimum   X - Compute Maximum"   << endl;
   cout << "  V - Compute Average   Q - Quit Program"      << endl;
   cout << "=============================================" << endl;
   cout << "Choice: ";
   cin.get(tmpChoice);
   
   // return choice changed to uppercase
   return toupper(tmpChoice);
   
}


void replaceGrade(vector<double> &myGrades, int which) {
   myGrades.at(which) = getGrade(which);
};


double minGrade(vector<double> myGrades) {
   
   // start with minimum at first element
   double tmpMin = myGrades.at(0);
   
   // search the rest
   for(int i = 1; i < myGrades.size(); i++) {
     if( myGrades.at(i) < tmpMin ) {
        tmpMin = myGrades.at(i);
     }
   }   
   
   // return minimum
   return tmpMin;
   
};


double maxGrade(vector<double> myGrades) {
   
   // start with maximum at first element
   double tmpMax = myGrades.at(0);
   
   // search the rest
   for(int i = 1; i < myGrades.size(); i++) {
     if( myGrades.at(i) > tmpMax ) {
        tmpMax = myGrades.at(i);
     }
   }   
   
   // return minimum
   return tmpMax;
   
};


double avgGrade(vector<double> myGrades){
   
   // declare and initialize accumulator
   double tmpSum = 0;
   
   // add grades together
   for( int i = 0; i < myGrades.size(); i++ ) {
      tmpSum += myGrades.at(i);
   }
   
   // return average
   return tmpSum / myGrades.size();
        
};



// Here is the main program
int main() {
    
   //====================================================
   // program initialization
   
   // declare variables
   vector<double> grades;
   int tmpInt;
   char choice;
   double tmpDouble;
   
   // prompt for number of grades then collect them
   tmpInt = getInt("How many scores will you enter?");
   
   // get that many grades and push them onto vector
   for(int i = 0; i < tmpInt; i++) {        
      grades.push_back(getGrade(i));
   } 
    

   //====================================================
   // body of program is the main menu loop
   
   // infinte main menu loop
   while(true) {
   
      // print out menu and get choice
      choice = menuPrompt(grades);
      
      switch(choice) {
         
         // add a grade to the vector
         case 'A':
            grades.push_back(getGrade(grades.size()));
            break;
         
         // replace a grade from the vector
         case 'R':
            tmpInt = getInt("Enter index of grade to replace:");
            replaceGrade(grades,tmpInt);
            break;
         
         // calculate and display the mInimum grade
         case 'I':
            cout << "The minimum grade is: " << minGrade(grades) << endl;
            break;
         
         // calculate and display the maXimum grade
         case 'X':
            cout << "The maximum grade is: " << maxGrade(grades) << endl;
            break;
         
         // calculate and display the average grade
         case 'V':
            cout << "The average grade is: " << avgGrade(grades) << endl;
            break;
         
         // exit the program
         case 'Q':
            cout << endl << "Thank you for using AmazingGradeCalc 2.0." << endl;
            exit(0);
            break;
         
         default:
            cerr << "Invalid menu choice.  Please try again.";
            break;
      }
      
      
   }


   return 0;

}




