find . -name "*.sh" | rev | cut -c4- | cut -d / -f 1 | rev
