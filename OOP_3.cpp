#include <iostream>
using namespace std;

class publication
{
    string title;
    float Amount;

public:
    publication()
    {
        title = "ABC";
        Amount = 0.0;
    }

    publication(string title)
    {
        this->title = title;
    }

    void set_data()
    {
        cout << "Enter the Title of Book :" << endl;
        cin >> title;
        cout << "Enter the price of Book :" << endl;
        cin >> Amount;
     //<--------------------------Exception is defined for Price of Book------------------------->
        try
        {
            if (Amount < 0)
            {
                cout << "The Price of Book Cannot be Less than zero" << endl;
                throw(Amount);
            }
            else
            {
                this->Amount = Amount;
            }
        }
        catch (float Amount)
        {
            this->Amount = 0;
        }
    }

    void display_book_data()
    {
        cout << "\n<------------------------------------->" << endl;
        cout << "The Title of Book is :" << title << endl;
        cout << "The Price of Book is :"<< " $ " << Amount << endl;
    }
};

//<--------------------------------Derived class Tape---------------------------------->
class tape : public publication
{
    float playing_time;

public:
    tape()
    {
        playing_time = 0.0;
    }
   
    void set_play_time()
    {
        cout << "Enter the playing time of cassete in minutes: " << endl;
        cin >> playing_time;
        //<----------------------------Exception defined for playing time--------------------------->
        try
        {
            if (playing_time < 0)
            {
                cout << "Playing time cannot be less than Zero" << endl;
                throw(playing_time);
            }

            else
            {
                this->playing_time = playing_time;
            }
        }

        catch (float playing_time)
        {
            this->playing_time = 0;
        }
    }

    void display_time()
    {
        cout << "The Playing time of cassete is: " << playing_time << " minutes" << endl;
        cout << "<------------------------------------->" << endl;
    }
};

//<--------------------------------Derived class Book------------------------------------->
class Book : public publication
{
    int pages_count;

public:
    Book()
    {
        pages_count = 0;
    }

    void set_count()
    {
        cout << "Enter the page count of book" << endl;
        cin >> pages_count;

     //<----------------------Exception definition for Pages_count in Book--------------------->
        try
        {
            if (pages_count < 0)
            {
                cout << "Exception caught , Pages count cannot be less than 0" << endl;
                throw(pages_count);
            }
            else
            {
                this->pages_count = pages_count;
            }
        }

        catch (int pages_count)
        {
            this->pages_count = pages_count;
        }
    }

    //<--------------------------------------------------------------------------------------->

    void display_count()
    {
        cout << "The page count of Book is :" << pages_count << endl;
    }
};

//<-------------------------------------------------------------------------------------------->
// Main Function

int main(int argc, char const *argv[])
{
    Book obj1;
    tape obj2;
    int choice;
    while (true)
    {

        cout << "\n<-------------Choice------------>" << endl;
        cout << "1. Enter information for book." << endl;
        cout << "2. Enter information for tape." << endl;
        cout << "3. Read information for book and cassete." << endl;
        cout << "0. Exit." << endl;
        cout << "Enter your choice :" << endl;
        cin >> choice;
        if (choice == 1)
        {
            obj1.set_data();
            obj1.set_count();
        }
        else if (choice == 2)
        {
            obj2.set_play_time();
        }
        else if (choice == 3)
        {
            obj1.display_book_data();
            obj1.display_count();
            obj2.display_time();
        }
        else if (choice == 0)
        {
            break;
        }
    }
    cout << endl;
    
    return 0;
}
