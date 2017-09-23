#include <iostream>
#include <cstdlib>
#include <ctime>




using namespace std;


int main ()

{




        int randomNumber;
        int input;
        int mistake;
        int mistake2;
        srand (time(NULL) );
        randomNumber = rand() % 10+1;



        cout<<endl;
        cout<< "Welcome to Number Guessing Game"<<endl;
        cout<<endl;
        cout<<"Cuess the computer's number by entering a number between 1 and 10"<<endl;
        cin>> input;


        mistake = randomNumber - input;
        mistake2 = input - randomNumber;


            if (input > 10 )
            {
            cout<<"Your choice is out of the range, Please try again"<<endl;
            }
            
            else if (randomNumber == input)
            {
            cout<<"You, guessed correctly! You win!"<<endl;
            }

            else if (input < randomNumber)
            {
            cout<<"You were off by "<< mistake<<"."<<"sorry, you lose."<<endl;
            }

            else if (randomNumber < input) 
            {
            cout<<"You were off by "<< mistake2<<"."<<"sorry, you lose."<<endl;
            }


            return 0;

}
