#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <algorithm>




using namespace std;

 int summa;
 int startsumma =1000;
 int vinst;
int number ;
int choice;
int color;
int n;
bool playAgain =true;
int blackBalls [18] ={2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33 ,35};
int redBalls [18] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
string red ("red");
string black ("black");
string yes ("yes");
string no("no");
string searchForWord[2] = {"yes", "no"};
int randomNumber = 1 + (rand() % 36);



void evenNumberRoll()
{

int randomNumber = 1 + (rand() % 36);



cout << "the ball is " << randomNumber << ".";
if( randomNumber%2 == 0) //:if the remainder of bet divided by 2 is 0 it is true (if it is zero it means it is a number like 2 ,10 ,16, 48 and not 3, 11, 27,99
{



    vinst = summa+startsumma;

    cout << "Even number! You have : "; cout << vinst; cout << " to play for!";
     cout << "\n";
    cout << "Do you want to play again?";
    cout << "\n";
if(yes=="yes")
{
    cin >> yes;
    playAgain =true;
}


}
else {

  vinst = startsumma-summa;
cout << "You lost! Your have :"; cout << vinst; cout << "left";
 cout << "\n";
    cout << "Do you want to play again?";
    cout << "\n";
if(yes=="yes")
{
    cin >> yes;
    playAgain =true;

}

}

}

void oddNumberRoll()
{

int randomNumber = 1 + (rand() % 36);



cout << "the ball is " << randomNumber << ".";
if( randomNumber%2 != 0) //:if the remainder of bet divided by 2 is 0 it is true (if it is zero it means it is a number like 2 ,10 ,16, 48 and not 3, 11, 27,99
{



    vinst = summa+startsumma;

    cout << "Odd number! You have : "; cout << vinst; cout << " to play for!";

     cout << "\n";
    cout << "Do you want to play again?";
    cout << "\n";
if(yes=="yes")
{

    cin >> yes;
    playAgain =true;
}


}
else {

  vinst = startsumma-summa;
cout << "You lost! Your have :"; cout << vinst; cout << "left";
 cout << "\n";
    cout << "Do you want to play again?";
    cout << "\n";
if(yes=="yes")
{

    cin >> yes;
    playAgain =true;

}

}

}

void numberPlay()
{
    cout << "the ball is " << randomNumber << ".";
    if(randomNumber==number)
    {
        cout << "Correct number! You have : "; cout << vinst; cout << " to play for!";
        vinst =summa*10;
        cout << vinst;

         cout << "\n";
    cout << "Do you want to play again?";
    cout << "\n";

    }
    if(yes=="yes")
{

    cin >> yes;
    playAgain =true;
}

 else
    {
        cout << "You lost";
        vinst=summa-summa;
        cout << vinst;

         cout << "\n";
    cout << "Do you want to play again?";
    cout << "\n";
    }
    if(yes=="yes")
{
    cin >> yes;
    playAgain =true;
}
}

int main()
{

srand(time(0));

while (playAgain == true)
   {
           cout << "Bet 100,300 or 500 ";
    cin>> summa;

    while(summa !=100 && summa !=300 && summa !=500)
    {
        cout<< "Choose to play for 100,300 or 500kr.";
        cin >> summa;

    }

    cout << " You chosen to play for ";  cout << summa; cout << "kr.";



    cout << "\n";

    cout << "Do you want to play with color enter 'yes' or number enter 'no'";



cin >> yes || cin >> no;
    if(yes =="yes" )

    {
        cout << "pick a color red or black";
        cout << "\n";

        cin >> red || cin >> black;



        if (red=="red")
        {
            cout<< "You picked red";
            oddNumberRoll();
        }
        else if(black =="black")
        {
            cout << " You picked black";
            evenNumberRoll();
        }

    }
    else if(no =="no")
    {

      cout << " \n";

      cout << "Pick a number between 1-36 ";
    cin >> number;


    cout << "you picked number" << number;
    numberPlay();
    }

   }







}





    //rngQuestion= 1 + (rand() % 36);





    //cout << RandomBall;
