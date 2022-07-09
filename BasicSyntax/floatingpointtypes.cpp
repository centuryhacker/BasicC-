#include <iostream>
#include<iomanip>



using namespace std;




int main()
{

    float value = 76.4;



    cout<<fixed<<value<<endl;//76.400002
    cout<<scientific<<value<<endl;//7.640000e+001
    cout<<setprecision(20)<<fixed<<value<<endl; //gives you 20 digits
    cout<<setprecision(7)<<fixed<<value<<endl; //gives you 7 digits
    cout<<setprecision(6)<<fixed<<value<<endl; //gives you 6 digits
    cout<<setprecision(5)<<fixed<<value<<endl; //gives you 5 digits
    cout<<setprecision(4)<<fixed<<value<<endl; //gives you 4 digits
    cout<<setprecision(3)<<fixed<<value<<endl; //gives you 3 digits
    cout<<setprecision(2)<<fixed<<value<<endl; //gives you 2 digits
    cout<<setprecision(1)<<fixed<<value<<endl; //gives you 1 digits
    cout<<setprecision(0)<<fixed<<value<<endl; //gives you 0 digits





    return 0;
}
