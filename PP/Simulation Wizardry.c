#include <iostream>

using namespace std;

struct point{
	int value;
	int cost;
	bool is_wall;
	bool is_bumper;

}grid[55][55];

int nextdir(int dir)
{
	if(dir == 0)return 3;
	if(dir == 1)return 0;
	if(dir == 2)return 1;
	if(dir == 3)return 2;
}

int getpoint(int x,int y)
{
	if(grid[x][y].is_bumper)return grid[x][y].value;
	return 0;
}

int gettime(int x,int y)
{
	if(grid[x][y].is_bumper||grid[x][y].is_wall)return grid[x][y].cost+1;

	return 1;
}
int solve(int sx,int sy,int dir,int timeleft)
{
	int one_point = 0;
	while(1)
	{

		switch(dir)
		{
			case 0:sx++;break;
			case 1:sy++;break;
			case 2:sx--;break;
			case 3:sy--;break;

		}

		timeleft -= gettime(sx,sy);
		if(timeleft  < 1)return one_point;
		one_point += getpoint(sx,sy);

		if(grid[sx][sy].is_wall||grid[sx][sy].is_bumper)
		{
			if(dir == 0)sx--;
			if(dir == 1)sy--;
			if(dir == 2)sx++;
			if(dir == 3)sy++;
			dir = nextdir(dir);

		}

	}

}

int main()
{
	int m,n,i,j;
	int wallcost,n_bumper;
	int x,y,p_value,p_cost;
	int dir,timeleft;
	int sum_point = 0;
	cin>>m>>n;

	for(i = 1;i <= m;i++)
		for(j = 1;j <=n;j++)
			{
				grid[i][j].value = 0;
				grid[i][j].cost = 0;
				grid[i][j].is_wall = false;
				grid[i][j].is_bumper = false;
			}

	cin>>wallcost;

	for(i = 1; i <= m;i++)
	{
		grid[i][1].is_wall = true;
		grid[i][1].cost =wallcost;
		grid[i][n].is_wall = true;
		grid[i][n].cost = wallcost;
	}

	for(i = 1; i <= n;i++)
	{
		grid[1][i].is_wall = true;
		grid[1][i].cost = wallcost;
		grid[m][i].is_wall = true;
		grid[m][i].cost = wallcost;
	}



	cin>>n_bumper;

	for(i = 0;i < n_bumper;i++)
	{
		cin>>x>>y>>p_value>>p_cost;
		grid[x][y].is_bumper = true;
		grid[x][y].value = p_value;
		grid[x][y].cost = p_cost;
	}

	while(cin>>x>>y>>dir>>timeleft)
	{
		int one_point = 0;
		one_point = solve(x,y,dir,timeleft);
		cout<<one_point<<endl;
		sum_point += one_point;
	}

	cout<<sum_point<<endl;
	return 0;
}
