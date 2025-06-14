#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    string cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
    int total;
};

bool cmp(Student l, Student r)
{
    if (l.eng_marks > r.eng_marks)
    {
        return true;
    }
    else if (l.eng_marks == r.eng_marks)
    {
        if (l.math_marks > r.math_marks)
        {
            return true;
        }
        else if (l.math_marks == r.math_marks)
        {
            return l.id < r.id;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;

    Student a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total = a[i].math_marks + a[i].eng_marks;
    }

    sort(a, a + t, cmp);

    for (int i = 0; i < t; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks 
        << " " << a[i].eng_marks << endl;
    }
    return 0;
}