#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>List_y(3,11);
    list<int> List_x = {1, 2, 3, 343, 4, 5, 6, 5};
    cout<<"Full list"<<endl;
    for (auto val : List_x)
    {
        cout << val << " ";
    }
    cout << endl;
    cout<<"print 3rd index value:"<<endl;
    cout << "3rd idx value is " << *next(List_x.begin(), 3) << endl;


    cout<<"insert 3rd indx"<<endl;
    auto it = next(List_x.begin(), 3);
    List_x.insert(it, 342);

    for (auto val : List_x)
    {
        cout << val << " ";
    }


    cout<<"insert a full list into another list :"<<endl;

    List_x.insert(next(List_x.begin(),3),List_y.begin(),List_y.end());
    for (auto val : List_x)
    {
        cout << val << " ";
    }


    //delete at any position
    cout<<"Delete at 3rd index :"<<endl;
    List_x.erase(next(List_x.begin(),3));

    for (auto val : List_x)
    {
        cout << val << " ";
    }
    

    //delete range of numbers 
    cout<<"Delete range of numbers :"<<endl;
    List_x.erase(next(List_x.begin(),3),next(List_x.begin(),5)); //select the next iteratior of desired iterator

    for (auto val : List_x)
    {
        cout << val << " ";
    }






    return 0;
}