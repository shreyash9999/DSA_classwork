/*Consider telephone book database of N clients. Make use of a hash table implementation to
quickly look up clientâ€˜s telephone number. Make use of two collision handling techniques and compare
them using number of comparisons required to find a set of telephone numbers*/
#include <iostream>
using namespace std;

class Hash_class
{
public:
    int hash_table[10];
    int count = 0;

    void initialize()
    {
        for (int i = 0; i < 10; i++)
        {
            hash_table[i] = -1;
        }
    }
    void linear(int key)
    {
        int address = key % 10;
        while (1)
        {
            if (hash_table[address] == -1)
            {
                hash_table[address] = key;
                count++;
                break;
            }
            else
            {
                address++;
                if (address == 10)
                {
                    address = 0;
                }
            }
            if (count == 10)
            {
                cout << "Hash Table if Full ";
                break;
            }
        }
    }
    void quadradtic(int key)
    {
        int address = key % 10;
        while (1)
        {
            if (hash_table[address] == -1)
            {
                hash_table[address] = key;
                count++;
                break;
            }
            else
            {
                for (int j = 0; j < 4; j++)
                {

                    address = (address + (j * j)) % 10;

                    // if (hash_table[address]==-1){
                    //     hash_table[address] = key;
                    //     break;
                    // }

                    if (address == 10)
                    {
                        address = 0;
                    }
                }
            }
            if (count == 10)
            {
                cout << "Hash Table if Full ";
                break;
            }
        }
    }
    int prob = 0;

    void linear_search(int search)
    {
        int address = search % 10;
        while (1)
        {
            if (prob == 10)
            {
                cout << "Not found";
                break;
            }
            if (hash_table[address] == search)
            {
                prob++;
                cout << "Found";
                break;
            }
            else
            {
                address++;
                prob++;
                if (address == 10)
                {
                    address = 0;
                }
            }
        }
    }
    void quadratic_search(int search)
    {
        int address = search % 10;
        while (1)
        {
            if (prob == 10)
            {
                cout << "Hash Table if Full ";
                break;
            }
            if (hash_table[address] == search)
            {
                prob++;
                cout << "Found" << endl;
                break;
            }
            else
            {
                for (int j = 0; j < 4; j++)
                {

                    address = (address + (j * j)) % 10;
                    if (hash_table[address] == search)
                    {
                        cout << "Found";
                        break;
                    }
                    if (address == 10)
                    {
                        address = 0;
                    }
                }
            }
        }
    }
    void display()
    {

        for (int i = 0; i < 10; i++)
        {
            cout << hash_table[i] << " ";
        }
    }
};
int main()
{
    Hash_class obj1, obj2;
    int ch, search;
    long long int key;

    while (true)
    {
        cout << "\n1) Linear\n";
        cout << "2) Quadratic\n";
        // cout << "3) Linear Search\n";
        // cout << "4) Quadratic Search\n";

        cin >> ch;

        switch (ch)
        {
        case 1:
            obj1.initialize();
            for (int i = 0; i < 10; i++)
            {
                cout << "ENTER NUMBER :- ";
                cin >> key;
                obj1.linear(key);
            }
            obj1.display();
            cout << "\nEnter the mobile number to be Searched:- ";
            cin >> search;
            obj1.linear_search(search);
            cout << "\nThe comparison required is :-" << obj1.count;
            break;
        case 2:
            obj2.initialize();
            for (int i = 0; i < 10; i++)
            {
                cout << "ENTER NUMBER :- ";
                cin >> key;
                obj2.quadradtic(key);
            }
            obj2.display();
            cout << "\nEnter the mobile number to be Searched:- ";
            cin >> search;
            obj2.quadratic_search(search);
            cout << "\nThe comparison required is :-" << obj2.count;
            break;

            // case 3:
            //     cout<<"Enter the element to be searched :-";
            //     cin>>search;
            //     obj1.linear_search(search);
            // case 4:
            //     cout<<"Enter the element to be searched :-";
            //     cin>>search;
            //     obj2.quadratic_search(search);

        default:
            cout << "Invalid choice\n";
            break;
        }
    }
}