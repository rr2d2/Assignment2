//     ______                    ________
//    / ____/___  _______  __   /_  __/ /_  ____  ____ ___  ____  _________  ____
//   / /   / __ \/ ___/ / / /    / / / __ \/ __ \/ __ `__ \/ __ \/ ___/ __ \/ __ \
//  / /___/ /_/ / /  / /_/ /    / / / / / / /_/ / / / / / / /_/ (__  ) /_/ / / / /
//  \____/\____/_/   \__, /    /_/ /_/ /_/\____/_/ /_/ /_/ .___/____/\____/_/ /_/
//                  /____/                              /_/
//
//                          TTTTTTTTTTTTTTTTTTTTT
//                          TTTTTTTTTTTTTTTTTTTTT
//                          TTTTT    TTTT    TTTT
//                                   TTTT
//                           TTT     TTTT   TTT  TTT
//                          TTTTT    TTTT   TTTTTTTT
//                          TT TT    TTTT   TTTTTTTT
//                         TTTTTTT   TTTT   TT TT TT
//                        TTT   TTT  TTTT  TTT    TTT
//                                   TTTT
//                                TTTTTTTTTT
//
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>


int main() {
	srand( time(NULL) );
	std::ofstream my_file("input.txt");
    int num_of_elements = 100000;
    int biggest_element = 10000;
	if (my_file.is_open()) {
        my_file << num_of_elements;
		for (int i = 0; i < num_of_elements; i++) {
			my_file << std::endl << rand() % biggest_element + 1;
		}
	}
	my_file.close();
}
			
		
