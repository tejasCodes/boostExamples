
#include "stdafx.h"

// project includes
#include "Algorithm.h"

// windows includes
#include <Windows.h>

// boost includes
#include "boost\algorithm\searching\boyer_moore.hpp"


void Algorithm::BoyerMooreSerach()
{
    std::vector<std::wstring> names;
    names.push_back(L"Rahul");
    names.push_back(L"John");
    names.push_back(L"Alexa");
    names.push_back(L"Tejas");
    names.push_back(L"Alexandra");

    std::vector<std::wstring> pattern;
    pattern.push_back(L"Alexandr");


    auto itr = boost::algorithm::boyer_moore_search<std::vector<std::wstring>,
        std::vector<std::wstring>>(names, pattern);

    if (itr != names.end())
    {
        OutputDebugString(std::wstring(L"pattern found in the names " + *itr).c_str());
    }
    else
    {
        OutputDebugString(std::wstring(L"pattern not found in the names").c_str());
    }
}

