#include <iostream>
    #include <string>
    #include <ctime>
    #include <time.h>
    #include <algorithm>




    using namespace std;

    int summa; // H�r deklarerar jag en variabel av datatypen int som ska h�lla i den summan jag satsar.
    int startsumma =1000; // Den h�r variabeln h�ller i startsumman och jag har initierat 1000.
    int vinst; // Den h�r variabeln har jag f�r att r�kna ut resultatet av det jag satsar och vinner/f�rlorar
    int number ; // Satsar en siffra som sen kommer att j�mf�ras med siffran som slumpas
    bool spelaIgen =true; // Deklarerar en boolean som man anv�nder f�r starta en spelomg�ng eller ej.
    string red ("red"); // Variabel som jag anv�nder som input
    string black ("black");
    string yes ("yes");
    string no("no");
    int randomNumber = 1 + (rand() % 36); // Genererar en siffra mellan 1 och 36.



    void evenNumberRoll() // Funktion som kommer slumpa fram en siffra och j�mf�ra om bollen �r en j�mn siffra.
    {

    int randomNumber = 1 + (rand() % 36); // Genererar en siffra mellan 1 och 36.



    cout << "the ball is " << randomNumber << "."; // Visar vad f�r boll man fick.
    if( randomNumber%2 == 0) // Om resten p� siffran som har delats �r lika med noll, dvs ingen siffra blir �ver s� �r det h�r sant.

    {



        vinst = summa+summa+startsumma; // Anv�ndaren dubblar sin vinst och den l�ggs p� den totalasumman.

    cout << "You won! You have : "; cout << vinst; cout << " to play for!";
    cout << "\n";
    cout << "Do you want to play again? 'yes'/'no'";

        startsumma=vinst;  // Eftersom startsumman inte ska g� tillbaka till 1000 varje spelomg�ng.



    }
    else {

      vinst = startsumma-summa; // f�rlorar anv�ndaren s� dras det satsade v�rdet av fr�n den totala summan.

    cout << "You lost! Your have :"; cout << vinst; cout << "left";
    cout << "\n";
    cout << "Do you want to play again? 'yes'/'no'";

        startsumma=vinst; // Eftersom startsumman inte ska g� tillbaka till 1000 varje spelomg�ng.



    }

      cin >> yes || cin >> no; // Anv�ndaren v�ljer "yes" eller "no" f�r att spela igen eller st�nga av spelet.
        if(yes =="yes" )

        {
           spelaIgen=true; // Boolean blir true och while loopen i main blir sann och kommer k�ras igen.

        }
        else if(no =="no")
        {


          exit(0); // Anger anv�ndaren "no" s� st�ngs spelet av, det g�r inte att anv�nda return 0; eftersom funktionen �r void.
    }


    }

    void oddNumberRoll() // Funktion som kommer j�mf�ra om siffran �r oj�mn.
    {

    int randomNumber = 1 + (rand() % 36);



    cout << "the ball is " << randomNumber << ".";
    cout << "\n";
    if( randomNumber%2 != 0)       // Om det blir rest �ver efter siffran har delats s� kommmer denna if sats k�ras.

    {



        vinst = summa+summa+startsumma;


        cout << "You won! You have : "; cout << vinst; cout << " to play for!";
        cout << "\n";
        cout << "Do you want to play again? 'yes'/'no'";


        startsumma=vinst;



    }
    else {

      vinst = startsumma-summa;
    cout << "You lost! Your have :"; cout << vinst; cout << "left";
    cout << "\n";
    cout << "Do you want to play again? 'yes'/'no'";
        startsumma=vinst;


    }

    cin >> yes || cin >> no;
        if(yes =="yes" )

        {
           spelaIgen=true;

        }
        else if(no =="no")
        {


          exit(0);



    }


    }

    void numberPlay() // Den h�r funktionen kallas om anv�ndaren v�ljer att spela p� nummer.
    {
        cout << "the ball is " << randomNumber << ".";
        cout << "\n";
        if(randomNumber==number) // Om siffran som har slumpats fram av generatorn st�mmer �verens med det nummer som anv�ndaren har gett som input s� k�rds den h�r if sastsen
        {

            cout << "\n";
            vinst =summa*10 + startsumma;
            cout << "Correct number! You have : "; cout << vinst; cout << " to play for!";
            cout << "\n";
            cout << "Do you want to play again? 'yes'/'no'";


        startsumma=vinst;

        }



     else
        {
             cout << "\n";
            vinst=startsumma-summa;
                startsumma=vinst;
           cout << "You lost! Your have :"; cout << vinst; cout << "left";
           cout << "\n";
           cout << "Do you want to play again? 'yes'/'no'";





        }

    cin >> yes || cin >> no;
        if(yes =="yes" )

        {
           spelaIgen=true;

        }
        else if(no =="no")
        {


          exit(0);



    }
    }

    int main()
    {

    srand(time(0));


    while (spelaIgen == true ) // Den h�r while loopen ligger runt hela main och kommer p�verkas om anv�ndaren v�ljer att spela igen.
       {
     if(startsumma==0) // H�r kollar man om det totala saldot �r 0, �r det helt slut s� finns det ingen m�jlighet att spela vidare
           {
               cout << ". Sorry you are out of money.";

              return 0; // Finns det inte pengar avslutas programmet.
           }
    cout << "\n";
               cout << "Bet 100,300 or 500 ";
        cin>> summa;

        while(summa >startsumma || summa !=100 && summa !=300 && summa !=500) // H�r kollas det om summan man satsar �r st�rre en saldot och summan inte �r n�got annat �n 100 ,300 eller 500. St�mmer inte det s� blir anv�ndaren tvungen att inmata summan tills det st�mmer.
        {
            cout<< "Choose to play for 100,300 or 500kr.";
            cin >> summa;

        }

        cout << " You chosen to play for ";  cout << summa; cout << "kr.";



        cout << "\n";

        cout << "Do you want to play with color enter 'yes' or number enter 'no'";



    cin >> yes || cin >> no; // Anv�ndaren v�ljer yes f�r att spela med f�rg och no f�r att spela med siffra.
        if(yes =="yes" ) // St�mmer inputen yes med str�ngen "yes" s� kommer man sedan f� fr�gan om att v�lja f�rg.

        {
            cout << "pick a color red or black";
            cout << "\n";

            cin >> red || cin >> black;



            if (red=="red")
            {
                cout << "You picked odd number";
                cout << "\n";

                oddNumberRoll(); // Skriver anv�ndaren in red som input s� kommer detta funktionsanrop kallas.
            }
            else if(black =="black")
            {
                cout << "You picked even number";
                cout << "\n";

                evenNumberRoll();
            }

        }
        else if(no =="no")
        {

          cout << " \n";

          cout << "Pick a number between 1-36 ";
        cin >> number;



        numberPlay();
        }

       }







    }
