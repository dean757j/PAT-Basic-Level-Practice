/*
1041 考试座位号
*/
#include <iostream>
#include <string>

using namespace std;

struct Stu
{
    string id;
    int seat;
};

int main()
{
    Stu stu[1001];
    int num, seatPre;
    cin >> num;
    Stu tmp;
    for (int i = 0; i < num; ++i)
    {
        cin >> tmp.id >> seatPre >> tmp.seat;
        stu[seatPre].id = tmp.id;
        stu[seatPre].seat = tmp.seat;
    }
    
    int N, search;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> search;
        cout << stu[search].id << " " << stu[search].seat << endl;
    }
    
    return 0;
}