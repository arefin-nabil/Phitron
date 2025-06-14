// #include <bits/stdc++.h>
// using namespace std;

// class student
// {
//     public:
//     int id;
//     int marks;
//     char sec;
//     string name;
//     student(int id, int marks, char sec, string name)
//     {
//         this->id = id;
//         this->marks = marks;
//         this->sec = sec;
//         this->name = name;
//     }
// };

// int main()
// {
//     // int t;
//     // cin >> t;
//     // for (int i = 0; i < t; i++)
//     // {

//         int id, marks;
//         char sec;
//         string name;
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> id >> name >> sec >> marks;

//         }
//         student a (id, marks, sec, name);
//         for (int i = 0; i < 3; i++)
//         {
//             cout << a.id << " " << a.marks << " " << a.sec << " "  << a.name << endl;
//         }
//     // }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    string name;
    char sec;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        student topper;

        for (int i = 0; i < 3; i++)
        {
            
            student temp;

            cin >> temp.id >> temp.name >> temp.sec >> temp.marks;

            if (i == 0)
            {
                topper = temp;
            }
            else
            {
                if (temp.marks > topper.marks)
                {
                    topper = temp;
                }
                else if (temp.marks == topper.marks)
                {
                    if (temp.id < topper.id)
                    {
                        topper = temp;
                    };
                }
            }
        }

        cout << topper.id << " " << topper.name << " " << topper.sec << " " << topper.marks << endl;
    }

    return 0;
}