today=$(date +"%a")
case $today in
    Mon)
        echo "Full Backup"
        ;;
    Wed | Tue | Thur | Fri)
        echo "Partial Backup"
        ;;
    *)
        echo "No Backup"
        ;;
  esac