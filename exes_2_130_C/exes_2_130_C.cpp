
#include <iostream>
using namespace std;

int kevin[26]; 
int n; 
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n >= 0) && (n <= 26))
            break;
        else
            cout << "\nArray should have minimum 0 and maximum 26 elements.\n\n";
    }


    cout << "\n=========================\n";
    cout << "Enter array elements \n";
    cout << "===========================\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> kevin[i];
    }
}

void LinearSearch()
{
    char ch;
    int ctr; 

    do
    {
        cout << "\nEnter the elements you want to search: "; 
        int item;
        cin >> item;

        ctr = 0;
        for (i = 0; i < n; i++)         
        {
            ctr++;
            if (kevin[i] == item)      
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }

        if (i == n)
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}


int main()
{
    input();
    LinearSearch();

}

