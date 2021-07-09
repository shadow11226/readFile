#include "fstream"
#include "iostream"

using namespace std;

namespace NFile
{
   const char *getFile(const char *fileName, bool isLog = false)
   {
      char *retValue = 0;

      fstream File(fileName);
      if (File.is_open())
      {
         int size = 0;
         while (!File.eof())
         {
            File.get();
            ++size;
         }

         File.clear();
         File.seekg(0);

         retValue = new char[size];
         retValue[size - 1] = 0;

         File.read(retValue, size);

         if (isLog)
         {
            cout << "total readed " << size << endl;
            cout << "readed: " << File.gcount() << endl;
            cout << retValue << endl;

            printf("File %s opened: %u byte were readed \n", fileName, size);
         }
      }
      else
      {
         printf("file %s not open \n", fileName);
      }
      File.close();

      return retValue;
   }
}