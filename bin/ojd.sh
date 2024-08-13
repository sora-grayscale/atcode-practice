#!/bin/bash

# 引数の確認
if [ "$#" -ne 2 ] && [ "$#" -ne 1 ]; then
    echo "Usage: $0 NUMBER ALPHABET or $0 ALPHABET"
    exit 1
fi

# 引数の取得
if [ "$#" -eq 1 ]; then
    ALPHABET=$1
    # カレントディレクトリの確認
    CURRENT_DIR=$(basename "$PWD")
    if [[ $CURRENT_DIR =~ ^abc([0-9]+)$ ]]; then
        NUMBER=${BASH_REMATCH[1]}
        # ディレクトリの作成
        mkdir -p "abc${NUMBER}_${ALPHABET}"
        cd "abc${NUMBER}_${ALPHABET}"

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
            CYGWIN*|MINGW32*|MSYS*)
                start "$URL"     # Windowsの場合
                ;;
            *)
                echo "Unsupported OS"
                exit 1
                ;;
        esac
        exit 0
    else
        echo "Current directory is not in the format abcNUMBER."
        exit 1
    fi
else
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
        CYGWIN*|MINGW32*|MSYS*)
            start "$URL"     # Windowsの場合
            ;;
        *)
            echo "Unsupported OS"
            exit 1
            ;;
    esac
fi

