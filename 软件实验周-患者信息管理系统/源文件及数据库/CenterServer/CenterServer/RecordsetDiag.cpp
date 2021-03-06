// RecordsetDiag.h : CRecordsetDiag 类的实现



// CRecordsetDiag 实现

// 代码生成在 2012年12月26日, 10:42

#include "stdafx.h"
#include "RecordsetDiag.h"
IMPLEMENT_DYNAMIC(CRecordsetDiag, CRecordset)

CRecordsetDiag::CRecordsetDiag(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_diagNum;
	m_idNumber = L"";
	m_patientName = L"";
	m_patientSex = L"";
	m_patientAge = 0;
	m_patientPhone = L"";
	m_patientAddress = L"";
	m_patientNum = L"";
	m_patientAllergy = L"";
	m_patientRemark = L"";
	m_diagTime;
	m_diagDoctorID = L"";
	m_diagDeclare = L"";
	m_diagInitCheck = L"";
	m_diagInstruCheck = L"";
	m_diagResult = L"";
	m_diagScheme = L"";
	m_diagRemark = L"";
	m_nFields = 18;
	m_nDefaultType = dynaset;
}
// #error 安全问题：连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CRecordsetDiag::GetDefaultConnect()
{
	return _T("DSN=\x60a3\x8005\x5c31\x8bca\x6570\x636e\x5e93;APP=Microsoft\x00ae Visual Studio\x00ae 2008;WSID=CHINA-D193224A2;DATABASE=\x60a3\x8005\x5c31\x8bca\x6570\x636e\x5e93;Network=DBMSSOCN;Trusted_Connection=Yes");
}

CString CRecordsetDiag::GetDefaultSQL()
{
	return _T("[dbo].[患者就诊信息]");
}

void CRecordsetDiag::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Date(pFX, _T("[diagNum]"), m_diagNum);
	RFX_Text(pFX, _T("[idNumber]"), m_idNumber);
	RFX_Text(pFX, _T("[patientName]"), m_patientName);
	RFX_Text(pFX, _T("[patientSex]"), m_patientSex);
	RFX_Long(pFX, _T("[patientAge]"), m_patientAge);
	RFX_Text(pFX, _T("[patientPhone]"), m_patientPhone);
	RFX_Text(pFX, _T("[patientAddress]"), m_patientAddress);
	RFX_Text(pFX, _T("[patientNum]"), m_patientNum);
	RFX_Text(pFX, _T("[patientAllergy]"), m_patientAllergy);
	RFX_Text(pFX, _T("[patientRemark]"), m_patientRemark);
	RFX_Date(pFX, _T("[diagTime]"), m_diagTime);
	RFX_Text(pFX, _T("[diagDoctorID]"), m_diagDoctorID);
	RFX_Text(pFX, _T("[diagDeclare]"), m_diagDeclare);
	RFX_Text(pFX, _T("[diagInitCheck]"), m_diagInitCheck);
	RFX_Text(pFX, _T("[diagInstruCheck]"), m_diagInstruCheck);
	RFX_Text(pFX, _T("[diagResult]"), m_diagResult);
	RFX_Text(pFX, _T("[diagScheme]"), m_diagScheme, 1000);
	RFX_Text(pFX, _T("[diagRemark]"), m_diagRemark);

}
/////////////////////////////////////////////////////////////////////////////
// CRecordsetDiag 诊断

#ifdef _DEBUG
void CRecordsetDiag::AssertValid() const
{
	CRecordset::AssertValid();
}

void CRecordsetDiag::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG


