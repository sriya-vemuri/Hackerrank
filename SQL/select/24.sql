select N,if(p is NULL,'Root',if((select count(*) from BST where P=B.N) >0,'Inner','Leaf')) from BST as B order by N;
