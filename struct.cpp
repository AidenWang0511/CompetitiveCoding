#include <bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int score;
};

bool cmp(student s1, student s2){
	if(s1.score == s2.score){
		return s1.name<s2.name;
	}
	return s1.score>s2.score;
}

int main(){
	int n;
	cin>>n;
	student stu[n];
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].score;
	}
	
	sort(stu, stu+n, cmp);

	for(int i=0;i<n;i++){
		cout<<stu[i].name<<" "<<stu[i].score<<endl;
	}
	return 0;
}

