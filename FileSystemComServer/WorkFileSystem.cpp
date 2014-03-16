// WorkFileSystem.cpp : Implementation of CWorkFileSystem

#include "stdafx.h"
#include "WorkFileSystem.h"


// CWorkFileSystem
HRESULT CWorkFileSystem::getNames(const std::string &path, std::vector<std::string>* names)
{

	//wstring Path = string_to_wstring(p);

	WIN32_FIND_DATA FindFileData;
	HANDLE hf;

	hf = FindFirstFile(CA2W(path.c_str()), &FindFileData);

	std::vector<std::string> v;
	if (hf != INVALID_HANDLE_VALUE)
	{
		do
		{
			//wcout << "FindFileData.dwFileAttributes= " << FindFileData.dwFileAttributes << endl;
			if (FindFileData.dwFileAttributes != FILE_ATTRIBUTE_DIRECTORY)
			{
				//v.push_back(std::string(FindFileData.cFileName));

				char ch[260];
				char DefChar = ' ';
				WideCharToMultiByte(CP_ACP, 0, FindFileData.cFileName, -1, ch, 260, &DefChar, NULL);

				std::string ff(ch);
				int y = 0;
			}
		} while (FindNextFile(hf, &FindFileData) != 0);
	}



	/*CFileFind FileFind;

	for (int count = 1; count <= 2; count++)
	{
		BOOL FlagFile = FileFind.FindFile(FullPath);
		while (FlagFile == 1)
		{
			FlagFile = FileFind.FindNextFile();
			if ((FileFind.IsDirectory() && !FileFind.IsDots() && count == 2) || (!FileFind.IsDirectory() && !FileFind.IsHidden() && count == 1))
			{
				//n++;
				CString m_FileName = FileFind.GetFileName();
				CString mm = FileFind.GetFilePath();

				SHFILEINFO Info;
				int len = sizeof (Info);

				// Добываем изображение (маленький значок) 
				::SHGetFileInfo(mm, 0, &Info, len, SHGFI_ICON | SHGFI_LARGEICON);
				UINT id = Info.iIcon;

				CString sName(mm);

				// Отсекаем лишние символы (сначала в конце строки) 
				if (sName.Right(1) == '\\')
					sName.SetAt(sName.GetLength() - 1, '\0');
				// Затем в начале строки
				int iPos = sName.ReverseFind('\\');

				if (iPos != -1)
					sName = sName.Mid(iPos + 1);

				CMyViewCopy->AddItemsList(sName, m_pImgList, id);
			}
		}
	}
	*/

	return S_OK;
}
