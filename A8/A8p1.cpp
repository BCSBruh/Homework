//
// Created by Jerome on 4/15/2022.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student
{
    int credits;
    string name;

    Student() {}

    Student(int s, string n)
    {
        credits = s;
        name = n;
    }
};

void lexOrder(vector<Student> nameVec)
{
    struct Student temp, current, next;

    for(int i = 0; i < nameVec.size(); i++)
    {
        for (int j = i+1; j < nameVec.size(); j++)
        {
            next = nameVec.at(j);
            current = nameVec.at(i);
            if (next.name < current.name)
            {
                temp = next;
                nameVec.at(j) = current;
                nameVec.at(i) = temp;
            }
        }
    }

    for(int i = 0; i < nameVec.size(); i++)
    {
        cout << "name: " << nameVec.at(i).name << "\t" << "credits: " << nameVec.at(i).credits << endl;
    }
    cout << endl;
}

void creditOrder(vector<Student> creditVec)
{
    struct Student temp, current, next;

    for(int i = 0; i < creditVec.size(); i++)
    {
        for (int j = i+1; j < creditVec.size(); j++)
        {
            next = creditVec.at(j);
            current = creditVec.at(i);
            if (next.credits < current.credits)
            {
                temp = next;
                creditVec.at(j) = current;
                creditVec.at(i) = temp;
            }
        }
    }

    for(int i = 0; i < creditVec.size(); i++)
    {
        cout << "name: " << creditVec.at(i).name << "\t" << "credits: " << creditVec.at(i).credits << endl;
    }
}

int main()
{
    vector<Student> vec;
    int credits;
    string names;

    while (cin >> names >> credits)
    {
        vec.push_back(Student(credits, names));
    }

    cout << "Printing student information by name order:" << endl;
    lexOrder(vec);

    cout << "Printing student information by credits order:" << endl;
    creditOrder(vec);

//    for (int i = 0; i < vec.size(); i++)
//    {
//        cout << vec.at(i).name << " " << vec.at(i).score << endl;
//    }




    return 0;
}