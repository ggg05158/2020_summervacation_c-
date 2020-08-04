#include <iostream>
using namespace std;
class birthday {
public:
    string name;
    int day;
    int month;
    int year;
    birthday(int d = 0, int m = 0, int y = 0)
    {
        day = d;
        month = m;
        year = y;
    }
};
birthday findOlder(birthday *n1, birthday *n2)
{
    if ((*n1).year != (*n2).year)
        return ((*n1).year > (*n2).year) ? (*n2) : (*n1);
    else if ((*n1).month != (*n2).month)
        return ((*n1).month > (*n2).month) ? (*n2) : (*n1);
    else if ((*n1).day != (*n2).day)
        return ((*n1).day > (*n2).day) ? (*n2) : (*n1);
    else
        return *n1;
}

birthday findYounger(birthday *n1, birthday *n2)
{
    if ((*n1).year != (*n2).year)
        return ((*n1).year < (*n2).year) ? (*n2) : (*n1);
    else if ((*n1).month != (*n2).month)
        return ((*n1).month < (*n2).month) ? (*n2) : (*n1);
    else if ((*n1).day != (*n2).day)
        return ((*n1).day < (*n2).day) ? (*n2) : (*n1);
    else
        return *n1;
}
int main()
{
    int time;
    cin >> time;
    birthday* arr = new birthday[time];
    birthday older(32,13,9999), younger(0, 0, 0);
    for (int i = 0; i < time; i++)
    {
        cin >> arr[i].name >> arr[i].day >> arr[i].month >> arr[i].year;
        older = findOlder(&older, &arr[i]);
        younger = findYounger(&younger, &arr[i]);
    }
    cout << younger.name << endl;
    cout << older.name;
    return 0;
}