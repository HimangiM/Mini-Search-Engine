#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int frequency(string query, string search){
	int i,j,temp,freq=0;
	int size = query.length();
 	int size2 = search.length();
 	
 	for(i=0;i<size;++i){
		j=0;
		temp=i;	
		if(query[temp]==search[j]){			
			while(query[temp]==search[j]){
				++temp;
				++j;
			}
			if(j==size2){
				++freq;
				temp=0;
			}
			j=0;
		}
	}
	return freq;
}
//int main(){
//	
//    int i,j,temp,freq=0;
//  	string query ="this is pattern matching and matching pattern. this is pattern matching and pattern matching.";
//    string search="pattern matching";
//
//	freq = frequency(query, search);
//	cout<<freq;
//    return 0;
//}
