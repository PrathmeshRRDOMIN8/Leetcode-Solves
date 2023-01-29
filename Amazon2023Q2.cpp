// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <map>
#include <stringstream>
using namespace std;

vector<string> func(vector<string> logs){
    map<string,pair<int,string>> server; 
    map<string,pair<int,string>>::iterator itr;
    vector<string> ans;
    int T = logs.size();
    for(int i=0; i<T; i++){
       stringstream ss(logs[i]);
       string word;
       vector<string> calls;
       while (ss >> word) {
           calls.push_back(word);
       }
       if(calls[0]=="register"){
           if(server.find(calls[1])!=server.end()){
               ans.push_back("User already registered");
           }
           else{
               server.insert(make_pair(calls[1],make_pair(0,calls[2])));
               ans.push_back("User registered successfully");
           }
       }
       if(calls[0]=="login"){
           itr = server.find(calls[1]);
           if(itr != server.end()){
              if(itr->second.second==calls[2]){
                itr->second.first = 1;
                ans.push_back("User logined successfully");
            }
            else{
                ans.push_back("Password incorrect"); 
            } 
           }
           else
           ans.push_back("User not found");
       }
       if(calls[0]=="logout"){
           itr = server.find(calls[1]);
           if(itr != server.end()){
               if(itr->second.first==1){
                          ans.push_back("User logged out");
                          itr->second.first = 0;
                      }else{
                          ans.push_back("User already logged out");
                      }
           }
           else
           ans.push_back("User not found");
       }
    }
    return ans;
}

int main(){
    vector<string> logs;
    vector<string> ans;
    logs.push_back("register name1 pass1");
    logs.push_back("register name2 pass2");
    logs.push_back("login name1 pass1");
    logs.push_back("login name2 passX");
    logs.push_back("login name3");
    logs.push_back("logout name1");
    logs.push_back("logout name2");
    logs.push_back("register name2 pass2");
    logs.push_back("logout name1");
    ans = func(logs);
    for(auto it: ans){
        cout<<it<<"\n";
    }
    return 0;
}

