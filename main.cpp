#include <iostream> 
#include <vector>
using namespace std;

void countdown(); 
void customGreeting(string name, int times);
int getFavoriteNumber();
float getAverage(vector<float> nums);

int main(){
    countdown();

    cout << "Enter the name. \n"; 
    string name; 
    cin >> name; 
    cout << "Enter the amount. \n"; 
    int times; 
    cin >> times;  
    customGreeting(name, times); 

    int faveNum= getFavoriteNumber(); 
    cout << "Your favorite number is "<<faveNum << '.' << '\n'; 

    cout << "Enter the number of values" << '\n'; 
    int numberOfValues; 
    cin >> numberOfValues; 
    
    vector<float> inputNums; 
    for (int i = 0; i < numberOfValues; i ++)
    {
        cout << "Enter number" << '\n'; 
        int inputNum; 
        cin >> inputNum; 
        inputNums.push_back(inputNum); 
    }

    cout << "the average is " << getAverage(inputNums) << '\n'; 

}

void countdown()
{
    for (int i = 10; i > 0; i --) cout << i << '\n';
    cout << "Lift off!" << '\n' ; 
}

void customGreeting(string name, int times)
{
    for(int i = 0; i < times; i ++) cout << "Hello, " << name << '!' << '\n'; 
}

int getFavoriteNumber(){
    return 7; 
}

float getAverage(vector<float> nums){
    float sum = 0; 
    for (float num : nums)
    {
        sum += num; 
    }
    return sum/nums.size(); 
}
    
