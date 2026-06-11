using System;
int t = int.Parse(Console.ReadLine());
while (t-- > 0)
{
    int n = int.Parse(Console.ReadLine());
    string s = Console.ReadLine();
    int[] vis = new int[26];
    int ans = 0;
    foreach (char c in s)
    {
        int idx = c - 'A';
        if (vis[idx] == 0)
        {
            ans += 2;
            vis[idx] = 1;
        }
        else
        {
            ans += 1;
        }
    }
    Console.WriteLine(ans);
}