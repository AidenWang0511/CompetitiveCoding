#include<bits/stdc++.h>
using namespace std;

vector<int> result;

void getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) { //try to convert string to int
         result.push_back(temp_int);
      }
      temp_str = ""; //clear temp string
   }
}
  

int main(){
	for(int t=0; t<5; t++){
		result.clear();
		string s;
		int maxd = 0, curd = 0, roads, candies = 0, knots = 0;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			if(s[i] == '('){
				curd++;
				knots++;
			}
			if(s[i] == ')'){
				curd--;
			}
			maxd = max(maxd, curd);
		}
		roads = 4*knots - maxd;
		getNumberFromString(s);
		for(int i=0; i<result.size(); i++){
			candies+=result[i];
		}
		cout<<roads<<' '<<candies<<endl;
		
	}
	
	return 0;
}
