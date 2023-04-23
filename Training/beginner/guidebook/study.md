## 学んだこと
- pair<pair<string,int>,int> p[N]
    - これでペアを中に持つペアが作られる
- 数字を降順に並べたいときは数字に-1をかけてsortすればいい！！
    - p[i] = make_pair(make_pair(S, -P), i); //ここめちゃかしこい！！
- sort関数には始まりと終わりのポインタを渡す
    - p[100]という配列なら  sort(p, p+100)