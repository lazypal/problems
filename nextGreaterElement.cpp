/**
 * @rohit
 * not leetcode
 */
vector<int> getNextGreaterElement (vector<int> &A) {
	// add your logic here
	vector<int> v(A.size(), -1);
	
	stack<int> s;
	
	for(int i = A.size() - 1; i >= 0; i--) {
		while(!s.empty() && A[i] >= s.top()) {
			s.pop();
		}
		if(!s.empty()) {
			v[i] = s.top();
		}
		s.push(A[i]);
	}
	
	return v;
}