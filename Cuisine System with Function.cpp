#include <iostream>
#include <windows.h>
using namespace std;

//Global Declarations
int no1,no2,noCns,noIdn,noMly,noBev;
int noCns1,noCns2,noCns3,noCns4;
int noIdn1,noIdn2,noIdn3,noIdn4;
int noMly1,noMly2,noMly3,noMly4;
int noBev1,noBev2,noBev3,noBev4,noBev5;
int paychoice,pin ;
char choice1,choice2;
long double ccc;
char char1,char2,ans1,ans2,ans3,ans4,cont;
float total1=0,total2=0,total3=0,total4=0,billSum=0;

///Loading Screen

string intro1 = "\t=========================================================================================================\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\tLOADING...............................................................\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\tDesigned       &       Programmed       by:       SteadyAlphaQ\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t1%\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t||\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t=========================================================================================================\n"
    ;

string intro2 = "\t=========================================================================================================\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\tLOADING...............................................................\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\tDesigned       &       Programmed       by:       SteadyAlphaQ\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t25%\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t|||||||||||||||||||||||\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t=========================================================================================================\n"
    ;

string intro3 = "\t=========================================================================================================\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\tLOADING...............................................................\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\tDesigned       &       Programmed       by:       SteadyAlphaQ\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t50%\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t||||||||||||||||||||||||||||||||||||||||||||||\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t=========================================================================================================\n"
    ;

string intro4 = "\t=========================================================================================================\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\tLOADING...............................................................\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\tDesigned       &       Programmed       by:       SteadyAlphaQ\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t75%\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t=========================================================================================================\n"
    ;

string intro5 = "\t=========================================================================================================\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\tLOADING...............................................................\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t\t\tDesigned       &       Programmed       by:       SteadyAlphaQ\t\t\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t99%\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t|\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\t|\n"
    "\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n"
    "\t=========================================================================================================\n"
    ;

void complete()
{
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\tSystem Loaded Successfully\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\tA W A I T I N G\t\tC O M M A N D\t\tF R O M\t\tA D M I N . . . . \t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<endl;
}

