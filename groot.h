#include<iostream>
#include<ctime>
#include<string.h>
// #include<unistd.h>

#include<chrono>
#include<thread>

using namespace std;

void printString(string x) {
    for (int i= 0; i< x.length(); i++) {
        cout << x[i];
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(500));
        // sleep(1);
    }
}

void printDot (int x) {
    for (int i= 0; i< x; i++) {
        cout << " . ";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(500));
        // sleep(1);
    }
    cout << "!";
}

// int main() {

//     printString("I am Groot");
//     printDot(10);

// return 0;
// }