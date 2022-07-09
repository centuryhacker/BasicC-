#include <iostream>
#include<iomanip>



using namespace std;




int main()
{
    float value1 = 1.1;


    if(value1 == 1.1)
    {
        cout<<"equals"<<endl; ///not equal
    }

    else
    {
        cout<<"not equal"<<endl;
    }

    cout<<setprecision(10)<<value1<<endl; /// 10 digits

    return 0;
}
