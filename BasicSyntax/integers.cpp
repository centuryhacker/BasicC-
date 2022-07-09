#include <iostream>


using namespace std;




int main()
{

    int value = 11111111111111; //you will get an overflow
    int value2 = 54656;
    long int value3 = 11111111111111; //can handle the overflow problem by allocating more memory.

    unsigned int value4 = 9090;




    cout<<value<<endl;
    cout<<value2<<endl;
    cout<<value3<<endl;

    cout<<INT_MAX<<endl; //#include<limits> might be needed if doesn't work// INT_MAX or INT_MIN
    cout<<INT_MIN<<endl; //#include<limits> might be needed if doesn't work// INT_MAX or INT_MIN

    cout<<value4<<endl;



    cout<<sizeof(char)<<endl; ///size of data types (1 byte)
    cout<<sizeof(short)<<endl; ///size of data types (2 bytes)
    cout<<sizeof(int)<<endl; ///size of data types (4 bytes)
    cout<<sizeof(float)<<endl; ///size of data types (4 bytes)
    cout<<sizeof(long)<<endl; ///size of data types (4 bytes)
    cout<<sizeof(double)<<endl; ///size of data types(8 bytes)
    cout<<sizeof(long long)<<endl; ///size of data types (8 bytes)
    cout<<sizeof(long double)<<endl; ///size of data types (12 bytes)





    return 0;
}
