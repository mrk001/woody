//
//  stlVector.cpp
//  stlSamples
//
//  Created by Milind Wanjari on 16/9/16.
//  Copyright © 2016 Milind Wanjari. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <vector>

int intData[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

using namespace std;

void VectorInitialization()
{
    // the iterator constructor can also be used to construct from arrays:
    std::vector<int> intVector(intData, intData + sizeof(intData)/sizeof(int));
    
    cout << "\nPrinting vector contents using simple for loop ..." << endl;
    for (int idx = 0; idx < intVector.size(); ++idx)
    {
        cout << intVector[idx] << "  ";
    }
    
    cout << "\nPrinting vector contents using for_each and lambda ..." << endl;
    for_each(intVector.begin(), intVector.end(), [](int p_Val) { cout << p_Val << "  "; });
    
    cout << "\nPrinting vector using std::transform and lambda ..." << endl;
    std::transform(intVector.begin(), intVector.end(), intVector.begin(),
                   [](int p_Val){
                       cout << p_Val << "  ";
                       return p_Val;
                   });
    cout << endl;
}

void VectorAppendData()
{
    // the iterator constructor can also be used to construct from arrays:
    std::vector<int> intVector(intData, intData + sizeof(intData)/sizeof(int));
    
    intVector.push_back(121);
    
    cout << "\nPrinting vector contents using for_each and lambda ..." << endl;
    for_each(intVector.begin(), intVector.end(), [](int p_Val) { cout << p_Val << "  "; });

    cout << endl;
}

void VectorExamples()
{
    cout << "Running vector examples ..." << endl;
    
    VectorInitialization();
    VectorAppendData();
    
    cout << endl;
}