///System Dialog
void welcome()
{
    //Welcome Screen
    system("cls");
    system("color E0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\tWelcome to 1 Malaysia Cuisine Ordering System\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\tDesigned - - - & - - - Programmed - - - by: - - - SteadyAlphaQ\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
    cout<<"                                                  1. Dine In                                                          \n";
    cout<<"                                                  2. Take Away                                                        \n";
    cout<<"                                                  3. Exit                                                             \n";
    cout<<endl;
    ;
}

void thank()
{
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\tThank you for using our system!\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
    cout<<endl;

}

void error()
{
    system("cls");
    system("color 0A");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\tInvalid Input!\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
}

void menu()
{
   system("cls");
   system("color E0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\tMENU\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t1. Chinese\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t2. Indian\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t3. Malay\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t4. Beverages\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n";
    cout<<"\t\t\t\tEnter your selection: ";
}

void plastic()
{
    system("cls");

    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\tDo you require plastic containers and plastic bags? Additional fee will be charged.\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\tYes or No Answer only\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t   Yes (y)\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t   No (n)\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n" ;

}

void ensure()
{
    system("cls");
    system("color FC");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\tAre you sure?\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\tYes or No Answer only\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t   Yes (y)\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t   No (n)\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
}

char again()
{
    system("cls");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\tDo you wish to continue ordering?\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\tYes or No Answer only\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t   Yes (y)\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t   No (n)\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
    cout<<"\t\t\t\t\tEnter Your Selection: ";
    cin>>cont;
}


///Menu Selections
void chinese()
{
    system("cls");
    system("color E0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\tMENU\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t1. Chinese Fried Rice.................RM5.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t2. Char Kuey Teow.....................RM4.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t3. Chicken Dumpling Set...............RM4.00\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t4. Wat Tan Hor........................RM6.00\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n" ;
}

void indian()
{
    system("cls");
    system("color E0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\tMENU\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t1. Roti Canai Set....................RM3.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t2. Tandoori Set......................RM5.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t3. Cheese Naan Set...................RM4.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t4. Malai Kofta Set...................RM5.00\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n" ;
}

void malay()
{
    system("cls");
    system("color E0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\tMENU\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t1. Nasi Dagang.......................RM6.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t2. Nasi Lemak........................RM3.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t3. Mee Goreng Mamak..................RM4.50\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t4. Rendang Set.......................RM7.50\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n" ;
}

void beverage()
{
    system("cls");
    system("color E0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\tMENU\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t1. Teh Tarik.........................RM2.50\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t2. Sirap Bandung.....................RM3.00\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t3. Masala Chai.......................RM2.80\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t4. Lassi.............................RM3.50\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t5. Boba Tea..........................RM4.90\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n" ;
}


///Billing System
float billChinese()
{
    system("cls");
    chinese();
    do
{
    noCns1=0, noCns2=0, noCns3=0, noCns4=0 ;

    cout << endl ;
    cout << "Enter your selection: " ;
    cin >> noCns ;

    if (noCns==1)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noCns1 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noCns==2)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noCns2 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noCns==3)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noCns3 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noCns==4)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noCns4 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else
    {
        cout << "Invalid input" << endl ;

    }

         cout << "Do you want to continue? (y/n) : " ;
        cin >> ans1 ;

        total1 = total1 + (noCns1*5.90 + noCns2*4.90 + noCns3*4.00 + noCns4*6.00) ;
}

 while (ans1== 'y' || ans1 == 'Y' ) ;


    cout << "Your total bill is: RM " << total1 << endl ;


}

float billIndian()
{
    system("cls");
    indian();
do
{
    noIdn1=0, noIdn2=0, noIdn3=0, noIdn4=0 ;

    cout << endl ;
    cout << "Enter your selection: " ;
    cin >> noIdn ;

    if (noIdn==1)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noIdn1 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noIdn==2)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noIdn2 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noIdn==3)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noIdn3 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noIdn==4)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noIdn4 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else
    {
        cout << "Invalid input" << endl ;

    }

         cout << "Do you want to continue? (y/n) : " ;
        cin >> ans2 ;

        total2 = total2 + (noIdn1*3.90 + noIdn2*5.90 + noIdn3*4.90 + noIdn4*5.00) ;
}

 while (ans2== 'y' || ans2 == 'Y' ) ;


    cout << "Your total bill is: RM " << total2 << endl ;
}

float billMalay()
{
    system("cls");
    malay();
    do
{
    noMly1=0, noMly2=0, noMly3=0, noMly4=0 ;

    cout << endl ;
    cout << "Enter your selection: " ;
    cin >> noMly ;

    if (noMly==1)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noMly1 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noMly==2)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noMly2 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noMly==3)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noMly3 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noMly==4)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noMly4 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else
    {
        cout << "Invalid input" << endl ;

    }

         cout << "Do you want to continue? (y/n) : " ;
        cin >> ans3 ;

        total3 = total3 + (noMly1*6.90 + noMly2*3.90 + noMly3*4.50 + noMly4*7.50) ;
}

 while (ans3== 'y' || ans3 == 'Y' ) ;


    cout << "Your total bill is: RM " << total3 << endl ;
}

float billBeverage()
{
    system("cls");
    beverage();
do
{
    noBev1=0, noBev2=0, noBev3=0, noBev4=0, noBev5=0 ;

    cout << endl ;
    cout << "Enter your selection: " ;
    cin >> noBev ;

    if (noBev==1)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noBev1 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noBev==2)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noBev2 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noBev==3)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noBev3 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noBev==4)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noBev4 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }

    else if (noBev==5)
    {
        cout << endl;
        cout << "How many sets would you like?: " ;
        cin >> noBev5 ;
        cout << endl ;
        cout << "Item has been successfully added to cart" << endl ;
        cout << endl ;
    }




    else
    {
        cout << "Invalid input" << endl ;

    }

        cout << "Do you want to continue? (y/n) : " ;
        cin >> ans4 ;

        total4 = total4 + (noBev1*2.50 + noBev2*3.00 + noBev3*2.80 + noBev4*3.50 + noBev5*4.90) ;
}

 while (ans4== 'y' || ans4 == 'Y' ) ;


    cout << "Your total bill is: RM " << total4 << endl ;


}

