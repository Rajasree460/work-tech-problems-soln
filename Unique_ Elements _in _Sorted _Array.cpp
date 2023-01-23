int removeDuplicates(vector<int> &A) {
    // add logic here
	int id=1;
        int n=A.size();
        for(int i=1;i<n;i++){
            if(A[i]!=A[i-1]){
                A[id]=A[i];
                id++;
            }
            

        }
        return id;
}
