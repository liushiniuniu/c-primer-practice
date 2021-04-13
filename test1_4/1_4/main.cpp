//  Created by Mac on 2021/4/12.
//  Copyright © 2021 Mac. All rights reserved.
//

#include <iostream>


int example()
{
    int sum = 0;
    int val = 1;
    
    while(val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "1 add to " << val -1 << " is: " << sum << std::endl;
    return 0;
}


int practice_1_9()
{
    int sum = 0;
    int val = 50;
    
    while(val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << "50 add to " << val -1 << " is: " << sum << std::endl;
    return 0;
}

int practice_1_10()
{
    int val = 10;
    
    while(val >= 0)
    {
    std::cout <<  val << std::endl;
        --val;
    }

    return 0;
}


int practice_1_11()
{
    std::cout << "input two numbers not same" << std::endl;
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1 >> v2;
    
    if (v1 >= v2) {
        std::cout << "first number must lower then second" << std::endl;
        return 0;
    }
    
    
    int temp = v1;
    
    while (temp < v2) {
        std::cout << temp << std::endl;
        temp ++;
    }
    return 0;
}



int main(int argc, const char * argv[]) {
    example();
    practice_1_10();
    practice_1_11();
    
    return 0;
}


