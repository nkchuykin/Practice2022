#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

struct Time{
    int hours;
    int minutes;
    int seconds;
};

bool operator<(const Time& first,  const Time& second)
{
    return tie(first.hours,first.seconds,first.minutes) <
            tie(second.hours,second.seconds,second.minutes);
}

void Print(const Time& t)
{
    cout << t.hours << " " << t.minutes << " " << t.seconds;
}

ostream& operator<<(ostream& out,  const Time& t)
{
    out << t.hours << " " << t.minutes << " " << t.seconds;
    return out;
}


void PrintVector(const vector<Time>& v)
{
    for (auto i : v) {
        cout << i << "\n";
    }
    cout << endl;
}


int main() {
    Time t1 = {10,20,00};
    Time t2 = {10,40,00};
    Time t3 = {10,00,00};

    //Print(t1);

    cout << t1 << "\n";
    cout << t2 << "\n";
    cout << t3 << "\n";

    vector<Time> vec {t1,t2,t3};
    std::sort(vec.begin(), vec.end());

    PrintVector(vec);

    tuple<int,int,int> like_time;
    get<0>(like_time) = 4;
    get<1>(like_time) = 20;

    pair<int,string> pair1;
    pair1.first = 3;
    pair1.second = "234132";

    return 0;
}
