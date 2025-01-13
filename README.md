# atcode-practice

[AtCoder contest table](https://kenkoooo.com/atcoder/#/table/)
[直接自分の見れるリンク](https://kenkoooo.com/atcoder/#/table/RJU4bFu5mbRwqgfP)
どの問題をといたかの確認ができる
user id:
`RJU4bFu5mbRwqgfP`

## usage of bin scripts
### ojd to down load and create dir
```sh
sh bin/ojd.sh NUMBER ALPHABET
```

### ojs to submit file
```sh
sh bin/ojs.sh FILENAME
```

## additional alias fo atcode
```sh
# alias
# atcode
alias ojd="sh PATH/atcode-practice/bin/ojd.sh"
alias ojt="gw main.cpp && oj t"
alias cdat="cd PATH/atcode-practice/"

# optional
alias ojs="sh PATH/atcode-practice/bin/ojs.sh"
function atcode(){
  cdat
  sh PATH/atcode-practice/bin/ojd.sh $1 $2
  cd abc$1/abc$1\_$2
}
```

### for me
ojs, atcodeともに`~/Sync/shell_profile/bin/`にshell scriptがあるので`export PATH=$PATH:~/Sync/shell_profile/bin/`をzshrcに書けばいい感じのが使えます
