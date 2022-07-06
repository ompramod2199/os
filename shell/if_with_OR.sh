echo "Enter the Number :"
read n

if [[ $n -eq 45 || $n -eq 15 ]]
then
    echo "You Won the Game"
else
    echo "You Lose the Game"
fi