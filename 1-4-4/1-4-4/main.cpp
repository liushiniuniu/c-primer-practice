//
//  main.cpp
//  1-4-4
//
//  Created by Mac on 2021/4/13.
//  Copyright © 2021 Mac. All rights reserved.
//

#include <iostream>

int demo()
{
    int currVal = 0, val = 0;
    
    if (std::cin >> currVal) {
        int cnt = 1;
        while(std::cin >> val) {
            if (val == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << "ocurs" << cnt << "times" <<std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        
        std::cout << currVal << "ocurs" << cnt << "times" <<std::endl;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    demo();
    return 0;
}
