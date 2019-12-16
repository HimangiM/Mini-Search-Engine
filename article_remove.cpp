#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string> adj(string s)
 {
     vector <string> cmp;
     vector<string>::iterator it;
     cmp.push_back("is");cmp.push_back("this");cmp.push_back("the");cmp.push_back("and");
     cmp.push_back("how");cmp.push_back("who");cmp.push_back("when");cmp.push_back("at");   //add any elements here
     cmp.push_back("in");cmp.push_back("that");cmp.push_back("why");cmp.push_back("then");      //then also add in th if condition
     cmp.push_back("what");cmp.push_back("a");cmp.push_back("are");cmp.push_back("some");
    cmp.push_back("to");


     vector <string> v;
     string temp = "";
     int len=s.size();
	for(int i=0;i<len;++i)
	{
		if(s[i]!=' ')
		{
			temp+=s[i];
		}
    else if(s[i] == ' ')
        {
            it = find(cmp.begin(),cmp.end(),temp);
            if(it==cmp.end()){
            	v.push_back(temp);
            	temp="";
			}else{
				temp="";
			}
		}
	}
	v.push_back(temp);
	return v;
 }
// int main()
// {
//     string s;
//     getline(cin,s);
//     //cout<<endl<<s;
//     vector <string> v;
//     v=adj(s);
//     int len= v.size();
//     for(int i=0;i<len;i++)
//        cout<<v[i]<<endl;
//    return 0;
// }
