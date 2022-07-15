#pragma once
#define MEMBER_NO	1	// ��ȣ�� ��Ÿ���� ���� ��
#define MEMBER_NAME	2	// �̸��� ��Ÿ���� ����

// Member Data
class Member
{
private:
	int no;			// ��ȣ
	char name[20];	// �̸�
	
public:
	// ȸ�� ��ȣ �� �Լ�
	int MemberNoCmp(const Member* x, const Member* y);
	
	// ȸ�� �̸� �� �Լ�
	int MemberNameCmp(const Member* x, const Member* y);

	// ȸ�� �����͸� ���(�� �ٲ� ����)
	void PrintMember(const Member* x);

	// ȸ�� �����͸� ���(�� �ٲ� ����)
	void PrintLnMember(const Member* x);

	// ȸ�� �����͸� �о� ����
	Member ScanMember(const char* message, int sw);
};