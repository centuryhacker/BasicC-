#include <iostream>

using namespace std;


void showMenu()
{
    cout<<"1. Search"<<endl;
    cout<<"2. View Record"<<endl;
    cout<<"3. Quit"<<endl;

}


int getInput()//Complete self-contains
{
    cout<<"Enter selection: "<<flush;

    int input;
    cin>>input;

    return input;

}

void processSelection(int selection) //int is declared as "selection" and throw it down the shoot.
{
    switch(selection)
    {
    case 1:
        cout<<"Searching..."<<endl;
        break;

    case 2:
        cout<<"Viewing..."<<endl;
        break;

    case 3:
        cout<<"Quitting..."<<endl;
        break;

    default:
         cout<<"Please select an item from the menu."<<endl;
        break;
    }

}
int main()
    {

    showMenu();
    int selection = getInput(); //processSelection is set equal to int select. //however, processSelection() remains.
    processSelection(selection); //variable is passed and received




    return 0;
}

