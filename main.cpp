#include <QCoreApplication>
#include <QDir>
#ifdef WIN32
#include <Windows.h>
#endif
#include "../include/err_def.h"

extern int	dvbt_main(int argc, char *argv[]);
extern int hldLibrary_Load();

int main(int argc, char *argv[])
{
    int nRet;
#ifdef WIN32
    QString strPath = QDir::currentPath()+"/lib";
    if(true != SetDllDirectory(strPath.toStdWString().c_str())) {
        qDebug("SetDllDirectory(%s) failed. program exit.", strPath.toLocal8Bit().data());
        return -1;
    }
#endif
    nRet = hldLibrary_Load();
    if(nRet == SUCCESS)
        dvbt_main(argc, argv);
    return 0;
}

