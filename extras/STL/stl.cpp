//	Pairs
void pairs() {

	pair<int, int> p = {1, 3};

	//	prints 1 4 3
	cout << p.first << " " << p.second;

	pair<int, pair<int, int>> p = {1, {3, 4}};

	cout << p.first << " " << p.second.second << " " << p.second.first;

	pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

	//	Prints 5
	cout << arr[1].second;
}





//	Vectors
void vector() {

	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int, int>> vec;

	vec.push_back({1, 2});
	vec.emplace_back(1, 2);

	//vector of size 5 with everyone as 100
	vector<int> v(5, 100);

	vector < int < v(5); //{0,0,0,0,0}

	//copy vector
	vector<int> v2(v1); //copied from v1 to v2;

	//iteration && take the vector as {10,20,30.40}
	vector<int>::iterator it = v.begin();
	it++;
	cout << *(it) << " "; //prints 20

	it += 2;
	cout << *(it) << " "; //prints 30

	vector<int>::iterator it = v.end(); //points to after 40 (null)
	vector<int>::iterator it = v.rend(); //points to before 10 (null)
	vector<int>::iterator it = v.rbegin(); //points to 40

	//to restrict the iterator on one position
	vector<int>::iterator it = v.cbegin();


	cout << v[0] << " " << v.at(0); //first element
	cout << v.back(); //last element

	//	ways to print the vector

	for (vector<int>::iterator it = v.begin; it != v.end(); it++) || for (auto it = v.begin; it != v.end(); it++)
		{
			cout << *(it) << " ";
		}

	for (auto it : v)
	{
		cout << it << " ";
	}

	v.erase(v.begin());

	v.erase(v.begin() + 2, v.begin() + 4);

	//	insert func
	vector<int>v(2, 100); //{100,100}
	v.insert(v.begin(), 300); //{300,100,100}
	v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

	vector<int>copy(2, 50);
	v.insert(v.begin(), copy.begin(), copy.end()); //{50,30,300,10,10,100,100}

	// {10,20}
	cout << v.size(); //2
	v.pop_back(); //{10}

	v1.swap(v2); //for swapping two vectors

	v.clear(); //erases the entire vector

	cout << v.empty() //"1" if vector is empty else "0"
}





//	Lists
void list() {
	list<int> ls;

	ls.push_back(2); //{2}
	ls.emplace_back(4); //{2,4}

	ls.push_front(5); //{5,2,4}

	ls.emplace_front(); //{2,4}

	//	rest func are same as vector
	// 	begin,end,rbegin,rend,clear,insert,size,swap
}





//	Queues
void dequeue() {
	dequeue<int> dq;
	dq.push_back(1); //{1}
	dq.emplace_back(2); //{1,2}
	dq.push_front(4); //{4,1,2}
	dq.emplace_front(3);; //{3,4,1,2}

	dq.pop_back(); //{3,4,1}
	dq.pop_front(); //{4,1}

	dq.back();

	dq.front();

	//	rest func are same as vector
	//	begin,end,rbegin,rend,clear,insert,size,swap
}





//	Stacks
void stack() {
	stack<int> st;
	st.push(1); //{1}
	st.push(2); //{2,1}
	st.push(3); //{3,2,1}
	st.push(3); //{3,3,2,1}
	st.emplace(5); //{5,3,3,2,1}

	cout << st.top(); //prints 5

	st.pop(); // {3,3,2,1}

	cout << st.top(); //3

	cout << st.size();

	cout << st.empty();

	stack<int> st1, st2;
	st1.swap(st2);
}





//	Queues
void queue() {
	queue<int> q;
	q.push(1); //{1}
	q.push(2); //{1,2}
	q.emplace(4); //{1,2,4}

	q.back() += 5;

	cout << q.back(); // 9

	cout << q.front(); // 1

	q.pop(); //{2,9}

	cout << q.front(); // 2

//	size, swap, empty same as stack
}





//	Priority Queues
void priority_queue() {
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(5); //{5}
	pq.push(2); //{5,2}
	pq.push(8); //{8,5,2}
	pq.emplace(10); //{10,8,5,2}

	cout << pq.top(); // 10

	pq.pop(); // 8

	//	size,swap,empty func are same as others



	//	Minimum Heap
	priority_queue<int, vector<int>, greater<int>>pq;
	pq.push(5); //{5}
	pq.push(2); //{2,5}
	pq.push(8); //{2,5,8}
	pq.emplace(10); //{2,5,8,10}

	cout << pq.top(); // 2
}





