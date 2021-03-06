#include "advstring.h"
#include <iostream>

int main(int argc,char** argv)
{
advstring asSampleText;
asSampleText = "------advstringtest------";
asSampleText.DispStringEndl();

std::string sSampleStd = "sSampleStd";
const char* pchSampleChar = "pchSampleChar";
int nSampleInt = 1234;
float nSampleFloat = (float)1234.12;
double nSampleDouble = 12345.12345;

advstring asReturn;
std::string sReturnStd;
char* pchReturnChar;
float nReturnFloat;
double nReturnDouble;

//---constructor sample
advstring asSample1("asSample1");
advstring asSample2(sSampleStd);
advstring asSample3(pchSampleChar);
advstring asSample4(nSampleInt);
advstring asSample5(nSampleFloat);
advstring asSample6(nSampleDouble);

asSample1.DispStringEndl();
asSample2.DispStringEndl();
asSample3.DispStringEndl();
asSample4.DispStringEndl();
asSample5.DispStringEndl();
asSample6.DispStringEndl();

asReturn = asSample1;
sReturnStd = (const char*)asSample2;
pchReturnChar = asSample3;
//nReturnInt = asSample4;
nReturnFloat = asSample5;
nReturnDouble = asSample6;

delete[] pchReturnChar;   // please delete this pointer this may cause a memory leak.

advstring asCheck1;
advstring asCheck2;
advstring asCheck3;
advstring asCheck4;
char chcsword=0;
char chasword=0;
std::string glad("role");
char kkk ='a';
float nJAsdf((float)0.1);
bool bCheck;
std::string coolads = "1";

asCheck1 = "mad";
asCheck2 = "bad";
asCheck3 = asCheck1 + asCheck2;
asCheck3 += "sadp";

int naslen = asCheck3.GetLength();
int y = asCheck3.Find('d');
y = asCheck3.Find('q');
y = asCheck3.Find('m');
y = asCheck3.Find('p');
y = asCheck3.ReverseFind('d');
y = asCheck3.ReverseFind('q');
y = asCheck3.ReverseFind('m');
y = asCheck3.ReverseFind('p');
y = asCheck3.Find('d',4);
y = asCheck3.Find('q',20);
//y = asCheck3.Find('m',-1); // assert
y = asCheck3.Find('p',asCheck3.GetLength()-1);
//chasword = asCheck3.GetAt(10); // assert
//chasword = asCheck3.GetAt(-1); // assert
chasword = asCheck3.GetAt(0);
chasword = asCheck3.GetAt(asCheck3.GetLength()); 
//asCheck3.SetAt(10,'c'); // assert
//asCheck3.SetAt(-1,'c'); // assert
//asCheck3.SetAt(asCheck3.GetLength(),'c');  // assert
asCheck3.SetAt(0,'c'); 
asCheck3.SetAt(asCheck3.GetLength() -1,'c');
const char* pchasBuffer = asCheck3.GetBuffer();
bool baschechemp = asCheck3.IsEmpty();
asCheck3.Empty();
baschechemp = asCheck3.IsEmpty();
asCheck3 = "radradhadr";
y = asCheck3.Replace('r','y');
y = asCheck3.Replace('q','y');
y = asCheck3.Replace('a','y');
y = asCheck3.Replace('y','y');
asCheck3.Remove('h');
asCheck3.Remove('q');
asCheck3.Remove('y');
asCheck3 = "radradhadr";
y = asCheck3.Insert(3,'l');
y = asCheck3.Insert(20,'l');
y = asCheck3.Insert(-1,'l');
y = asCheck3.Insert(asCheck3.GetLength(),'l');
y = asCheck3.Insert(0,'l');
asCheck3 = "radradhadr";
asCheck4 = asCheck3.Mid(5,6);
asCheck4 = asCheck3.Mid(20,6);
asCheck4 = asCheck3.Mid(5,5);
asCheck4 = asCheck3.Mid(-1,6);
asCheck4 = asCheck3.Mid(3,5);
asCheck4 = asCheck3.Mid(-1,16);
asCheck4 = asCheck3.Mid(-1,0);
asCheck4 = asCheck3.Mid(0,0);
asCheck3 = "radradhadr";
int nasCom = asCheck3.Compare("cool");
asCheck4 = "rad";
nasCom = asCheck3.Compare(asCheck4);
asCheck4 = "";
nasCom = asCheck3.Compare(asCheck4);
asCheck4 = "radradhadr";
nasCom = asCheck3.Compare(asCheck4);
y = asCheck3.Replace("rad","rod");
y = asCheck3.Replace("cad","cad");
y = asCheck3.Replace("a","o");
y = asCheck3.Replace("vvy","vvy");
y = asCheck3.Replace("","vvy");
y = asCheck3.Replace("o"," ");
asCheck3 = "radradhadr";
y = asCheck3.Insert(3,"cool");
y = asCheck3.Insert(20,"cool");
y = asCheck3.Insert(-1,"cool");
y = asCheck3.Insert(asCheck3.GetLength(),"cool");
y = asCheck3.Insert(0,"cool");
asCheck3 = "radcadmadpaddadqadrad";
y = asCheck3.Find("dad");
y = asCheck3.Find("rad");
y = asCheck3.Find("maad");
y = asCheck3.Find("ttt");
y = asCheck3.Find("uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu");
y = asCheck3.ReverseFind("dad");
y = asCheck3.ReverseFind("rad");
y = asCheck3.ReverseFind("maad");
y = asCheck3.ReverseFind("ttt");
y = asCheck3.Find("rad",4);  
y = asCheck3.Find("qad",20);
//y = asCheck3.Find("maad",-1); // assert
y = asCheck3.Find("pad",asCheck3.GetLength()-1);
asCheck3 = "xxxxxxxxxxxxxx";
y = asCheck3.GetLength();
asCheck2 = "cool";
asCheck3.Format("%s%d",asCheck2.GetBuffer(),10);
y = asCheck3.GetLength();
asCheck3 = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
y = asCheck4.GetLength();
asCheck4.Format("%dCOOL%s%f%0.2f%c%s",10,glad.c_str(),nJAsdf,nJAsdf,kkk,asCheck3.GetBuffer());
y = asCheck4.GetLength();
bCheck = (asCheck3 == asCheck3);
bCheck = (asCheck3 == asCheck4);
bCheck = (asCheck3 != asCheck3);
bCheck = (asCheck3 != asCheck4);
asCheck3 = asCheck3 +1;
asCheck3 = asCheck3 +(float)1.01;
asCheck3 = "radcadmadpaddadqadrad";
asCheck4 = asCheck3.Left(5);
asCheck4 = asCheck3.Right(5);
asCheck4 = asCheck3.Left(asCheck3.GetLength());
asCheck4 = asCheck3.Right(asCheck3.GetLength());
asCheck4 = asCheck3.Left(asCheck3.GetLength() + 1);
asCheck4 = asCheck3.Right(asCheck3.GetLength() + 1);
asCheck3.ReleaseBuffer();
asCheck3.SetCurTime();
asCheck3.DispStringEndl();
asCheck3.SetCurDateTime();
asCheck3.DispStringEndl();
asCheck3.SetCurDateTimeStamp();
asCheck3.DispStringEndl();
asCheck3.Empty();
asCheck3.AppCurTime();
asCheck3.AppCurDateTime();
asCheck3.AppCurDateTimeStamp();
asCheck3 = "advstring-advance string";
advstring ascool;
ascool = asCheck3.MakeUpper();
asCheck3.DispStringEndl();
ascool = asCheck3.MakeLower();
asCheck3.DispStringEndl();
ascool = asCheck3.MakeReverse();
asCheck3.DispStringEndl();
advstring asCheck8(asCheck3 + asCheck3);
advstring asCheck6(asCheck3 + "mam");
advstring asCheck5("mam" + asCheck3);
advstring asCheck9(1 + asCheck3);
advstring asCheck10(1.02 + asCheck3);
advstring asCheck11(1.012342 + asCheck3);
asCheck4 = "radradhadr";
asCheck3 = "radradhadr";
ascool = asCheck3.MakeUpper();
nasCom = asCheck3.Compare(asCheck4);
nasCom = asCheck3.CompareNoCase(asCheck4);
nasCom = asCheck3.IsUpper();
nasCom = asCheck3.IsLower();
nasCom = asCheck4.IsUpper();
nasCom = asCheck4.IsLower();
asCheck4.Swap(asCheck3);
advstring asCheckTemp;
asCheckTemp = asCheck3.GetCurDate();
asCheckTemp = asCheck3.GetCurTime();
asCheckTemp = asCheck3.GetCurDateTime();
asCheckTemp = asCheck3.GetCurDateTimeStamp();
asCheck3.SetCurDate();
asCheck3.AppCurDate();
asCheckTemp = "advstring-advance string";
asCheckTemp.DispStringEndl();
asCheckTemp = asCheckTemp.GetXOREncryptedData("cool");
asCheckTemp.DispStringEndl();
asCheckTemp = asCheckTemp.GetXORDecryptedData("cool");
asCheckTemp.DispStringEndl();
asCheckTemp.SetXOREncryptedData("cool");
asCheckTemp.DispStringEndl();
asCheckTemp.SetXORDecryptedData("cool");
asCheckTemp.DispStringEndl();
asCheckTemp.AppXOREncryptedData("cool");
asCheckTemp.DispStringEndl();
asCheckTemp.AppXORDecryptedData("cool");
asCheckTemp.DispStringEndl();

asSampleText = "------endtest------";
asSampleText.DispStringEndl();

system("pause");

return 1;
}
