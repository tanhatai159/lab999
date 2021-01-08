#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
    ifstream source("score.txt");
    string text;
    double avg,sum = 0,stand = 0,sum2 = 0;
    int count = 0;
    while(getline(source,text)){
        double a = stod(text);
        sum += a;
        sum2 += pow(a,2);
        count++;
    }
    source.close();
    avg = sum/count;
    sum2 = sum2/count;
    stand = sqrt(sum2-pow(avg,2));
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< avg << endl;
    cout << "Standard deviation = " << stand;
}