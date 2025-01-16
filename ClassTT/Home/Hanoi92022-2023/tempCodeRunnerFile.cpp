        if (h < 10 && x < 10)
            cout << "0" << h << " : " << "0" << x;
        else if (h < 10 && x >= 10)
            cout << "0" << h << " : " << x;
        else if (h >= 10 && x >= 10)
            cout << h << " : " << x;
        else if (h >= 10 && x < 10)
            cout << h << " : " << "0" << x;
        cout << "\n";