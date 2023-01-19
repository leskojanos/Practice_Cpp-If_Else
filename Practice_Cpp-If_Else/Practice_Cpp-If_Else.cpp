#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    char choice{};
    bool correct_choice = false;

    do
    {
        correct_choice = true;
        cout << "Please make a selection of the movie you wish to see" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "A. Star Wars" << endl;
        cout << "B. Magnolia" << endl;
        cout << "C. Stuart Little" << endl;
        cout << "D. Superman" << endl;

        cout << "Enter your selection:" << endl;

        cin >> choice;

        if (choice == 'A' || choice == 'a')
        {
            cout << "The price for  movie Star Wars is $120" << endl;
        }
        else if (choice == 'B' || choice == 'b')
        {
            cout << "The price for the movie Magnolia is $15" << endl;
        }
        else if (choice == 'C' || choice == 'c')
        {
            cout << "The price for the movie Stuart Little is $25" << endl;
        }
        else if (choice == 'D' || choice == 'd')
        {
            correct_choice = false;
            cout << "The price for movie Superman is $12" << endl;
        }
        else
        {
            correct_choice = false;
            cout << "Wrong selection, please try again" << endl;
            choice = 'N';
        }
        if (correct_choice)
        {
            cout << "Do You want to checkout Y/N" << endl;
            cin >> choice;
        }
    } while (choice == 'N' || choice == 'n');

    if (correct_choice)
    {
        cout << "Please collect yout ticket at the box office. Thank you!" << endl;
    }

}