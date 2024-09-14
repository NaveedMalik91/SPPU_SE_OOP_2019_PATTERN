#include<iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string, int> mpp;
    mpp.insert({"Andaman and Nicobar Islands", 0.42});
    mpp.insert({"Andhra Pradesh", 53});
    mpp.insert({"Arunachal Pradesh", 1.5});
    mpp.insert({"Assam", 34.3});
    mpp.insert({"Bihar", 122});
    mpp.insert({"Chandigarh", 1.1});
    mpp.insert({"Chhattisgarh", 29.7});
    mpp.insert({"Dadra and Nagar Haveli and Daman and Diu", 0.78});
    mpp.insert({"Delhi", 18.9});
    mpp.insert({"Goa", 1.5});
    mpp.insert({"Gujarat", 63.8});
    mpp.insert({"Haryana", 28.1});
    mpp.insert({"Himachal Pradesh", 7.4});
    mpp.insert({"Jammu and Kashmir", 13.7});
    mpp.insert({"Jharkhand", 38});
    mpp.insert({"Karnataka", 69});
    mpp.insert({"Kerala", 35});
    mpp.insert({"Ladakh", 0.29});
    mpp.insert({"Lakshadweep", 0.064});
    mpp.insert({"Madhya Pradesh", 82.2});
    mpp.insert({"Maharashtra", 123});
    mpp.insert({"Manipur", 3});
    mpp.insert({"Meghalaya", 3.3});
    mpp.insert({"Mizoram", 1.2});
    mpp.insert({"Nagaland", 2.3});
    mpp.insert({"Odisha", 45});
    mpp.insert({"Puducherry", 1.4});
    mpp.insert({"Punjab", 30.8});
    mpp.insert({"Rajasthan", 82.3});
    mpp.insert({"Sikkim", 0.61});
    mpp.insert({"Tamil Nadu", 77});
    mpp.insert({"Telangana", 39.3});
    mpp.insert({"Tripura", 4});
    mpp.insert({"Uttar Pradesh", 240});
    mpp.insert({"Uttarakhand", 11.1});
    mpp.insert({"West Bengal", 99});
    char c;
    do
    {
        string search_state;
        cout<<"Enter the name of state"<<endl;
        getline(cin,search_state);
        //cin.ignore();

        //Iterator to iterate over all states
        map<string, int>::iterator itr;
        for ( itr = mpp.begin(); itr != mpp.end(); itr++)
        {
            if (search_state == itr->first)
            {
                cout<<"The population of "<<search_state<<" is "<<itr->second<<" Millions"<<endl;
            }
        }
        cout<<"State Enterred not found"<<endl;
        cout<<"Do you wish search another state"<<endl;
        cin>>c;
        cin.ignore();
    } while (c == 'y'|| c == 'Y');
    mpp.clear();
    return 0;
}

