#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    cout<<"Welcome to the number guessing game!"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Instructions:"<<endl;
    cout<<"You have to guess a number between 1 and 100. You will have limited choices based on the level of game you have selected. Good Luck!"<<endl;
    while (true){
        cout<<"Enter the difficulty level:"<<endl;
        cout<<"1 for easy! \n2 for medium! \n3 for difficult! \n"<<endl;

        //select the level of difficulty by player
        int level;
        cout<<"Enter the number to select the level of game : "<<endl;
        cin>>level;

        //Generating the unknown number
        srand(time(0));
        int unknown_number = 1+ (rand() % 100);
        int number;
        if (level==1){
            cout<<"Welcome to the easy mode! You have 10 choices for finding the number between 1 and 100."<<endl;
            int choiceleft=10;
            for(int i=1;i<=10;i++){
                cout<<"Enter  the number: ";
                cin>>number;

                if(number==unknown_number){
                    cout<<"
                }
            }
        }
    }
}
