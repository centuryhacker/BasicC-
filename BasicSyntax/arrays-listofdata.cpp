#include <iostream>
using namespace std;




int main()
{

    int values[3];
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;


    cout<<values[0]<<endl;
    cout<<values[1]<<endl;
    cout<<values[2]<<endl;

    cout<<"Arrays of double" <<endl;
    cout<<"================="<<endl;


    double numbers[4] = {4.5, 2.3, 7.2, 8.1}; //double numbers[]; //empty array does it dynamically



    cout<<numbers[0]<<endl; //4.5
    cout<<numbers[1]<<endl; //2.3
    cout<<numbers[2]<<endl; //7.2
    cout<<numbers[3]<<endl; //8.1
    cout<<numbers[4]<<endl; //gets a garbage number outside the range (bad idea)

    for(int i =0; i < 4;i++)
    {
        cout<<"Element of index " <<i<< ": "<<numbers[i]<<endl;
    }

    cout<<endl<<"Initializing with zero values"<<endl;
    cout<<"==================================="<<endl;


    int numberArray[8] = {}; //same as int numberArray[8];



    for(int i =0; i < 8; i++)
    {
        cout<<"Element of index "<<numberArray[i]<<endl;// eight 0 for all the index values.

    }

    cout<<endl<<"Initializing with strings"<<endl;
    cout<<endl<<"================="<<endl;


    ///Array of strings
    //string texts[] = {}; //same as string text[];

    string texts[] = {"apple", "banana", "orange"};


    for(int i = 0; i < 3; i++)
    {
        cout<<"Element at index "<<i << ": "<<i<<endl;

    }

    cout<<endl<<endl<<endl;

    for(int i = 0; i < 3; i++)
    {

        cout<<"Element at index "<<i << ": "<<texts[i]<<endl;

    }

    return 0;
}
