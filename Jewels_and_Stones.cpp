#include <iostream>
#include <string>

class Solution
{
public:
    int numJewelsInStones(std::string J, std::string S)
    {
        if (J.length() == 0 || S.length() == 0) 
        {
            return 0;
        }
        int num = 0;
        for (int i = 0; i < S.length(); ++i)
        {
            int result = J.find(S[i]);
            if (result != std::string::npos)
            {
                ++num;
            }
        }
        return num;
    }
};

int main()
{
    std::string J, S;
    std::cout << "Please input J:" << std::endl;
    std::cin >> J;
    std::cout << "Please input S:" << std::endl;
    std::cin >> S;
    Solution so;
    std::cout << so.numJewelsInStones(J, S) << std::endl;
    return 0;
}