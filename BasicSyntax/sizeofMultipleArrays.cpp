#include <iostream>

using namespace std;




int main()
{

    string animals[][3] = //[][3] in this problem is same as [2][3]
    {
         {"fox", "dog", "cat"},
         { "mouse", "squirriel", "parrot"}



    };



    cout<<sizeof(string)<<endl;//24
    cout<<sizeof(animals)<<endl;//144
    cout<<sizeof(animals[0])<<endl;//72

    for(int i = 0; i < sizeof(animals)/sizeof(animals[0]);i++)
    {
        for(int j = 0; j < sizeof(animals[0])/sizeof(string); j++)//unsigned int if it doesn't work.
            {
                cout<<animals[i][j] << " "<<flush;
            }
            cout<<endl;

    }



    return 0;
}

