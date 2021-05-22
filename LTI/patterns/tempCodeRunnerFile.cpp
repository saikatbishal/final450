for (int j = 1; j <= m;j++)
    {
        for (int k = 0; k <= j; k++)
        {
            cout << "  ";
        }
        for (int i = m - j; i > 0; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }