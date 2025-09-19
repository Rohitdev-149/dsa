
    while(q.size()>0 && q.front()<i ) q.pop();
    if(q.size()==0 || q.front()>=i+k) result.push_back(0);
    else result.push_back(arr[q.front()]);
    i++;
}
for(auto x:result) cout<<x<<" ";