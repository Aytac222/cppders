#include <iostream>
#include <string.h>
using namespace std;

void splitStringToArray (string line , char splitter[])
{
	string result[4];
    int n = line.length();
 	char aytac[n+1];
 	
 	strcpy(aytac, line.c_str()); 	

    cout << "The tokens are:" << endl;
    char *token = strtok(aytac,splitter);
  	
    while (token)
    {
        cout << token << endl;
        result.push_back(token);
        cout << "-----" << endl;
        token = strtok(NULL,splitter);
    }
    
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


//	string a;
//	cin>>a;

	splitStringToArray("1234,xeyyam,islamzade",",");
	
	return 0;
}
