//do include the linked list of the query. since query is not included in the hashtable.
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include "article_remove.cpp"
using namespace std;
vector<string> permute(string s){
	vector<string> queries_result, queries_maximise;
	int size = 0;
	string temp = "";
	//queries_result.push_back(s);
	
	queries_maximise = adj(s);
	std::sort(queries_maximise.begin(), queries_maximise.end());
	
	do{
		for(std::vector<std::string>::iterator it = queries_maximise.begin(); it!= queries_maximise.end();++it){
			temp=temp+(*it)+" ";
		}
		if(s.compare(temp)!=0){
			queries_result.push_back(temp);
		}
		temp="";	
	}while(std::next_permutation(queries_maximise.begin(), queries_maximise.end()));
	
	for(std::vector<std::string>::iterator it = queries_maximise.begin(); it!= queries_maximise.end();++it){
			queries_result.push_back(*it);
	}
		
	return queries_result;
}
//int main(){
//	std::vector<std::string> words;
//	std::vector<std::string> queries;
//	int size = 0;
//	string q = "harry potter and the deathly hallows";
//	queries = permute(q);
//	for(std::vector<std::string>::iterator it = queries.begin(); it!=queries.end();++it){
//		cout<<*it<<endl;
//	}
//
//	return 0;
//}

