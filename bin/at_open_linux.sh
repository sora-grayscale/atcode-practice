#!/bin/bash


# カレントディレクトリの名前を取得
DIR_NAME=$(basename "$PWD")

# 正規表現を使ってNUMBERとALPHABETを抽出
if [[ $DIR_NAME =~ ^abc([0-9]+)_([a-z])$ ]]; then
    NUMBER=${BASH_REMATCH[1]}
    ALPHABET=${BASH_REMATCH[2]}
else
    echo "Error: Current directory name must be in the format 'abcNUMBER_ALPHABET'."
    exit 1
fi

# 引数の確認
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 FILENAME"
    exit 1
fi

# 引数の取得
FILENAME=$1

# URL の生成
URL="https://atcoder.jp/contests/abc$NUMBER/submit?taskScreenName=abc${NUMBER}_$ALPHABET"

xdg-open "$URL"

cat "$FILENAME" | xsel -ib
