#include <iostream>
    #include <string>
    #include <ctime>
    #include <time.h>
    #include <algorithm>




    using namespace std;

    int summa; // Här deklarerar jag en variabel av datatypen int som ska hålla i den summan jag satsar.
    int startsumma =1000; // Den här variabeln håller i startsumman och jag har initierat 1000.
    int vinst; // Den här variabeln har jag för att räkna ut resultatet av det jag satsar och vinner/förlorar
    int number ; // Satsar en siffra som sen kommer att jämföras med siffran som slumpas
    bool spelaIgen =true; // Deklarerar en boolean som man använder för starta en spelomgång eller ej.
    string red ("red"); // Variabel som jag använder som input
    string black ("black");
    string yes ("yes");
    string no("no");
    int randomNumber = 1 + (rand() % 36); // Genererar en siffra mellan 1 och 36.



    void evenNumberRoll() // Funktion som kommer slumpa fram en siffra och jämföra om bollen är en jämn siffra.
    {

    int randomNumber = 1 + (rand() % 36); // Genererar en siffra mellan 1 och 36.



    cout << "the ball is " << randomNumber << "."; // Visar vad för boll man fick.
    if( randomNumber%2 == 0) // Om resten på siffran som har delats är lika med noll, dvs ingen siffra blir över så är det här sant.

    {



        vinst = summa+summa+startsumma; // Användaren dubblar sin vinst och den läggs på den totalasumman.

    cout << "You won! You have : "; cout << vinst; cout << " to play for!";
    cout << "\n";
    cout << "Do you want to play again? 'yes'/'no'";

        startsumma=vinst;  // Eftersom startsumman inte ska gå tillbaka till 1000 varje spelomgång.



    }
    else {

      vinst = startsumma-summa; // förlorar användaren så dras det satsade värdet av från den totala summan.

    cout << "You lost! Your have :"; cout << vinst; cout << "left";
    cout << "\n";
    cout << "Do you want to play again? 'yes'/'no'";

        startsumma=vinst; // Eftersom startsumman inte ska gå tillbaka till 1000 varje spelomgång.



    }

      cin >> yes || cin >> no; // Användaren väljer "yes" eller "no" för att spela igen eller stänga av spelet.
        if(yes =="yes" )

        {
           spelaIgen=true; // Boolean blir true och while loopen i main blir sann och kommer köras igen.

        }
        else if(no =="no")
        {


          exit(0); // Anger användaren "no" så stängs spelet av, det går inte att använda return 0; eftersom funktionen är void.
    }


    }

    void oddNumberRoll() // Funktion som kommer jämföra om siffran är ojämn.
    {

    int randomNumber = 1 + (rand() % 36);



    cout << "the ball is " << randomNumber << ".";
    cout << "\n";
    if( randomNumber%2 != 0)       // Om det blir rest över efter siffran har delats så kommmer denna if sats köras.

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

    void numberPlay() // Den här funktionen kallas om användaren väljer att spela på nummer.
    {
        cout << "the ball is " << randomNumber << ".";
        cout << "\n";
        if(randomNumber==number) // Om siffran som har slumpats fram av generatorn stämmer överens med det nummer som användaren har gett som input så körds den här if sastsen
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


    while (spelaIgen == true ) // Den här while loopen ligger runt hela main och kommer påverkas om användaren väljer att spela igen.
       {
     if(startsumma==0) // Här kollar man om det totala saldot är 0, är det helt slut så finns det ingen möjlighet att spela vidare
           {
               cout << ". Sorry you are out of money.";

              return 0; // Finns det inte pengar avslutas programmet.
           }
    cout << "\n";
               cout << "Bet 100,300 or 500 ";
        cin>> summa;

        while(summa >startsumma || summa !=100 && summa !=300 && summa !=500) // Här kollas det om summan man satsar är större en saldot och summan inte är något annat än 100 ,300 eller 500. Stämmer inte det så blir användaren tvungen att inmata summan tills det stämmer.
        {
            cout<< "Choose to play for 100,300 or 500kr.";
            cin >> summa;

        }

        cout << " You chosen to play for ";  cout << summa; cout << "kr.";



        cout << "\n";

        cout << "Do you want to play with color enter 'yes' or number enter 'no'";



    cin >> yes || cin >> no; // Användaren väljer yes för att spela med färg och no för att spela med siffra.
        if(yes =="yes" ) // Stämmer inputen yes med strängen "yes" så kommer man sedan få frågan om att välja färg.

        {
            cout << "pick a color red or black";
            cout << "\n";

            cin >> red || cin >> black;



            if (red=="red")
            {
                cout << "You picked odd number";
                cout << "\n";

                oddNumberRoll(); // Skriver användaren in red som input så kommer detta funktionsanrop kallas.
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
