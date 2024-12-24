#include <iostream>
using namespace std;

class TimeConverter {
public:
    void secondsToHHMMSS() {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }

    void HHMMSSToSeconds() {
        int hours, minutes, seconds;
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;

        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter converter;
    int choice;

    cout << "Time Converter Menu:" << endl;
    cout << "1. Convert seconds to HH:MM:SS" << endl;
    cout << "2. Convert HH:MM:SS to seconds" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        converter.secondsToHHMMSS();
    } else if (choice == 2) {
        converter.HHMMSSToSeconds();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

