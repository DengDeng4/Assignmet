#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int timer = 0;

    while (true) {
        // Red light
        cout << "Red light" << endl;
        this_thread::sleep_for(chrono::seconds(5));
        timer += 5;

        // Yellow light
        cout << "Yellow light" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        timer += 2;

        // Green light
        cout << "Green light" << endl;
        this_thread::sleep_for(chrono::seconds(5));
        timer += 5;

        // Switch the light color based on the timer
        switch (timer % 12) {
            case 0:
                // Red light
                break;
            case 5:
                // Yellow light
                break;
            case 10:
                // Green light
                break;
            default:
                // Unknown state
                cout << "Unknown traffic light state" << endl;
                break;
        }
    }

    return 0;
}