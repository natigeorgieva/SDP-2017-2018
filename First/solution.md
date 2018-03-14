 
 
    int min(int a, int b)
    
    {
	 
        if (a > b)
		
            return b;
	  
        else
		
            return a;
    
    }
  
  
    int max(int a, int b)
  
    {
	
        if (a > b)
		
            return a;
	  
        else
		
            return b;
  
    }
  

    void swap(int*a, int* b)

    {
	
        int*c = 0;
	
        c = a;
	
        a = b;
	
        b = c;

    }
        
    int fib(int n)

    {
	
        if (n = 1) return 1;
	
        else if (n = 2) return 1;
	
        else
		
            return fib(n - 1) + fib(n - 2);

    }

    int fact(int n)

    {
	
        if (n = 0) return 1;
	
        if (n = 1) return 1;
	
        else
		
            return n * fact(n - 1);

    }
