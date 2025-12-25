#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream> 
#include <cstdlib> 

using namespace std;

int main()
{
        int count = 0;
        float sum = 0;
        float sum_of_square = 0;
        string textline;
        ifstream source("score.txt"); 
        while (getline(source, textline))
        {
                float x = stof(textline); 
                sum += x;
                sum_of_square += pow(x, 2); 
                count++;
        }
        
        float mean = sum / count;
        float sd = sqrt((sum_of_square / count) - pow(mean, 2));

        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << mean << "\n";
        cout << "Standard deviation = " << sd << endl;
        
        source.close();
        return 0;
}