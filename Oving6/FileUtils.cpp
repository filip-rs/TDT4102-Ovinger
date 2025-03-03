#include "FileUtils.h"
#include <fstream>


void writeUserInputToFile(const std::string &path)
{
	// BEGIN: 1a
	std::ofstream output_stream{path};
	string user_input;
	cin >> user_input;

	while (user_input != "quit") {
		output_stream << user_input << endl;
		cin >> user_input;
	}
	// END: 1a
}


void addLineNumbers(const std::string &filename)
{
	// BEGIN: 1b
	std::ifstream input_stream{filename};
	if (!input_stream) {
		cerr << "Cant open the file lmfao" << endl;
		return;
	}

	std::ofstream output_stream{filename + ".linum"};

	int line_number = 1;
	string linenum_line;

	while (input_stream) {
		string line;
		if (getline(input_stream, line)) {
			linenum_line = to_string(line_number) + " " + line;
			output_stream << linenum_line << endl;
			line_number++;
		}
	}
	// END: 1b
}