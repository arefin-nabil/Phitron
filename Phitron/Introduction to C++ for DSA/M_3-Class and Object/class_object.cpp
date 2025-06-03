#include <bits/stdc++.h>
using namespace std;
class Student

{

public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)

    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun() // এবার ফাংশনটি একটি পয়েন্টার রিটার্ন করবে, পয়েন্টার এর টাইপ Student* তাই ফাংশনের রিটার্ন টাইপও Student*
{

    Student rahim(342, 5, 4.99); // কন্সট্রাক্টর কল করে অবজেক্ট ডিক্লেয়ার করা হয়েছে।
    Student *p = &rahim; // একটি পয়েন্টার নিয়ে তাতে অবজেক্ট এর এড্রেস রেখে দেওয়া হয়েছে। যেহেতু পয়েন্টার একটি Student ক্লাসের অবজেক্টকে পয়েন্ট করছে তাই পয়েন্টার এর ডাটা টাইপ হচ্ছে Student*
    return p; // পয়েন্টার রিটার্ন করা হচ্ছে।
}

int main()
{

    Student *ans = fun(); // ফাংশন কল করে ফাংশন থেকে রিটার্ন আসা পয়েন্টার আরেকটি পয়েন্টারে স্টোর করে রাখা হচ্ছে।
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl; // সেই পয়েন্টার কে ডিরেফারেন্স করে ( এক্ষেত্রে শর্টকাটে এরো সাইন ব্যাবহার করা হয়েছে ) তার ভেলু প্রিন্ট করা হচ্ছে।

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string text = "abaabcabaab";
//     string pat = "aab";
//     map<char, int> order;  
//     order[pat[0]] = 1;  
//     int count = 1;  

//     // Preprocess pattern
//     for (int i = 0; i < pat.length(); ++i) {  
//         if (order[pat[i]] == 0) order[pat[i]] = ++count;  
//     }  

//     // Hardcoded transition table for "aab"
//     int table[2][4] = {{1, 2, 1, 1}, {0, 0, 3, 0}};  

//     // KMP Search
//     int state = 0;  
//     for (int i = 0; i < text.length(); ++i) {  
//         state = (pat[state] == text[i]) ? table[order[text[i]] - 1][state] : 0;  
//         if (state == pat.length()) {  
//             cout << "Pattern found at index: " << i - state + 1 << endl;  
//             state = 0;  
//         }  
//     }  
//     return 0;
// }

