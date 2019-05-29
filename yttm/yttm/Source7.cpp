#include<stdio.h>
struct Employee {
	char m_Name[64];
	int m_Id;
	int m_DepartmentId;
};
void ShowEmployee(struct Employee employee) {
	printf("–¼‘OF%s\nĞˆõId:%d\n•”Id:%d", employee.m_Name, employee.m_Id, employee.m_DepartmentId);
}

int main() {
	struct Employee employee = {"—é–Øˆê˜Y",1000,1 };
	ShowEmployee(employee);
	return 0;
}
