
#include<iostream>
using namespace std;


bool isChar(char c)
{
	return ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'));
}

bool isDigit(const char c)
{
	return (c >= '0' && c <= '9');
}


bool is_valid(string email)
{
	
	if (!isChar(email[0])) {

		return 0;
	}
	
	int At = -1, Dot = -1;
    int countAt = 0,countDot = 0;
	
	for (int i = 0;
		i < email.length(); i++) {


		if (email[i] == '@') {
            countAt++;
			At = i;
		}

		
		else if (email[i] == '.') {
          countDot++;
			Dot = i;
		}
	}

	
	if (At == -1 || Dot == -1)
		return 0;

	
	if (At > Dot)
		return 0;
	
     if(countAt > 1 || countDot > 1 ){
         return 0;
     }
	
	return !(Dot >= (email.length() - 1));
}


int main()
{

	string email;
	cout<<"Enter your mail : ";
	cin>>email;

	
	bool ans = is_valid(email);

	if (ans) {
		cout << email << " : "
			<< "valid" << endl;
	}
	else {
		cout << email << " : "
			<< "invalid" << endl;
	}

	return 0;
}