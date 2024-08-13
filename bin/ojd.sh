#!/bin/bash

# 引数の確認
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 NUMBER ALPHABET"
    exit 1
fi

# 引数の取得
NUMBER=$1
ALPHABET=$2

# ディレクトリの作成
DIR="abc$NUMBER/abc${NUMBER}_$ALPHABET"
mkdir -p "$DIR"
cd "$DIR"

# URL の生成
URL="https://atcoder.jp/contests/abc$NUMBER/tasks/abc${NUMBER}_$ALPHABET"

# oj download の実行
oj download "$URL"

# OSの判定とブラウザを開く
case "$(uname)" in
    Linux)
        xdg-open "$URL"  # Linuxの場合
        ;;
    Darwin)
        open "$URL"      # macOSの場合
        ;;
    CYGWIN*|MINGW32*|MSYS*|MINGW*)
        start "$URL"     # Windowsの場合
        ;;
    *)
        echo "Unsupported OS"
        exit 1
        ;;
esac
