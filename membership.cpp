#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int menuChoice;
  int months;
  double totalCharges;

  const double ADULT = 40.0;
  const double CHILD = 30.0;
  const double FAMILY = 100.0;

  cout<<fixed<<setprecision(2)<<showpoint;

  do{
    cout<<"Please choose the type of membership"<<endl;
    cout<<"1. Adult"<<endl;
    cout<<"2. Child"<<endl;
    cout<<"3. Family"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>menuChoice;

    while(menuChoice < 1 || menuChoice > 4)
    {
      cout<<"Invalid Choice";
      cin>>menuChoice;
    }

    if (menuChoice == 4)
    break;
    cout<<"Enter The number of months"<<endl;
    cin>>months;

    while(months <1 || months > 24)
    {
      cout<<"must be between 12-24"<<endl;
      cin>>months;
    }

    switch(menuChoice)
    {
      case 1:
        totalCharges = months * ADULT;
        break;
      case 2:
        totalCharges = months * CHILD;
        break;
      case 3:
        totalCharges = months * FAMILY;
        break;
    }
    cout<<"$"<<totalCharges<<endl;
  } while(menuChoice != 4);
  cout<<"Thanks.."<<endl;
  return 0;
}
