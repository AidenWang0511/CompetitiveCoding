#include <bits/stdc++.h>
using namespace std;

class student {
	public:
		string name;
		int age, grade;
		double average;
		student(string s, int a, int g, double avg){
			name = s; age = a; grade = g; average = avg;
		}
};
bool cmpAgeD(student a, student b){
	return a.age>b.age;
}	
bool cmpNameAlph(student a, student b){
	return a.name<b.name;
}
bool cmpCombineBoth(student a, student b){
	return a.age>b.age || (a.age == b.age && a.name < b.name);
}
int x;
bool cmpAbsoluteDisSamllerFirst(int a, int b){
	int a2 = abs(a-x);
	int b2 = abs(b-x);
	return a2<b2 || (a2 == b2 && a<b);
} 

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    // Student excercise
    /*
    vector<student> v;
    int num;
    cin>>num;
    for(int i=0; i<num; i++){
    	string name; int age,grade,average;
    	cin>>name>>age>>grade>>average;
    	v.push_back(student(name,age,grade,average));
	}
	cout<<"Age descending: "<<endl;
    sort(v.begin(), v.end(), cmpAgeD);
    for(student x: v) cout<<x.name<<' '<<x.age<<' '<<x.grade<<' '<<x.average<<endl;
    sort(v.begin(), v.end(), cmpNameAlph);
    cout<<endl;
    cout<<"Name Alph: "<<endl;
    for(student x: v) cout<<x.name<<' '<<x.age<<' '<<x.grade<<' '<<x.average<<endl;
    */
    
    int arr[10000];
    int n;
    cin>>n>>x;
    for(int i=0; i<n; i++){
    	cin>>arr[i];
	}
	sort(arr, arr+n, cmpAbsoluteDisSamllerFirst);
	for(int i=0; i<n; i++) cout<<arr[i]<<endl;
	
    return 0;
}
