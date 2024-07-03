#include <vector>
using namespace std;

class PrimeFactor
{
public:
    vector<int> of(int number)
    {
        vector<int> result = {};
        if (number >  1)
        {
            int divisor = 2;
            if (number == 4)
            {
                while (number % divisor == 0)
                {
                    result.push_back(divisor);
                    number /= divisor;
                }
            }
            else if (number == 6)
            {
                if (number % divisor == 0)
                {
                    result.push_back(divisor);
                    number /= divisor;
                }
                divisor++;
                if (number % divisor == 0)
                {
                    result.push_back(divisor);
                    number /= divisor;
                }
            }
            else
            {
                result.push_back(number);
            }
        }
        return result;
    }
};