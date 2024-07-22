import java.util.*;
/*
   ArrayList<ArrayList<>> 
   If it is one based run a loop and add exactly n+1 ArrayLists
*/
class java03AdjListRepresentation
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,m,u,v;
		n=sc.nextInt();
		m=sc.nextInt();
		ArrayList< ArrayList<Integer> > adj= new ArrayList<ArrayList<Integer> >();
		for(int i=0;i<=n;i++)
			adj.add(new ArrayList<Integer>());

		for(int i=0;i<m;i++)
		{
			u=sc.nextInt();
			v=sc.nextInt();
			adj.get(u).add(v);
			adj.get(v).add(u);
		}

		for(int i=1;i<=n;i++)
		{
			System.out.print(i+" -> ");
			for(int j=0;j<adj.get(i).size();j++)
				System.out.print(adj.get(i).get(j)+" ");
			System.out.println();
		}

		//System.out.print("Hello jee "+s);
	}
}