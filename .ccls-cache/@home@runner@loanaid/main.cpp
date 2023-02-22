#include <iostream>
using namespace std;

int main() {
  float face, interest, duration, needed;
  for (string stopper; stopper != "No";) 
  {
    cout << "\n\n\nHow much do you need?" << endl;
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
    cout << "Do you want to calclate more values (Yes / No)" << endl;
    cin >> stopper;
  } 
}