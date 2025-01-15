# ojs.sh README.md

## 概要
`ojs.sh` は、AtCoderのコンテスト問題に対して、指定したファイルを提出するためのシェルスクリプトです。このスクリプトを使用することで、カレントディレクトリの名前に基づいて自動的にコンテスト番号と問題のアルファベットを取得し、指定したファイルを提出します。

## 使い方

### 1. スクリプトの実行

スクリプトは、以下のコマンドで実行できます。

```sh
./ojs.sh FILENAME
```

- `FILENAME`: 提出したいファイルの名前（例: `solution.cpp`）

### 2. ディレクトリの命名規則

スクリプトを実行する前に、カレントディレクトリの名前が以下の形式であることを確認してください。

```sh
abcNUMBER_ALPHABET
```

- `NUMBER`: AtCoderのコンテスト番号（例: 123）
- `ALPHABET`: 問題のアルファベット（例: a, b, c）

### 3. 例
- カレントディレクトリが `abc123_a` の場合、`solution.cpp` を提出するには:
```sh
./ojs.sh solution.cpp
```

## 注意事項
- スクリプトを実行する前に、`oj` コマンドがインストールされていることを確認してください。
- カレントディレクトリの名前が正しい形式でない場合、エラーメッセージが表示されます。

## エラーメッセージ
- カレントディレクトリの名前が正しい形式でない場合:
```sh
Error: Current directory name must be in the format abcNUMBER_ALPHABET.
```
- 引数が不正な場合:
```sh
Usage: $0 FILENAME
```

## ライセンス
[LICENSE](LICENSE)
