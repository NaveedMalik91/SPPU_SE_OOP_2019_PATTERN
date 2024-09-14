#include <iostream>
using namespace std;
template <class T>
class Sort
{
public:
    //<-----------------Selection Sort Function----------------->
    void selection_sort(T arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    T temp = arr[i]; // T denotes that temp is generic variable
                    arr[i] = arr[j]; // which can store integer value as well as floating values
                    arr[j] = temp;
                }
            }
        }
    }

    //<-----------------Array Display Function----------------->
    void Display_Arr(T arr[], int size)
    {
        cout << "-------------------------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
        cout << "-------------------------" << endl;
        cout<<endl;
    }
   
};

int main()
{
    while (true)
    {
        cout << "----------Menu-----------" << endl;
        cout << "1. Sort interger array" << endl;
        cout << "2. Sort floating array" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            int number;
            cout << "Enter the Size of Interger Array" << endl;
            cin >> number;
            int arr[number]; // Interger array defined
            // interger Array creation
            for (int i = 0; i < number; i++)
            {
                cout << "Enter the element at index:" << i << endl;
                cin >> arr[i];
            }
            // template class object
            Sort<int> obj;
            cout<<endl;
            cout << "Before Sorting:" << endl;
            obj.Display_Arr(arr, number);
            cout << "After Sorting:" << endl;
            obj.selection_sort(arr, number);
            obj.Display_Arr(arr, number);
        }

        else if (choice == 2)
        {
            int number;
            cout << "Enter the Size of Floating Array" << endl;
            cin >> number;
            float arr[number]; // Floating array defined
            // Floating Array creation
            for (int i = 0; i < number; i++)
            {
                cout << "Enter the element at index:" << i << endl;
                cin >> arr[i];
            }
            // template class object
            Sort<float> obj;
            cout<<endl;
            cout << "Before Sorting:" << endl;
            obj.Display_Arr(arr, number);
            cout << "After Sorting:" << endl;
            obj.selection_sort(arr, number);
            obj.Display_Arr(arr, number);
        }
        else if (choice == 3)
        {
            cout << "invalid choice!!!!" << endl;
            break;
        }
    }
    return 0;
}
