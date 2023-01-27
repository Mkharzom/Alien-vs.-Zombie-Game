#include <iostream>
#include "pf/helper.h"

using namespace std;
void game_initializer();
void new_setting(string) ;
void print_setting() ;
// Global Variables

int board_row = 5 ;
int board_col = 9 ;
int zombi_count = 1 ;

////////////////////////

int main()
{
    game_initializer();
    pf::ClearScreen();


    return 0;
}

void game_initializer(){

    string state ;
    cout<< "Default Game Setting"<< endl;
    cout<< "--------------------"<< endl ;
    print_setting() ;
    cout<< "Do you wish to change Game setting (Y/N) => " ;
    cin >> state ;
    new_setting(state) ;

}
void new_setting(string st){
    string state = st ;
    if( state == "Y"){
        pf::ClearScreen();
        cout << "Board Setting" << endl ;
        cout << "-------------" << endl ;
        cout<< endl;
        do{
            cout<< "Enter new Board Rows and must be odd Number      : " ;
            cin >> board_row ;
        }while(board_row%2 == 0);

        do{
            cout<< "Enter new Board Columns and must be odd Number   : " ;
            cin >> board_col ;
        }while(board_col%2 == 0);

        cout<< "Enter new Zombie Count     : " ;
        cin >> zombi_count ;
        cout << endl <<"Setting updated ......." << endl << endl;
    }
    cout << endl ;
    pf::Pause();

}
void print_setting(){

    cout<< "Board Rows       : " << board_row << endl;
    cout<< "Board Columns    : " << board_col << endl;
    cout<< "Zombie Count     : " << zombi_count << endl << endl ;
}
