#include"MiscUtility.h"
#include<windows.h>//MuliByteToWideChar WideCharToMultiByte CP_UTF8
#include<string>//string wstring

//string=>wstring 文字列変換
std::wstring ConvertString(const std::string& str)
{
	if (str.empty())
	{
		return std::wstring();
	}
	auto sizeNeeded = MultiByteToWideChar(CP_UTF8, 0, reinterpret_cast<const char*>(&str[0]), static_cast<int>(str.size()), NULL, 0);
	if (sizeNeeded == 0)
	{
		return std::wstring();
	}
	std::wstring result(sizeNeeded, 0);
	MultiByteToWideChar(CP_UTF8, 0, reinterpret_cast<const char*>(&str[0]), static_cast<int>(str.size(), &result[0]), sizeNeeded);
	return result;
}
