#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int a,b,c;
int main() {
    cout<<"请输入随机数范围与个数，中间用空格隔开"<<endl; 
    cin>>a>>b>>c;
	const int MIN=a;
    const int MAX=b;
    const int COUNT=c;
    srand(static_cast<unsigned int>(time(nullptr)));
    int numbers[MAX - MIN + 1];
    for (int i = MIN; i <= MAX; ++i) {
        numbers[i - MIN] = i;
    }
    for (int i = MAX - MIN; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(numbers[i], numbers[j]);
    }
    for (int i = 0; i < COUNT; ++i) {
        cout << numbers[i] << " ";
    }
    cout<<endl;
    system("pause");
}
