#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <algorithm>

using namespace std;


void demonstrate_vector(){

    cout << "------------------" << endl;
    cout << "vector:  " << endl;

    vector <int> v{5, 1, 2};  // new in c++11
    v = {5,1,2}; //is not possible
    v.push_back(9);
    //v.push_front is not possible

    // most common use
    cout << "v: ";
    for (int elem: v){
        cout << elem << " ";
    }
    cout << endl;

    // element
    cout << "at 3:  " << v.at(3) << endl;

    cout << "front: " << v.front() << endl;
    cout << "back:  " << v.back() << endl;

    cout << "-" << endl;

    vector <int> v2(v);  // copy

    v.clear();
    cout << "v is empty:  " << v.empty() << endl;
    cout << "v2 is empty: " << v2.empty() << endl;

    v.push_back(0);
    cout << "v size:  " << v.size() << endl;
    cout << "v2 size: " << v2.size() << endl;

    // swap
    cout << "swap!"     << endl;
    v2.swap(v);

    cout << "v size:  " << v.size() << endl;
    cout << "v2 size: " << v2.size() << endl;

    cout << "-" << endl;

    vector<int>::iterator it;
    v.insert(v.end(), 10);
    v.erase(v.begin());

    // begin() and end()
    for(it = v.begin(); it != v.end(); ++it)
        cout << '\t' << *it;
        // this is faster way to traverse the vector.
        // it is what behind for(elem: vector){}
    cout << endl;

    cout << "v:  "; for (int elem: v ){cout << elem << " ";}cout<<endl; // print v
    cout << "v2: "; for (int elem: v2){cout << elem << " ";}cout<<endl;  // print v

    v.insert(v.end(), v2.begin(), v2.end());

    cout << "v + v2:" << endl;
    cout << "v: "; for (int elem: v){cout << elem << " ";}cout<<endl;  // print v
}

void demonstrate_list(){

    cout << "------------------" << endl;
    cout << "list:  " << endl;

    list <int> list1{5, 1, 2};  // new in c++11
    list1 = {5,1,2};
    list1.push_back(4);
    list1.push_front(6); //new in list

    // most common use
    cout << "list1: ";
    for (int elem: list1){
        cout << elem << " ";
    }
    cout << endl;

    // new in list
    list1.reverse();
    cout << "list after reverse: "; for (int elem: list1){cout << elem << " ";}cout<<endl; // print list
    list1.sort();
    cout << "list after sort:    "; for (int elem: list1){cout << elem << " ";}cout<<endl; // print list

    // element
    // cout << "at 3:  " << list1.at(3) << endl; // at is impossible for list
    cout << "front: " << list1.front() << endl;
    cout << "back:  " << list1.back() << endl;

    cout << "-" << endl;

    list <int> list2(list1);  // copy

    list1.clear();
    cout << "list1 is empty: " << list1.empty() << endl;
    cout << "list2 is empty: " << list2.empty() << endl;

    list1.push_back(0);
    list1.push_back(1);
    cout << "list1 size:  " << list1.size() << endl;
    cout << "list2 size:  " << list2.size() << endl;

    // swap
    cout << "swap!" << endl;
    list2.swap(list1);

    cout << "list1 size:  " << list1.size() << endl;
    cout << "list2 size:  " << list2.size() << endl;

    cout << "-" << endl;

    list<int>::iterator it;
    list1.insert(list1.end(), 10);
    list1.erase(list1.begin());

    // begin() and end()
    for(it = list1.begin(); it != list1.end(); ++it)
        cout << '\t' << *it;
        // this is faster way to iterate the list.
        // it is what behind for(elem: list){}
    cout << endl;

    cout << "list1: "; for (int elem: list1){cout << elem << " ";}cout<<endl; // print list1
    cout << "list2: "; for (int elem: list2){cout << elem << " ";}cout<<endl;  // print list1

    list1.insert(list1.end(), list2.begin(), list2.end());

    cout << "list1 + list2:" << endl;
    cout << "list1: "; for (int elem: list1){cout << elem << " ";}cout<<endl;  // print list1

    // new in list
    list1.splice(next(list1.begin(),2), list2, list2.begin(), list2.end());
    cout << "list after splice: "; for (int elem: list1){cout << elem << " ";}cout<<endl; // print list

    list2.push_back(2);
    list2.push_back(3);
    cout << "list2: "; for (int elem: list2){cout << elem << " ";}cout<<endl;  // print list2

    list1.insert(next(list1.begin(),2), list2.begin(), list2.end());

    cout << "list after insert: "; for (int elem: list1){cout << elem << " ";}cout<<endl; // print list
}

