#include <iostream>
using namespace std;

int main()
{
    //declare variable
    int numberOfDogs = 5;
    int numberOfCats = 7;
    int totalNumbOfAnimals = numberOfCats + numberOfDogs;



    //output num of animals (old)
    cout<<"Old number of dogs "<<numberOfDogs<<endl;
    cout<<"Old number of cats "<<numberOfCats<<endl;
    cout<<"Total number of animals "<<totalNumbOfAnimals<<endl;



    //new math
    numberOfCats = numberOfCats + 1;
    numberOfDogs++; //alternative to (numberOfDogs = numberOfDogs + 1)
    int newTotal = numberOfCats + numberOfDogs;


     //output num of animals (new)
    cout<<"New number of dogs "<<numberOfDogs<<endl;
    cout<<"New number of cats "<<numberOfCats<<endl;
    cout<<"Total number of animals "<<newTotal<<endl;



    return 0;
}
