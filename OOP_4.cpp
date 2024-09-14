#include <iostream>
#include <fstream>
using namespace std;
class File
{
public:
    //<-------------------Read Function------------------->
    void read_file()
    {
        ifstream file;
        file.open("MY_File.txt", ios::in);
        if (!file)
        {
            cout << "The file you trying to open Doesn't Exist" << endl;
            return;
        }
        string str;
        cout << "The data written in file is:" << endl;
        while (!file.eof())
        {
            getline(file, str);
            cout << str << endl;
        }
        file.close();
    }
    //<-------------------Write Function------------------->
    void write_file()
    {
        ofstream file;
        file.open("MY_File.txt", ios::out);
        string str;
        cout << "Enter the Text you want to store" << endl;
        getline(cin, str);
        file << str;
        file.close();
    }

    //<-------------------Append Function------------------->
    void Append_data()
    {
        ofstream file;
        file.open("MY_File.txt", ios::app);
        file << endl; // it will add a new line in a file
        string str;
        getline(cin, str);
        file << str;
        file.close();
    }
    //<-------------------Clear Function------------------->
    void clear_data()
    {
        ofstream file;
        file.open("MY_File.txt", ios::out);
        string str = "";
        file << str;
        cout << "File has been cleared" << endl;
        file.close();
    }
};

int main(int argc, char const *argv[])
{
    cout << "<---------Menu---------->" << endl;
    File obj;
    while (true)
    {
        cout << "1. Write data into file" << endl;
        cout << "2. Read data into file" << endl;
        cout << "3. Append data into file" << endl;
        cout << "4. Clear data from file file" << endl;
        cout << "5.Exit" << endl;

        int choice;
        cin >> choice;
        cin.ignore();
        if (choice == 1)
        {
            obj.write_file();
        }

        else if (choice == 2)
        {
            obj.read_file();
        }
        else if (choice == 3)
        {
            obj.Append_data();
        }
        else if (choice == 4)
        {
            obj.clear_data();
        }
        else if (choice == 5)
        {
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