float bill()
{

    if(no2==1)
    {
        billChinese();
    }

    else if(no2==2)
    {
        billIndian();
    }

    else if(no2==3)
    {
         billMalay();
    }

    else if(no2==4)
    {
        billBeverage();
    }

    else
    {
        error();
    }

}

float sum()
{
    billSum = total1 + total2 + total3 + total4;
    return billSum;
}

///Payment Options

int payment ()
{
    cout<<endl;
    cout << "Payment Options:" << endl ;
    cout << endl ;
    cout << "1. Cash" << endl ;
    cout << "2. Credit Card" << endl ;
    cout << endl ;
    cout << "Enter your selection: " ;
    cin >> paychoice ;
    return paychoice ;
}

void cash ()
{
    system ("cls") ;
    system ("color B0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\tYour Order is Successful!\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\tPlease pay at the counter...\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\tThank you for using our system and please come again! ^^\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
}

void credit ()
{
    system ("cls");
    system ("color B0");
    cout<<"\t=========================================================================================================\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\tPlease enter your Credit Card Credentials\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\tDont worry,your personal information is safe with us.\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\tMaybeeeeee.....\t|\n";
    cout<<"\t=========================================================================================================\n";
    cout<<endl;
}

void payment1()
{
    payment () ;
    cout << endl ;

    if (paychoice==1)
    {
        cash () ;
    }

    else if (paychoice==2)
    {
        credit () ;

    do
    {
        cout << "Credit Card Number: " ;
        cin >> ccc ;
        cout << endl ;


        if (ccc>9999999999999999)
        {
            cout << "Invalid Credit Card Number" << endl ;
        }

        else if (ccc<=0)
        {
            cout << "Invalid Credit Card Number" << endl ;
        }

        else if (ccc<1000000000000000)
        {
            cout << "Invalid Credit Card Number" << endl ;
        }

        else if (ccc>=1000000000000000)
        {
            do
            {

            cout << "Pin Number: " ;
            cin >> pin ;
            cout << endl ;

            if (pin>999999)
            {
                cout <<"Invalid Pin" << endl ;
            }

            else if (pin<=0)
            {
                cout <<"Invalid Pin" << endl ;
            }

            else if (pin<100000)
            {
                cout <<"Invalid Pin" << endl ;
            }

            else if (pin>=100000)
            {
                cout << endl ;
                cout << endl ;
                cout <<"Pin is accepted" << endl ;
                cout << "Thank you for using our system and please come again! ^^" << endl ;
                return ;
            }

            else
            {
                cout << endl ;
                cout << endl ;
                cout <<"Pin is accepted" << endl ;
                cout << "Thank you for using our system and please come again! ^^" << endl ;
                return ;
            }
                cout << "Do you wish to try again?(y/n) : " ;
                cin >> choice2 ;
            }while (choice2== 'y' || choice2== 'Y') ;
            return;
        }


        else
        {
            do
            {

            cout << "Pin Number: " ;
            cin >> pin ;
            cout << endl ;

            if (pin>9999)
            {
                cout <<"Invalid Pin" << endl ;
            }

            else if (pin<=0)
            {
                cout <<"Invalid Pin" << endl ;
            }

            else if (pin<1000)
            {
                cout <<"Invalid Pin" << endl ;
            }

            else if (pin>=1000)
            {
                cout << endl ;
                cout << endl ;
                cout <<"Pin is accepted" << endl ;
                cout << "Thank you for using our system and please come again! ^^" << endl ;
                return ;
            }

            else
            {
                cout << endl ;
                cout << endl ;
                cout <<"Pin is accepted" << endl ;
                cout << "Thank you for using our system and please come again! ^^" << endl ;
                return ;
            }
                cout << "Do you wish to try again?(y/n) : " ;
                cin >> choice2 ;
            }while (choice2== 'y' || choice2== 'Y') ;
            return;
        }
            cout << "Do you wish to try again?(y/n) : " ;
            cin >> choice1 ;
    }while (choice1=='y' || choice1== 'Y') ;
    return;




    }
}


                                            ///Main Function Starts Here

int main()
{
    int a = 0 ;
    while ( intro1[a] != '\0')
    {
        cout << intro1[a] ;
        Sleep (10) ;
        a++;
    }
    Sleep(1500);

    system ("cls");
    cout << intro2;
    Sleep(2000);

    system ("cls");
    cout << intro3;
    Sleep(2000);

    system ("cls");
    cout << intro4;
    Sleep(3000);

    system ("cls");
    cout << intro5;
    Sleep(4000);

    system ("cls");
    system ("color 02");
    complete();
    system ("pause");

    welcome();
    cout<<"\t\t\t\t\tEnter your selection: ";
    cin>>no1;

        //Dine In
        if(no1==1)
        {
            do
            {
                menu();
                cin>>no2;
                bill();
                system("pause");
                again();
            }while(cont=='y'||cont=='Y');

            system("cls");
            sum();
            cout<<"Total amount to pay: RM"<<billSum<<endl;
            payment1();
        }

        //Take Away
        else if(no1==2)
        {
            plastic();
            cout<<"\t\t\t\t\tEnter your selection: ";
            cin>>char1;

            if(char1=='y'||char1=='Y')
            {
                ensure();
                cout<<"\t\t\t\t\tEnter your selection: ";
                cin>>char2;

                if(char2=='y'||char2=='Y')
                {
                    system("cls");
                    system("color 0D");
                    cout<<"\t=========================================================================================================\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\tYou just contributed to environmental pollution :/\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t=========================================================================================================\n";
                    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";

                    system("pause");


                        do
                        {
                            menu();
                            cin>>no2;
                            bill();
                            system("pause");
                            again();

                        }while(cont=='y'||cont=='Y');

                        system("cls");
                        sum();
                        cout<<"Total amount to pay: RM"<<billSum<<endl;
                        payment1();
                }

                else if(char2=='n'||char2=='N')
                {
                    system("cls");
                    system("color E0");
                    cout<<"\t=========================================================================================================\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\tThank you for your contribution towards a better environment!\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                    cout<<"\t=========================================================================================================\n";
                    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";

                    system("pause");

                        do
                        {
                            menu();
                            cin>>no2;
                            bill();
                            system("pause");
                            again();

                        }while(cont=='y'||cont=='Y');

                        system("cls");
                        sum();
                        cout<<"Total amount to pay: RM"<<billSum<<endl;
                        payment1() ;
                }

                else
                {
                    error();
                }

            }

            else if(char1=='n'||char1=='N')
            {
                system("cls");
                cout<<"\t=========================================================================================================\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\tThank you for your contribution towards a better environment!\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t\t|\n";
                cout<<"\t=========================================================================================================\n";
                cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n";
                system("pause");

                    do
                    {
                        menu();
                        cin>>no2;
                        bill();
                        system("pause");
                        again();

                    }while(cont=='y'||cont=='Y');

                    system("cls");
                    sum();
                    cout<<"Total amount to pay: RM"<<billSum<<endl;
                    payment1();
            }

            else
            {
                error();
            }
        }

        //Exit
        else if(no1==3)
        {
            system("cls");
            thank();
            return 0;
        }

        //Invalid Input
        else
        {
            error();
        }

    system ("pause") ;
    return 0;
}
