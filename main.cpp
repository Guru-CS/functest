#include <iostream>
#include <string> 
#include <vector>
#include <numeric>
using namespace std;

void countdown(int num);
void customGreet(string name, int times);
int getFavoriteNumber();
string calculateAverage(int numamt);

int main(){
    countdown(10);
    customGreet("Guru",2);
    int favNum=getFavoriteNumber();
    cout<<"My Fav num is: "<<favNum<<"!"<<endl;
    cout<<"Enter Three Num, split with enter"<<endl;
    cout<<calculateAverage(3);
}

void countdown(int num){
    for(;num>=0;num--){
        cout<<num<<"..."<<endl;
    }
    cout<<"Lift off!"<<endl;
}

void customGreet(string name, int times){
    for(;times>0;times--){
        cout<<"Hello, "<<name<<"!"<<endl;
    }
}
int getFavoriteNumber(){
    return 55;
}
string calculateAverage(int numamt){
    vector<int> numbers;
    int input;
    for(;numamt>0;numamt--){
    vector<int> numbers;
    cout<<"Enter Num: ";
    cin>>input;
    cout<<endl;
    numbers.push_back(input);
    }
    int avg=(accumulate(numbers.begin(), numbers.end(), 0))/numbers.size();
    
    return //"Avg: " + to_string(avg);
}