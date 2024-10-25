# atcode-practice

[AtCoder contest table](https://kenkoooo.com/atcoder/#/table/)
[直接自分の見れるリンク](https://kenkoooo.com/atcoder/#/table/RJU4bFu5mbRwqgfP)
どの問題をといたかの確認ができる
user id:
`RJU4bFu5mbRwqgfP`

```sh
sh bin/ojd.sh NUMBER ALPHABET
ojt # alias ojt="oj t"
sh bin/ojs.sh FILENAME
```

```sh
# alias
# atcode
alias ojd="sh PATH/atcode-practice/bin/ojd.sh"
alias ojs="sh PATH/atcode-practice/bin/ojs.sh"
alias ojt="gw main.cpp && oj t"
alias cdat="cd PATH/atcode-practice/"
function atcode(){
  cdat
  sh PATH/atcode-practice/bin/ojd.sh $1 $2
  cd abc$1/abc$1\_$2
}
```
