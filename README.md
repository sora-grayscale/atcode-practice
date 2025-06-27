# AtCoder Practice
## リンク
- [AtCoder Contest Table](https://kenkoooo.com/atcoder/#/table/)
- [自分のコンテスト結果を直接見るリンク](https://kenkoooo.com/atcoder/#/table/RJU4bFu5mbRwqgfP)
このリンクを使うと、どの問題を解いたかを確認できます。

**User ID:**
`RJU4bFu5mbRwqgfP`

## 開始方法

1. **ojのインストール/ログイン**
   
   [ojのインストール手順](https://github.com/online-judge-tools/oj/blob/master/README.ja.md)を参照してください。
   
   提出の際にログインしろって下記のようなフォーマットで聞かれるのでそのときにログインするのが簡単
   ```sh
   oj login URL
   ```

2. **仮想環境の作成**
   
   以下のコマンドを実行して仮想環境を作成します。
   ```sh
   python3 -m venv venv
   source venv/bin/activate
   ```

3. **依存関係のインストール**
   
   次のコマンドで必要なパッケージをインストールします。
   ```sh
   pip install -r requirements.txt
   ```

4. **AtCoderの開始**
   
   以下のコマンドでAtCoderを開始します。
   ```sh
   atcode  # shell_profileを同期し、binへのパスをエクスポートしている場合
   ```

5. **テストの実行**
   
   以下のコマンドでテストを簡単に実行できます。
   ```sh
   ojt  # 下記のエイリアスを使用
   ```

6. **提出**
   
   以下のコマンドでファイルを提出します。
   ```sh
   ojs  # shell_profileを同期し、binへのパスをエクスポートしている場合
   ```

## binスクリプトの使い方

### ojd: ダウンロードとディレクトリ作成
```sh
sh bin/ojd.sh NUMBER ALPHABET
```

### ojs: ファイルの提出
```sh
sh bin/ojs.sh FILENAME
```

## AtCoder用の追加エイリアス
```sh
# AtCoder用の共通パスを定義
ATCODE_PATH=path/to/atcoder
ATCODE_ENV_PATH="$ATCODE_PATH/venv/bin/activate"
ATCODE_BIN_PATH="$ATCODE_PATH/bin"

## AtCoder用の追加エイリアス
alias atsource="source $ATCODE_ENV_PATH"
alias cdat="cd $ATCODE_PATH"
alias ojd="sh $ATCODE_BIN_PATH/ojd.sh"
alias ojs="sh $ATCODE_BIN_PATH/ojs.sh"
alias ojt="gw main.cpp && oj t && rm ./a.out"
alias atopen="sh $ATCODE_BIN_PATH/at_open.sh"

function atcode(){
  cdat
  ojd $1 $2
  cd abc$1/abc$1\_$2
}
```
local_binのは使わないことにした
