#include <iostream> // for std
#include <unistd.h> //for the sleep function

using namespace std ;

int main() {

double x ;
    cout <<"This is a number guess game ! \n please enter your number : " ;
    cin >> x ; // takes thee user input
    cout <<"Calculating...\n";
    sleep(7); // waits for 7 seconds
    cout <<"Your number is : "<< x <<'\n' ; 
    

    return 0;
}
