#include "sed.hpp"

str	replaceText(str text, str s1, str s2) {
	for (int i = 0; i != (int)text.length(); i++) {
		if (!text.compare(i, s1.length(), s1)) {
			text.erase(i, s1.length());
			text.insert(i, s2);
		}
	}
	return (text);
}

str	getText(str filename, str s1, str s2) {
	std::ifstream file(filename.c_str());
	str	text;
	str line;

	if (!file.is_open()) {
		std::cout << "Error : Could not open file!" << std::endl;
		exit(1);
	}
	while(std::getline(file, line))
		text.append(replaceText(line, s1, s2) + "\n");
	file.close();
	return (text);
}


void	newFile(str text, str filename) {
	str newFileName;
	
	newFileName = filename.append(".replace");
	std::ofstream file(newFileName.c_str());
	if (!file.is_open()) {
		std::cout << "Error : Could not open file!" << std::endl;
		exit(1);
	}
	file << text;
}

int main( int argc, char **argv ) {
	str	fileText;

	if (argc != 4) {
		std::cout << "Error : Please write 3 arguments" << std::endl;
		return (1);
	}
	fileText = getText(argv[1], argv[2], argv[3]);
	newFile(fileText, argv[1]);
	return (0);
}