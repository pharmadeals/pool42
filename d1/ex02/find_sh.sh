find . -name "*.sh" -print | cut -d . -f 2 | sed "s/.*\///g"
