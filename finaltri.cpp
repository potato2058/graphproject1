#include <iostream>

using namespace std;

    int main()
    {
        int nvertex;		//length of first for loop
        int vertex[1000];	//array for storage of vertex values
        int nlinks;		//length of third for loop
        int mylinks[1000];	//array for storage of links values
        int a;			//input for link value 1
        int b;			//input for link value 2
	int sum = 0; 		//
        int result;

        cout << "Enter the number of vertices: ";
        cin >> nvertex;

        for (int nlower = 1; nlower <(nvertex +1); nlower++)
        {
            cout << "Enter vertex value: ";
            cin >> vertex[nlower];
        }
	
	cout <<"-----The point of referance-----\n";
	for (int nlower = 1; nlower <(nvertex +1); nlower++)
	{
	    cout << nlower << " ,";

	    
	}
	
	cout << "\n";

	for (int nlower = 1; nlower <(nvertex +1); nlower++)
	{
	    cout << vertex[nlower] << " ,";
	}

	cout << "\n";
        cout << "Enter the number of links: ";
        cin >> nlinks;

        for (int nlower = 1; nlower <(nlinks +1); nlower++)
        {
            cout << "Enter the first number of link: ";
            cin >> a;
	    cout << "Enter the second number of link: ";
            cin >> b;
            mylinks[nlower] = vertex[a] * vertex[b];
	    
            sum = sum + mylinks[nlower];
        }

	result = nlinks - (2 * sum);

        if(result < 0)
            result = 0 - result;
        
        cout << "Sum of Zeros - sum of Ones = " << result << "\n" ;

        return 0;
        
    }
