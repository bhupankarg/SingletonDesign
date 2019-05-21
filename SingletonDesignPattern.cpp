//Implementation of Singleton Design Pattern with Lazy Initialization
#include<iostream>
using namespace std;

class Singleton
{
private:
    static Singleton* instance;
    Singleton()
    {
        //Private constructor to restrict instantiation outside of Singleton class
        cout << "Singleton constructor is called." << endl;
    }

public:
    static Singleton* getInstance();
    void myFunc();
};

Singleton* Singleton :: instance = nullptr;

Singleton* Singleton :: getInstance()
{
    if(instance == nullptr)
    {
        cout << "Instance doesn't exist. Returning new instance." << endl;
        instance = new Singleton();
    }
    else
    {
        cout << "Instance exist. Returning old instance." << endl;
    }
    return instance;
}

void Singleton :: myFunc()
{
    cout << "Sample function is called." << endl;
}

int main()
{
    Singleton *s1, *s2;
    s1 = Singleton :: getInstance();
    s1->myFunc();
    s2 = Singleton :: getInstance();
    s2->myFunc();
    getchar();
    return 0;
}
