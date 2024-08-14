# atcode-practice

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
alias ojt="oj t"
alias cdat="cd PATH/atcode-practice/"
function atcode(){
  cdat
  sh PATH/atcode-practice/bin/ojd.sh $1 $2
  cd abc$1/abc$1\_$2
}
```
