#include <iostream>
using namespace std;

int main() {
  float face, interest, duration, needed;
  while (true) 
  {
    cout << "\nHow much do you need?" << endl;
    cin >> needed;
    cout << "What is the required interest rate?" << endl;
    cin >> interest;
    interest = interest / 100;
    cout << "How many years will this loan last?" << endl;
    cin >> duration;
  
    face =  needed + (needed * interest * duration);
    cout << endl << "===========================" << endl;
    cout << endl << "Face-Value = " << face << endl;
    cout << "===========================" << endl;
    cout << endl << "Overall Interest charge = " << interest * duration << endl;
    cout << "===========================" << endl;
    cout << endl << "Payment each month = " << needed / (12 * duration);

    // Repeat program or not
    char rpt_prog;
    

    //conditions to stop
    while (rpt_prog != 'y')
      {
        cout << endl << "\nDo you want to calclate more values (y / n)" << endl;
        cin >> rpt_prog;
        
        if (rpt_prog == 'n')
        {
          cout << "Hope that was helpful" << endl << "Exited Program successfully";
          return 0;
        }
        if (rpt_prog != 'n' && rpt_prog != 'y')
        {
          cout << "Wrong input. Please try again" << endl;
        }
        
      }
  } 
}