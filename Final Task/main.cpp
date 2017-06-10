#include <iostream>
#include <vector>


bool isRightSequence(std::string s, int start, int end);


int main(int argc, const char * argv[])
{
    std::string s;
    std::cin >> s;
    std::cout << isRightSequence(s, 0, (int)s.size()) << std::endl;
    
    return 0;
}

bool isRightSequence(std::string string, int start, int end)
{
    if (start == end) return true;
    
    std::string opening = "{[(";
    std::string closing = "}])";
    
    int openingCount = 0;
    
    int c = string[start];
    auto index = opening.find(c);
    
    if (index == std::string::npos) {
        return false;
    }
    
    for (int i = start; i < end; i++) {
        
        if ((opening + closing).find(string[i]) == std::string::npos) {
            return false;
        }
        
        if (closing.find(string[i]) == index) {
            openingCount--;
            
        } else if (opening.find(string[i]) == index) {
            openingCount++;
            
        }
        
        if (openingCount == 0) {
            bool a = isRightSequence(string, start+1, i);
            bool b = isRightSequence(string, i+1, end);
            return a && b;
        }
    }
    
    return false;
}
