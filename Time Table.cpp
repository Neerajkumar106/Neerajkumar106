/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// WAP to print time table
// date 12.10.2021

#include<iostream>

using namespace std;

class Ttable
{
  int choice,i,enter=1;

public:

    void table()
    {

      while(enter==1)
   	 {
        cout << "              Mani Menu                    "<<endl;
        cout << "==========================================="<<endl;
        cout << "\n      subject code    Teacher's Name "<<endl;
        cout << "1.Press   301          Ms.ZEBA PARVEEN"<<endl;
        cout << "2.Press   302          Mr.UMASH KUMAR SAHU"<<endl;
        cout << "3.Press   303          Mr.NIKHLESH PATHIK"<<endl;
        cout << "4.Press   304          Mr.ANOOP TIWARI"<<endl;
        cout << "5.Press   305          Ms.ANITA YADAV"<<endl;
        cout << "6.Press   306          Ms.MANALI CHANDANI"<<endl;
        cout << "7.Press   307          Show Full time table"<<endl;

        cout << "\nEnter your subject code : CS-";
        cin >> choice;
        cout << "\n";
        switch(choice)
        {
          case 301:
          	 ZebaAll();
            break;
          case 302:
             UmashAll();
            break;
          case 303:
             NikhleshAll();
            break;
          case 304:
             AnoopAll();
            break;
          case 305:
             AnitaAll();
            break;
          case 306:
             ManaliAll();
            break;
          case 307:
             Fulltable();
            break;
          default:
          	cout << "Invalid choice"<<endl;
        }
       cout<<"Do you want to continue to press 1 and Exit for 0 :- ";
       cin>>enter;
      }
    }
    int ZebaAll();
    int UmashAll();
    int NikhleshAll();
    int AnoopAll();
    int AnitaAll();
    int ManaliAll();
    int Fulltable();
};
int Ttable::ZebaAll()
{
  int i=0,enter=1;
  char choice;
  while(enter==1)
  {
    cout << "\n1.Press 'M' For Monday "<<endl;
    cout << "2.Press 'T' For Tuesday "<<endl;
    cout << "3.Press 'W' For Wednesday "<<endl;
    cout << "4.Press small 't' For Thursday "<<endl;
    cout << "5.Press 'F' For Friday "<<endl;
    cout << "6.Press 'S' Saturday "<<endl;
    cout << "7.Press small 's' Sunday "<<endl;
    cout << "8.Press 'A' For All lectures "<<endl;

    cout << "\nWhich day lecture Do you want to see "<<endl;
    cout << "Enter The day Name prefix : ";
    cin >> choice;

    switch(choice)
   {
   	  case 'M':
   	  	  cout << "\nMonday     02:10PM to 03:10PM     EEE  "<<endl;
   	  	break;
   	  case 'T':
   	  	  cout << "\nTueshday       NO Lecture         EEE  "<<endl;
   	  	break;
   	  case 'W':
   	  	  cout << "\nWednesday  09:35AM to 10:35AM     EEE  "<<endl;
        break;
	  case 't':
	       cout << "\nThursday       NO Lecture         EEE  "<<endl;
		break;
	  case 'F':
	        cout << "\nFriday     11:35AM to 12:35PM     EEE  "<<endl;
		break;
	  case 'S':
	        cout << "\nSaturday   10:35AM to 11:35AM     EEE  "<<endl;
	    break;
	  case 's':
	  	    cout << "\n (:  Holiday  :)"<<endl;
		break;
      case 'A':
            cout << "\n****  Ms.ZEBA PARVEEN *****"<<endl;
            cout << "Day              Time            Subject Name"<<endl;
            cout << "Monday     02:10PM to 03:10PM     EEE  "<<endl;
            cout << "Tueshday       NO Lecture         EEE  "<<endl;
            cout << "Wednesday  09:35AM to 10:35AM     EEE  "<<endl;
            cout << "Thursday       NO Lecture         EEE  "<<endl;
            cout << "Friday     11:35AM to 12:35PM     EEE  "<<endl;
            cout << "Saturday   10:35AM to 11:35AM     EEE  "<<endl;
        break;
      default:
      	cout << "Invalid choice "<<endl;
    }
    cout<<"Do you want to continue to press 1 and go to main menu 0 :- ";
     cin >> enter;
  }
}
int Ttable::UmashAll()
{
  int i=0,enter=1;
  char choice;
  while(enter==1)
  {
    cout << "\n1.Press 'M' For Monday "<<endl;
    cout << "2.Press 'T' For Tuesday "<<endl;
    cout << "3.Press 'W' For Wednesday "<<endl;
    cout << "4.Press small 't' For Thursday "<<endl;
    cout << "5.Press 'F' For Friday "<<endl;
    cout << "6.Press 'S' Saturday "<<endl;
    cout << "7.Press small 's' Sunday "<<endl;
    cout << "8.Press 'A' For All lectures "<<endl;

    cout << "\nWhich day lecture Do you want to see "<<endl;
    cout << "Enter The day Name prefix : ";
    cin >> choice;

    switch(choice)
   {
   	  case 'M':
   	  	  cout << "\nMonday         No Lecture       Discrete Structure"<<endl;
   	  	break;
   	  case 'T':
   	  	  cout << "\nTueshday       NO Lecture       Discrete Structure"<<endl;
   	  	break;
   	  case 'W':
   	  	  cout << "\nWednesday   11:35AM to 12:35PM  Discrete Structure "<<endl;
        break;
	  case 't':
	       cout << "\nThursday   09:35AM to 10:35AM  Discrete Structure "<<endl;
		break;
	  case 'F':
	        cout << "\nFriday    01:10PM to 02:10    Discrete Structure "<<endl;
		break;
	  case 'S':
	        cout << "\nSaturday  01:10PM to 02:10    Discrete Structure "<<endl;
	    break;
	  case 's':
	  	    cout << "\n (:  Holiday  :)"<<endl;
		break;
      case 'A':
            cout << "\n***** Mr.UMASH KUMAR SAHU *****"<<endl;
            cout << "Day              Time             Subject Name"<<endl;
            cout << "\nMonday         No Lecture         Discrete Structure"<<endl;
            cout << "\nTueshday       NO Lecture         Discrete Structure"<<endl;
            cout << "\nWednesday   11:35AM to 12:35PM    Discrete Structure "<<endl;
            cout << "\nThursday    09:35AM to 10:35AM    Discrete Structure "<<endl;
            cout << "\nFriday      01:10PM to 02:10PM    Discrete Structure "<<endl;
            cout << "\nSaturday    01:10PM to 02:10PM    Discrete Structure "<<endl;
        break;
      default:
      	cout << "Invalid choice "<<endl;
    }
     cout<<"Do you want to continue to press 1 and go to main menu 0 :- ";
     cin >> enter;
  }
}
int Ttable::NikhleshAll()
{
  int i=0,enter=1;
  char choice;
  while(enter==1)
  {
    cout << "\n1.Press 'M' For Monday "<<endl;
    cout << "2.Press 'T' For Tuesday "<<endl;
    cout << "3.Press 'W' For Wednesday "<<endl;
    cout << "4.Press small 't' For Thursday "<<endl;
    cout << "5.Press 'F' For Friday "<<endl;
    cout << "6.Press 'S' Saturday "<<endl;
    cout << "7.Press small 's' Sunday "<<endl;
    cout << "8.Press 'A' For All lectures "<<endl;

    cout << "\nWhich day lecture Do you want to see "<<endl;
    cout << "Enter The day Name prefix : ";
    cin >> choice;

    switch(choice)
   {
   	  case 'M':
   	  	  cout << "\nMonday      11:35AM to 12:35PM  Data Structure"<<endl;
   	  	break;
   	  case 'T':
   	  	  cout << "\nTueshday    09:35AM to 10:35AM  Data Structure"<<endl;
   	  	break;
   	  case 'W':
   	  	  cout << "\nWednesday      NO lecture       Data Structure "<<endl;
        break;
	  case 't':
	       cout << "\nThursday   01:10PM to 02:10PM  Data Structure "<<endl;
		break;
	  case 'F':
	        cout << "\nFriday       NO lecture       Data Structure "<<endl;
		break;
	  case 'S':
	        cout << "\nSaturday  02:10PM to 3:10PM   Data Structure(Lab) "<<endl;
	    break;
	  case 's':
	  	    cout << "\n (:  Holiday  :)"<<endl;
		break;
      case 'A':
            cout << "\n***** Mr.NIKHLESH PATHIK *****"<<endl;
            cout << "Day              Time             Subject Name"<<endl;
            cout << "\nMonday      11:35AM to 12:35PM  Data Structure"<<endl;
            cout << "\nTueshday    09:35AM to 10:35AM  Data Structure"<<endl;
            cout << "\nWednesday      NO lecture       Data Structure "<<endl;
            cout << "\nThursday    01:10PM to 02:10PM  Data Structure "<<endl;
            cout << "\nFriday         NO lecture       Data Structure "<<endl;
            cout << "\nSaturday    02:10PM to 03:10PM  Data Structure(Lab) "<<endl;
        break;
      default:
      	cout << "Invalid choice "<<endl;
    }
     cout<<"Do you want to continue to press 1 and go to main menu 0 :- ";
     cin >> enter;
  }
}
int Ttable::AnoopAll()
{
  int i=0,enter=1;
  char choice;
  while(enter==1)
  {
    cout << "\n1.Press 'M' For Monday "<<endl;
    cout << "2.Press 'T' For Tuesday "<<endl;
    cout << "3.Press 'W' For Wednesday "<<endl;
    cout << "4.Press small 't' For Thursday "<<endl;
    cout << "5.Press 'F' For Friday "<<endl;
    cout << "6.Press 'S' Saturday "<<endl;
    cout << "7.Press small 's' Sunday "<<endl;
    cout << "8.Press 'A' For All lectures "<<endl;

    cout << "\nWhich day lecture Do you want to see "<<endl;
    cout << "Enter The day Name prefix : ";
    cin >> choice;

    switch(choice)
   {
   	  case 'M':
   	  	  cout << "\nMonday         NO Lecture         Digital System"<<endl;
   	  	break;
   	  case 'T':
   	  	  cout << "\nTueshday    10:35AM to 11:35AM    Digital System"<<endl;
   	  	break;
   	  case 'W':
   	  	  cout << "\nWednesday   10:35AM to 11:35AM    Digital System "<<endl;
        break;
	  case 't':
	       cout << "\nThursday   10:35AM to 11:35AM    Digital System "<<endl;
		break;
	  case 'F':
	        cout << "\nFriday    09:35AM to 11:35AM    Digital System(lab)"<<endl;
		break;
	  case 'S':
	        cout << "\nSaturday  09:35AM to 10:35AM    Digital System "<<endl;
	    break;
	  case 's':
	  	    cout << "\n (:  Holiday  :)"<<endl;
		break;
      case 'A':
            cout << "\n***** Mr.ANOOP TIWARI *****"<<endl;
            cout << "Day              Time             Subject Name"<<endl;
            cout << "\nMonday         NO Lecture         Digital System"<<endl;
            cout << "\nTueshday    10:35AM to 11:35AM    Digital System"<<endl;
            cout << "\nWednesday   10:35AM to 11:35AM    Digital System "<<endl;
            cout << "\nThursday    10:35AM to 11:35AM    Digital System "<<endl;
            cout << "\nFriday      09:35AM to 11:35AM    Digital System(lab)"<<endl;
            cout << "\nSaturday    09:35AM to 10:35AM    Digital System "<<endl;
        break;
      default:
      	cout << "Invalid choice "<<endl;
    }
     cout<<"Do you want to continue to press 1 and go to main menu 0 :- ";
     cin >> enter;
  }
}
int Ttable::AnitaAll()
{
  int i=0,enter=1;
  char choice;
  while(enter==1)
  {
    cout << "\n1.Press 'M' For Monday "<<endl;
    cout << "2.Press 'T' For Tuesday "<<endl;
    cout << "3.Press 'W' For Wednesday "<<endl;
    cout << "4.Press small 't' For Thursday "<<endl;
    cout << "5.Press 'F' For Friday "<<endl;
    cout << "6.Press 'S' Saturday "<<endl;
    cout << "7.Press small 's' Sunday "<<endl;
    cout << "8.Press 'A' For All lectures "<<endl;

    cout << "\nWhich day lecture Do you want to see "<<endl;
    cout << "Enter The day Name prefix : ";
    cin >> choice;

    switch(choice)
   {
   	  case 'M':
   	  	  cout << "\nMonday         No Lecture       Discrete Structure"<<endl;
   	  	break;
   	  case 'T':
   	  	  cout << "\nTueshday       NO Lecture       Discrete Structure"<<endl;
   	  	break;
   	  case 'W':
   	  	  cout << "\nWednesday   11:35AM to 12:35PM  Discrete Structure "<<endl;
        break;
	  case 't':
	       cout << "\nThursday   09:35AM to 10:35AM  Discrete Structure "<<endl;
		break;
	  case 'F':
	        cout << "\nFriday    01:10PM to 02:10    Discrete Structure "<<endl;
		break;
	  case 'S':
	        cout << "\nSaturday  01:10PM to 02:10    Discrete Structure "<<endl;
	    break;
	  case 's':
	  	    cout << "\n (:  Holiday  :)"<<endl;
		break;
      case 'A':
            cout << "\n***** Ms.ANITA YADAV *****"<<endl;
            cout << "Day              Time             Subject Name"<<endl;
            cout << "\nMonday         No Lecture         Discrete Structure"<<endl;
            cout << "\nTueshday       NO Lecture         Discrete Structure"<<endl;
            cout << "\nWednesday   11:35AM to 12:35PM    Discrete Structure "<<endl;
            cout << "\nThursday    09:35AM to 10:35AM    Discrete Structure "<<endl;
            cout << "\nFriday      01:10PM to 02:10PM    Discrete Structure "<<endl;
            cout << "\nSaturday    01:10PM to 02:10PM    Discrete Structure "<<endl;
        break;
      default:
      	cout << "Invalid choice "<<endl;
    }
     cout<<"Do you want to continue to press 1 and go to main menu 0 :- ";
     cin >> enter;
  }
}
int Ttable::ManaliAll()
{
  int i=0,enter=1;
  char choice;
  while(enter==1)
  {
    cout << "\n1.Press 'M' For Monday "<<endl;
    cout << "2.Press 'T' For Tuesday "<<endl;
    cout << "3.Press 'W' For Wednesday "<<endl;
    cout << "4.Press small 't' For Thursday "<<endl;
    cout << "5.Press 'F' For Friday "<<endl;
    cout << "6.Press 'S' Saturday "<<endl;
    cout << "7.Press small 's' Sunday "<<endl;
    cout << "8.Press 'A' For All lectures "<<endl;

    cout << "\nWhich day lecture Do you want to see "<<endl;
    cout << "Enter The day Name prefix : ";
    cin >> choice;

    switch(choice)
   {
   	  case 'M':
   	  	  cout << "\nMonday         No Lecture       Discrete Structure"<<endl;
   	  	break;
   	  case 'T':
   	  	  cout << "\nTueshday       NO Lecture       Discrete Structure"<<endl;
   	  	break;
   	  case 'W':
   	  	  cout << "\nWednesday   11:35AM to 12:35PM  Discrete Structure "<<endl;
        break;
	  case 't':
	       cout << "\nThursday   09:35AM to 10:35AM  Discrete Structure "<<endl;
		break;
	  case 'F':
	        cout << "\nFriday    01:10PM to 02:10    Discrete Structure "<<endl;
		break;
	  case 'S':
	        cout << "\nSaturday  01:10PM to 02:10    Discrete Structure "<<endl;
	    break;
	  case 's':
	  	    cout << "\n (:  Holiday  :)"<<endl;
		break;
      case 'A':
            cout << "\n***** Ms.MANALI CHANDANI *****"<<endl;
            cout << "Day              Time             Subject Name"<<endl;
            cout << "\nMonday         No Lecture         Discrete Structure"<<endl;
            cout << "\nTueshday       NO Lecture         Discrete Structure"<<endl;
            cout << "\nWednesday   11:35AM to 12:35PM    Discrete Structure "<<endl;
            cout << "\nThursday    09:35AM to 10:35AM    Discrete Structure "<<endl;
            cout << "\nFriday      01:10PM to 02:10PM    Discrete Structure "<<endl;
            cout << "\nSaturday    01:10PM to 02:10PM    Discrete Structure "<<endl;
        break;
      default:
      	cout << "Invalid choice "<<endl;
    }
    cout<<"Do you want to continue to press 1 and go to main menu 0 :- ";
    cin >>enter;
  }
}
int Ttable :: Fulltable()
{  cout << " -------------------------------------------------------------------------------------------------------------------------------------- "<<endl;
   cout << "|  \  Time   | 09:35AM-10:35AM | 10:35AM-11:35AM | 11:35AM-12:35PM | 12:35PM-01:10PM | 01:10PM-210PM | 02:10PM-3:10PM | 03:10PM-04:10   |"<<endl;
   cout << "|DAY        |                 |                 |                 |                 |               |                |                 |"<<endl;
   cout << "|Monday     |           OOPM LAB(AY/UKS)        |       DS(NP)    |     LUNCH       |    APTI(VN)   |    EEE(ZP)     |    AMCAT        |"<<endl;
   cout << "|Tuesday    |     DS(NP)      |   DIG.SYS(AT)   |   COMM.SKIILS   |     LUNCH       |    APTI(VN)   |                |   OOPM(AY)      |"<<endl;
   cout << "|Wednesday  |     EEE(ZP)     |   DIG.SYS(AT)   |    DIS.S(UKS)   |     LUNCH       |     AMCAT     |          JAVA LAB(MC/PH)         |"<<endl;
   cout << "|Thursday   |   DIS.S(UKS)    |   DIG.SYS(AT)   |      AMCAT      |     LUNCH       |  COMM.SKIILS  |                |   OOPM(AY)      |"<<endl;
   cout << "|Friday     |           DIG.SYS LAB(AT)         |     EEE(ZP)     |     LUNCH       |   DIS.S(UKS)  |          JAVA LAB(MC/PH)         |"<<endl;
   cout << "|Saturday   |  DIG.SYS (AT)   |     EEE(ZP)     |     OOPM(AY)    |     LUNCH       |   DIS.S(UKS)  |            DS LAB(NP)            |"<<endl;
   cout << " -------------------------------------------------------------------------------------------------------------------------------------- "<<endl;
   
}
int main()
{
    Ttable time;
      time.table();
}
