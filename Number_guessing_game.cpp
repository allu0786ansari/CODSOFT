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
        cout<<"1 for easy! \n2 for medium! \n3 for difficult! \n 0 for ending the game"<<endl;

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
                    cout<<"Well Played! You won, "<<number <<"is the unknown number"<<endl;
                    cout<<"\t\t\t Thanks for playing..."<<endl;
                    cout<<"Play the game again with us!"<<endl;
                    break;
                } else{
                    cout<<"Nope, "<<number<<" is not the right number"<<endl;
                    if(number >unknown_number){
                        cout<<"The unknown number is smaller than your number"<<endl;
                    }
                    else{
                        cout<<"The unknown number is greater than your number"<<endl;
                    }
                    choiceleft--;
                    cout<<choiceleft<<" choice left."<<endl;
                    if(choiceleft==0){
                        cout<<"You couldn't find the unknown number, it was "<<number<<", You lose!"<<endl;
                    }

                }
            }
        }
        //difficulty level medium
        else if (level==2){
            cout<<"Welcome to medium mode! You have 5 choices for finding the number between 1 and 100."<<endl;
            int choiceleft=5;
            for(int i=1;i<=5;i++){
                cout<<"Enter  the number: ";
                cin>>number;

                if(number==unknown_number){
                    cout<<"Well Played! You won, "<<number <<"is the unknown number"<<endl;
                    cout<<"\t\t\t Thanks for playing..."<<endl;
                    cout<<"Play the game again with us!"<<endl;
                    break;
                } else{
                    cout<<"Nope, "<<number<<" is not the right number"<<endl;
                    if(number >unknown_number){
                        cout<<"The unknown number is smaller than your number"<<endl;
                    }
                    else{
                        cout<<"The unknown number is greater than your number"<<endl;
                    }
                    choiceleft--;
                    cout<<choiceleft<<" choice left."<<endl;
                    if(choiceleft==0){
                        cout<<"You couldn't find the unknown number, it was "<<number<<", You lose!"<<endl;
                    }

                }
            }
        }
        //difficulty level hard
        else if (level==3){
            cout<<"Welcome to difficult mode! You have 3 choices for finding the number between 1 and 100."<<endl;
            int choiceleft=3;
            for(int i=1;i<=3;i++){
                cout<<"Enter  the number: ";
                cin>>number;

                if(number==unknown_number){
                    cout<<"Well Played! You won, "<<number <<" is the unknown number"<<endl;
                    cout<<"\t\t\t Thanks for playing..."<<endl;
                    cout<<"Play the game again with us!"<<endl;
                    break;
                } else{
                    cout<<"Nope, "<<number<<" is not the right number"<<endl;
                    if(number >unknown_number){
                        cout<<"The unknown number is smaller than your number"<<endl;
                    }
                    else{
                        cout<<"The unknown number is greater than your number"<<endl;
                    }
                    choiceleft--;
                    cout<<choiceleft<<" choice left."<<endl;
                    if(choiceleft==0){
                        cout<<"You couldn't find the unknown number, it was "<<number<<", You lose!"<<endl;
                    }

                }
            }
        }
        else if(level==0){
            exit(0);
        }
        else{
            cout<<"Wrong Choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }
    }
    return 0;
}