void demonstrate_array(){

    cout << "------------------" << endl;
    cout << "array:  " << endl;

    array <int, 3> array1{5, 1, 2};
    array1 = {5, 1, 2};
    // array1.push_back(4);
    // array1.push_front(6); //new in list

    // most common use
    cout << "array1: ";
    for (int elem: array1){
        cout << elem << " ";
    }
    cout << endl;

    //array1.reverse();
    //cout << "list after reverse: "; for (int elem: array1){cout << elem << " ";}cout<<endl; // print list
    //array1.sort();
    //cout << "list after sort: "; for (int elem: array1){cout << elem << " ";}cout<<endl; // print list

    // element
    cout << "at 2:  " << array1.at(2) << endl; // at is impossible for list
    cout << "front: " << array1.front() << endl;
    cout << "back:  " << array1.back() << endl;

    cout << "-" << endl;

    array <int, 3> array2(array1);
    //array <int, 3> array2 = array1;
    array2 = {1};

    // array1.clear();
    cout << "array1 is empty: " << array1.empty() << endl;
    cout << "array2 is empty: " << array2.empty() << endl;

    // array1.push_back(0);
    // array1.push_back(1);
    cout << "array1 size:  " << array1.size() << endl;
    cout << "array2 size:  " << array2.size() << endl;

    // swap
    cout << "swap!"     << endl;
    array2.swap(array1);

    cout << "array1 size:  " << array1.size() << endl;
    cout << "array2 size:  " << array2.size() << endl;

    cout << "-" << endl;

    array<int, 3>::iterator it;
    // array1.insert(array1.end(), 10);
    // array1.erase(array1.begin());

    // begin() and end()
    for(it = array1.begin(); it != array1.end(); ++it)
        cout << '\t' << *it;
        // this is faster way to iterate the list.
        // it is what behind for(elem: list){}
    cout << endl;

    // no insert, no splice
}

void demonstrate_set(){

    cout << endl << "------------------" << endl;
    cout << "set:  " << endl;

    set <int> set1{5, 1, 2};  // new in c++11
    set1 = {5, 1, 2};

    pair<set<int>::iterator, bool> ret;

    ret = set1.insert(0);
    cout << "set1: "; for (int elem: set1){cout << elem << " ";}cout<<endl;

    set1.erase(1);

    cout << "set1: "; for (int elem: set1){cout << elem << " ";}cout<<endl;

    // cout << "at 2:  " << set1.at(2) << endl;
    // cout << "front: " << set1.front() << endl;
    // cout << "back:  " << set1.back() << endl;

    //for(it = set1.begin(); it != set1.end(); ++it)
    //    cout << '\t' << *it;

    set<int>::iterator itr;

    itr = set1.find(5);
    if(itr!=set1.end())
        cout << *itr << endl;

}

void demonstrate_unordered_set(){

    cout << endl << "------------------" << endl;
    cout << "unorder set:  " << endl;

    unordered_set <int> uset1{5, 1, 2};  // new in c++11
    uset1 = {5, 1, 2};

    pair<unordered_set<int>::iterator, bool> ret;

    ret = uset1.insert(0);
    cout << "uset1: "; for (int elem: uset1){cout << elem << " ";}cout<<endl;

    uset1.erase(1);

    cout << "uset1: "; for (int elem: uset1){cout << elem << " ";}cout<<endl;

    unordered_set<int>::iterator itr;

    itr = uset1.find(5);
    if(itr!=uset1.end())
        cout << *itr << endl;

}

void demonstrate_map(){

    cout << endl << "------------------" << endl;
    cout << "map:  " << endl;

    map <string, int> map1;  // new in c++11
    map1 = {{"one", 1}, {"two", 2}, {"three", 3}};
    map1["five"] = 5;
    cout << map1.at("five") << endl;
    cout << map1["five"] << endl;
    cout << map1["six"] << endl;  // return 0

    pair<map<string, int>::iterator, bool> ret;

    ret = map1.insert(make_pair("four", 4));
    ret = map1.insert(pair<string, int>("four", 4));

    cout << "map1:: "; for (auto elem: map1){cout << elem.first << ":" << elem.second << " ";}cout<<endl;

    map1.erase("three");

    cout << "map1:: "; for (auto elem: map1){cout << elem.first << ":" << elem.second << " ";}cout<<endl;

    map<string, int>::iterator itr;

    itr = map1.find("one");
    if(itr!=map1.end())
        cout << (*itr).second << endl;

}

void demonstrate_unordered_map(){

    cout << endl << "------------------" << endl;
    cout << "umap:  " << endl;

    unordered_map <string, int> umap1;  // new in c++11
    umap1 = {{"one", 1}, {"two", 2}, {"three", 3}};
    umap1["five"] = 5;
    cout << umap1.at("five") << endl;
    cout << umap1["five"]    << endl;
    cout << umap1["six"]     << endl;  //return 0

    pair<unordered_map<string, int>::iterator, bool> ret;

    ret = umap1.insert(make_pair("four", 4));
    ret = umap1.insert(pair<string, int>("four", 4));

    cout << "umap1:: "; for (auto elem: umap1){cout << elem.first << ":" << elem.second << " ";}cout<<endl;

    umap1.erase("three");

    cout << "umap1:: "; for (auto elem: umap1){cout << elem.first << ":" << elem.second << " ";}cout<<endl;

    unordered_map<string, int>::iterator itr;

    itr = umap1.find("one");
    if(itr!=umap1.end())
        cout << (*itr).second << endl;

}

int main()
{
  demonstrate_vector();
  demonstrate_list();
  demonstrate_array();
  demonstrate_set();
  demonstrate_unordered_set();
  demonstrate_map();
  demonstrate_unordered_map();
}
