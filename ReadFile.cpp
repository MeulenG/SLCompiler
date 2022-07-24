#ifdef READFILE
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
#endif