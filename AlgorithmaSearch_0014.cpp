#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimun 1 dan maximum 20 elements.\n\n";
    }
}
void LinearSearch()
{
    char ch;
    int ctr;
    int item;
    do
    {
        cout << "\nEnter the element you want to search: "; //step 1
        cin >> item;

        ctr = 0;
        i = 0;  //step 2
        while (i < n)  //step 3
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at posiition " << (i + 1) << endl; //step 6
                break;
            }
            i++; //step 4
        }
        if (i == n) //step 5
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "\mContinue search (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}
void display()
{
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    input();
    LinearSearch();
    display();
}