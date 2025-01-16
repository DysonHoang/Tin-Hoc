int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x[i];
    }
    cin >> q;
    for (int i = 1; i <= q; ++i)
    {
        cin >> t[i];
    }

    sort(x + 1, x + n + 1);

    for (int i = 1; i <= q; ++i)
    {
        int *pos = upper_bound(x + 1, x + n + 1, t[i]);
        cout << (pos - (x + 1)) << "\n";
    }
