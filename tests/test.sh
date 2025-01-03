
INT_MIN=-2147483648
INT_MAX=2147483647

for ((i = 1; i <= 500; i++)); do
    echo -n "$((RANDOM * RANDOM % (INT_MAX - INT_MIN + 1) + INT_MIN)) "
done
echo