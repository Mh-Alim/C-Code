#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
//     vector push back operation
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);


    // v.begin gives the iterator of first element of vector;
   
    for( auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //rbegin() gives the last element iterator

    for( auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    int size = v.size();            // gives the size of vector;
    cout<<"Size of vector "<<size<<endl;

    cout<<v.max_size()<<endl;       //gives the max size that vector can store;

    cout<<v.capacity()<<endl;       // gives the capacity of vector for perticular value of dataType;

    cout<<v.empty()<<endl;          // gives that whether vector is empty or not

    // We can access the value of vector by the help of this;

    cout<<v[1]<<" "<<v[0]<<endl;

    cout<<v.at(1)<<" "<<v.at(0)<<endl;

    // we can see first element of vector by the help of front method

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;   //back element
    cout<<v.data()<<endl;

    v.pop_back(); //remove the last element
    cout<<v.back()<<endl;
    

    //now i am learning insert function of a vector 
    //v.insert(1,2) in 1st position we have to give iterator of the position where we want to place 2 data;
    //2nd we have to give data;

    v.insert(v.begin(),0);
    for( auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+3,6);
     for( auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }









    return 0;
}