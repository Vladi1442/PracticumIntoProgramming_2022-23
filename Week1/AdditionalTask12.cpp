#include <iostream>

int main() {

    // Да се напише програма, която чете от конзолата брой секунди и изчислява колко дни, часове, минути и секунди са.

    // 533628

    int seconds;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    int day = 86400;
    int hour = 3600;
    int minutes = 60;

    int secondsToDays = seconds / day;
    std::cout << secondsToDays << " days, ";
    int seconds1 = seconds - (secondsToDays * day);
    int secondsToHours = seconds1 / hour;
    std::cout << secondsToHours << " hours, ";
    int seconds2 = seconds1 - (secondsToHours * hour);
    int secondsToMinutes = seconds2 / minutes;
    std::cout << secondsToMinutes << " minutes and ";
    int seconds3 = seconds2 - (secondsToMinutes * minutes);
    std::cout << seconds3 << " seconds." << std::endl;

	return 0;
}