//	Sets
void set() {
	set<int> st;
	st.insert(1); //{1}
	st.emplace(2); //{1,2}
	st.insert(2); //{1,2}
	st.insert(4); //{1,2,4}
	st; insert(3); //{1,2,3,4}

	//	Functionality if insert in vector
	//	can be also, that only increases
	//	efficiency

	//	begin(),end(),rbegin(),rend(), size(),empty() and swap()
	//	are the same as those of above

	//	{1,2,3,4,5}
	auto it = st.find(3);

	//	{1,2,3,4,5}
	auto it = st.find(6);

	//	{1,4,5}
	st.erase(5); //	erases 5 // takes O(log n) time

	auto it = st.find(3);
	st.erase(it); //	erases 3 //	takes O(1) time

	//	{1,2,3,4,5}
	auto it1 = st.find(2);
	auto it2 = st.find(4);
	st.erase(it1, it2); //	after erase {1,4,5} [fist, last)

	//	lower_bound() and upper_bound() function works in the same way
	//	as in vector it does.

	//	This is the syntax
	auto it = st.lower_bound(2);

	auto it - st.upper_bound(3);
}





//	Multi Sets
void multi_set() {
	//	everything is same as set except it also stores duplicate elements

	multi_set<int> ms;
	ms.insert(1); //{1}
	ms.insert(1); //{1,1}
	ms.insert(1); //{1,1,1}

	ms.erase(1); //all 1's are erased

	//	only a single one erased
	ms.erase(ms.find(1));

	ms.erase(ms.find(1), ms.find(1) + 2); //	erases a batch of 1(s) from
	//	from first iteration to 3rd but not
	//	but not including 3rd as [,).

	//	rest all functions are same as sets
}





//	Unordered Sets
void unordered_set() {
	unordered_set<int> st;
//	lower_bound and upper_bound func
//	does not works, rest all function are same
//	as above, it doesnot stores in any
//	particular order it has a better time complexity
//	than set in most cases, except some when collision happens
}





//	Maps
void map() {
	//{key, value}
	map<int, int> mpp;

	map<int, pair<int, int>> mpp;

	map<pair<int, int>, int> mpp;

	//	key values can be anything

	mpp[1] = 2;
	mpp.emplace({3, 1});

	mpp.insert({2, 4});

	{
		{1, 2}
		{2, 4}
		{3, 1}
	}

	for (auto it : mpp) {
		cout << it.first << " " << it.second << endl;
	}

	//	same options for using iterators
	//	as we did in a vector for the insert function

	cout << mpp[1];	// 2
	cout << mpp[5];	// 0, since it doesn't exist

	auto it = mpp.find(3);	//	points to the position where 3 is found
	cout << *(it).second;   //	1

	auto it = mpp.find(5);	// points to end of the map as it doesn't exist

	//	lower_bound and upper_bound
	auto it = mpp.lower_bound(2);

	auto it = mpp.upper_bound(3);



	map<char, int> cnt;
	string x = "Mohit Pal Singh";

	for (char c : x) {
		cnt[c]++;
	}
	cout << cnt['a'] << " " << cnt['z'] << endl; //	return the count of 'a' and 'z'
	//	erase,swap,size,empty are same as above
}





//	Multi Maps
void multi_map() {
	//	everything same as map, only it can store multiple keys
	//	only mpp[keys] cannot be used here
}





//	Unordered Maps
void unordered_map() {
	//	same as set and unordered_set difference
}





//	Comparators
bool comp(pair<int, int>p1, pair<int, int>p2) {
	if (p1.second < p2.second) {
		return true;
	}
	else if (p1.second == p2.second) {
		if (p1.first > p2.second)
			return true;
	}
	return false;
}





//	Extras
void extra() {
	//	sorting
	sort(a, a + n); //	O(N log N)


	pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

	//	sort it according to second element
	//	if second element is same, then sort
	//	it according to first element but in the descending

	sort(a, a + n, comp);
	//	{{4,1},{2,1},{1,2}};

	bool preset = binary_search(a.begin(), a.end(), 4) //	O(log N)

	              int num = 7; // 111
	int count = __builtin_popcount();

	long long num = 16578478687;
	int count = __builtin_popcountll();


	string s = "123";

	do {
		count << S << endl;
	} while (next_permutation(s.begin(), s.end()));

	///	123
	/// 132
	/// 213
	/// 231
	/// 312
	/// 321

	int maxi = *max_element(a, a + n);
}