#pragma once
#include <String>
#include <unordered_map>

class Fryweight
{
private:
	Fryweight();
	Fryweight(const Fryweight&) = delete;
	Fryweight& operator=(const Fryweight&) = delete;
public:
	static Fryweight* get() { static Fryweight instance; return &instance; }

public:
	~Fryweight();

	const std::string& getName(const std::string& FileName);
	void release(const std::string& FileName);
private:
	std::unordered_map < std::string, std::pair < std::string, int >> dictionary_;
};

