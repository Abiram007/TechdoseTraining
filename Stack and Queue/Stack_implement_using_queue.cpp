class MyStack {
public:
    queue<int> q;

void push(int x) {
    q.push(x);
    for(int i=1; i<q.size(); i++){
        q.push(q.front());
        q.pop();
    }
}

int pop() {
   if(empty()){
       cout << "Empty";
       return -1;
   }
    int x = q.front();
    q.pop();
    return x;
}

int top() {
    if(empty()){
        cout << "Empty";
        return -1;
    }
    return q.front();
}

bool empty() {
    return q.empty();
}
};
