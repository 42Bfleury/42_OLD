cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 1' | awk -F ':' '{print }' | rev | sort -r | tr '
' ', '
