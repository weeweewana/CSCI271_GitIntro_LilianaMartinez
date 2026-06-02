//Week 3 Lab Zodiac Program CSCI-271 Liliana Martinez

#include <iostream>
#include <string>
using namespace std;

int main() {
    //declaring our variables
    string fullName, zodiac;
    int birthMonth, birthDay;

    //initializing (fullName)
    cout << "Enter full name: ";
    getline(cin, fullName);

    //initializing (birthMonth)
    cout << "Enter birth month (1-12): ";
    cin >> birthMonth;

    //initializing (birthDay)
    cout << "Enter birth day: ";
    cin >> birthDay;

    //if else to determine zodiac sign

        //aires
    if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 4 && birthDay <= 19))

        zodiac = "Aries";

        //Taurus
    else if ((birthMonth == 4 && birthDay >= 20) || (birthMonth == 5 && birthDay <= 20))

        zodiac = "Taurus";

        //Gemini
    else if ((birthMonth == 5 && birthDay >= 21) || (birthMonth == 6 && birthDay <= 20))

        zodiac = "Gemini";

        //Cancer
    else if ((birthMonth == 6 && birthDay >= 21) || (birthMonth == 7 && birthDay <= 22))

        zodiac = "Cancer";

        //Leo
    else if ((birthMonth == 7 && birthDay >= 23) || (birthMonth == 8 && birthDay <= 22))

        zodiac = "Leo";

        //Virgo
    else if ((birthMonth == 8 && birthDay >= 23) || (birthMonth == 9 && birthDay <= 22))

        zodiac = "Virgo";

        //Libra
    else if ((birthMonth == 9 && birthDay >= 23) || (birthMonth == 10 && birthDay <= 22))

        zodiac = "Libra";

        //Scorpio
    else if ((birthMonth == 10 && birthDay >= 23) || (birthMonth == 11 && birthDay <= 21))

        zodiac = "Scorpio";

        //Sagittarius
    else if ((birthMonth == 11 && birthDay >= 22) || (birthMonth == 12 && birthDay <= 21))

        zodiac = "Sagittarius";

        //Capricorn
    else if ((birthMonth == 12 && birthDay >= 22) || (birthMonth == 1 && birthDay <= 19))

        zodiac = "Capricorn";

        //Aquarius
    else if ((birthMonth == 1 && birthDay >= 20) || (birthMonth == 2 && birthDay <= 18))

        zodiac = "Aquarius";

        //Pisces
    else if ((birthMonth == 2 && birthDay >= 19) || (birthMonth == 3 && birthDay <= 20))
        zodiac = "Pisces";

    //displying data
    cout << "Hello " << fullName << "! Your zodiac sign is: " << zodiac << endl;

    return 0;
}
