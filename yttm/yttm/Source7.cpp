#include<stdio.h>
struct Employee {
	char m_Name[64];
	int m_Id;
	int m_DepartmentId;
};
void ShowEmployee(struct Employee employee) {
	printf("���O�F%s\n�Ј�Id:%d\n����Id:%d", employee.m_Name, employee.m_Id, employee.m_DepartmentId);
}

int main() {
	struct Employee employee = {"��؈�Y",1000,1 };
	ShowEmployee(employee);
	return 0;
}
