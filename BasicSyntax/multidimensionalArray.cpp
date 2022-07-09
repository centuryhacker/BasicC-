#include <iostream>
using namespace std;




int main()
{
    //2D dimensional array
    //[rows][columns]
    string animals[2][3] =
    {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };


    for(int i = 0; i < 2; i++) //i < 2 because we have 2 rows in the outer array
    {
        for(int j = 0; j < 3; j++) // j < 3 because we have 3 columns in the inner array
        {
            cout<<animals[i][j]<<" "<<flush; //[i][j] . [i] specifies the position in the outer array and [j] specifies the inner array.
        }
        cout<<endl; //this creates gap first and second row.

    }
    return 0;
}
