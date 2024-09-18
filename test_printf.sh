#!/bin/bash

# コンパイル
gcc -Wall -Wextra -Werror ft_printf.c ft_printf_main.c libftprintf.a -o ft_printf_test

# テスト実行
./ft_printf_test > test_output.txt

# 結果分析
echo "テスト結果分析:"
echo "----------------"

# printfとft_printfの出力の差異を確認
diff_count=$(grep -e "printf:" -e "ft_printf:" test_output.txt | sed 'N;s/\n/ /' | grep -v -c "printf: ft_printf:")
echo "出力の不一致: $diff_count"

# 戻り値の差異を確認
return_diff_count=$(grep -e "return_value_printf:" -e "return_value_ft_printf:" test_output.txt | sed 'N;s/\n/ /' | grep -v -c "return_value_printf: return_value_ft_printf:")
echo "戻り値の不一致: $return_diff_count"

# クリーンアップ
rm ft_printf_test test_output.txt

echo "----------------"
echo "詳細な結果は test_output.txt を確認してください。"