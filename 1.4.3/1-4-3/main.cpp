//
//  main.cpp
//  1.4.3
//
//  Created by Mac on 2021/4/13.
//  Copyright © 2021 Mac. All rights reserved.
//

#include <iostream>

int demo ()
{
    int sum = 0, value = 0;
    
    while(std::cin >> value)
    {
        sum += value;
    }
    
    std:: cout << "sum is: " << sum << std::endl;
    
    return 0;
}

int main(int argc, const char * argv[]) {
    demo();
    return 0;
}
