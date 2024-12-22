#include <iostream>
using namespace std;

struct tuple
{
    int x, y;
    void nhap()
    {
        cin >> x >> y;
    }
};

bool phan_xa(int a[], tuple tp[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
    	bool check = false;
    	for (int j = 0; j < k; j++)
    	{
    		if (tp[j].x == a[i] && tp[j].y == a[i])
    		{
    			check = true;
    			break;
			}
		}
		if (!check)
		{
			return false;
		}
	}
	return true;
}

bool doi_xung(tuple tp[], int k)
{
    for (int i = 0; i < k; i++)
    {
    	bool check = false;
    	for (int j = 0; j < k; j++)
    	{
    		if(tp[i].x == tp[j].y && tp[i].y == tp[j].x)
    		{
    			check = true;
    			break;
			}
		}
		if (!check)
		{
			return false;
		}
	}
	return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    tuple tp[k];
    for (int i = 0; i < k; i++)
    {
        tp[i].nhap();
    }

    if (phan_xa(a, tp, n, k))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
	
	if (doi_xung(tp, k))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

