#pragma once
// tabtenn1.h -- Ź�� ���� Ŭ����
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;
// ������ ���� Ŭ����
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string& fn = "non", const string& ln = "none", bool hy = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
};

// ������ �Ļ� Ŭ����
class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string& fn = "none",
		const string& ln = "none", bool ht = false);
	RatedPlayer(unsigned int r, const TableTennisPlayer& tp);
	unsigned int Rating() { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
};

#endif // !TABTENN0_H_