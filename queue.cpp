#include <iostream>
#include <queue>
using namespace std;

int main()
 {
 	queue<int>angka;
 	angka.push(10);
 	angka.push(20);
 	angka.push(30);
 	angka.push(40);
 	angka.push(50);
 	
 	
 	cout << "ukuran queue : " << angka.size() <<"\n";
 	cout << "nilai depan : " << angka.front() <<"\n";
 	cout << "nilai belakang : " << angka.back() <<"\n";
 	
 	cout << "nilai yang di pop" << endl;
 	cout << angka.front();
	angka.pop();
 	cout << endl;
	cout << "nilai queue " << endl;
		while(!angka.empty()){
		cout << angka.front() << "\t";
		angka.pop();
		}
		
			cout << '\n';
		
	return 0;
}
