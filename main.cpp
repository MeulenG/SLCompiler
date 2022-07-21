// Haxor Language

// Copyright (C) 2022, Oliver Meulengracht

// This program is free software : you can redistribute it and / or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation ? , either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char* argv[]) // or char** argv 
{
    string filename = argv[1];
    ifstream input;

    input.open(filename);
    // Check input parameters
    if (argc == 1) {
        printf("Haxor: invalid number of arguments\n");
        return -1;
    }
    else if(!input.is_open()) {
        cout << "Unable to open file";
        return -1;
    }
    else {
        while (input)
        {
            string line;
            getline(input, line);
            cout << line << '\n';
        }   
    }
  input.close();
  return 0;
}