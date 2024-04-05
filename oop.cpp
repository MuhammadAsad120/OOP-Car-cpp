#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    char direction;
    float distance;

public:
    // Constructor
    Car(string carName, char direc, float dis)
    {
        name = carName;
        direction = direc;
        distance = dis;
    }

    // Function to turn right
    char turnRight()
    {
        if (direction == 'n')
        {
            direction = 'e';
        }
        else if (direction == 'e')
        {
            direction = 's';
        }
        else if (direction == 's')
        {
            direction = 'w';
        }
        else if (direction == 'w')
        {
            direction = 'n';
        }
        return direction;
    }

    // Function to turn to any side
    char turnAnySide(char n)
    {
        direction = n;
        return direction;
    }

    // Function to change distance
    float changeDistance(float dis)
    {
        distance = dis;
        return distance;
    }

    // Function to display car data
    void show()
    {
        cout << "NAME = " << name << endl;
        cout << "DIRECTION = " << direction << endl;
        cout << "DISTANCE = " << distance << endl;
    }
};

// Function to display menu
void menu(Car &c)
{
    int n;
    char a;
    float b;
    do
    {
        cout << "----Welcome to Mohib Menu----" << endl;
        cout << "Want changes in code? Press 1 " << endl;
        cout << "Press 2 for data" << endl;
        cout << "For exit press 0 " << endl;
        cin >> n;
        switch (n)
        {
        case 0:
            return;
        case 2:
            c.show();
            break;
        case 1:
            cout << "Press 2 for direction" << endl;
            cout << "Press 3 for distance" << endl;
            cin >> n;
            if (n == 2)
            {
                cout << "Press 1 for moving car to right" << endl;
                cout << "Press 2 for input direction" << endl;
                cin >> n;
                if (n == 1)
                {
                    c.turnRight();
                }
                else if (n == 2)
                {
                    cout << "Enter your direction" << endl;
                    cin >> a;
                    c.turnAnySide(a);
                }
            }
            else if (n == 3)
            {
                cout << "Enter New distance : " << endl;
                cin >> b;
                c.changeDistance(b);
            }
            break;
        }
    } while (true);
}

int main()
{
    string name;
    cout << "Enter the name of the car = ";
    cin >> name;

    char dir;
    cout << "Enter the direction of the car = ";
    cin >> dir;

    float dis;
    cout << "Enter the distance = ";
    cin >> dis;

    Car c(name, dir, dis);
    menu(c);

    return 0;
}
