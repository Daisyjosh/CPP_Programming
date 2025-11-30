#include <iostream>

using namespace std;

int water_bottle_I(int numBottles, int numExchanges)
{
    int empty = numBottles;
    int drank = numBottles;
    while(empty >= numExchanges)
    {
        int newBottles = empty / numExchanges;
        drank += newBottles;
        empty = (empty % numExchanges) + newBottles;
    }
    return drank;

}

int water_Bottles_II(int numBottles, int numExchanges)
{
    int empty = numBottles;
    int drank = numBottles;
    while(empty >= numExchanges)
    {
        empty -= numExchanges;
        empty += 1;
        numExchanges+=1;
        drank+=1;
    }
    return drank;


}

int main()
{
    int numBottles =13;
    int numExchange = 6;
    cout << water_bottle_I(numBottles,numExchange) << endl;
    cout << water_Bottles_II(numBottles,numExchange) << endl;
    return 0;
}