#include "Header.h"

int main()
{
	PlaySound(TEXT("Mission_Impossible.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	EncryptionUI();
	while (true)
	{
		cout << "Encode or Decode or Quit (Type the command): ";
		cin >> entry;
		//transform(entry.begin(), entry.end(), entry.begin(), toupper);

		if (entry == "QUIT" || entry ==  "q" || entry ==  "Q" || entry == "quit")
		{
			cout << "Bye!" << endl;
			break;
		}
		else if (entry == "ENCODE" || entry ==  "E" || entry ==  "e" || entry == "encode")
		{
			//encode
			entry2 = 1;
			//Matrix Key is called in Inverse Matrix
			InverseMatrix();
			GetMessage();
			GroupMessage();
			MatrixMulti(key, grouped);
			CreateFile();
			WriteToFile(inverse, product);
			system("pause");
		}
		else if (entry == "DECODE" || entry ==  "D" || entry ==  "d" || entry == "decode")
		{
			//decode
			entry2 = 0;
			ReadMessage();
			MatrixMulti(Minverse, Mmessage);
			DisplayMessage();
			system("pause");
		}
		else
		{
			cout << "Please enter a valid entry." << endl;
			system("pause");
		}
		system("CLS");
	}
}