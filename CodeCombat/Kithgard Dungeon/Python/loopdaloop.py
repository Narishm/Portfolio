# Code inside of a while-true loop will repeat forever!
while True:
    # Move right
    hero.moveRight()
    # Move up
    hero.moveUp()
    # Move left
    hero.moveLeft()
    # Move down
    hero.moveDown()
# Loops repeat a block of code multiple times.
# A block of code is INDENTED 4 spaces
# A code block starts with a colon :
while True:
    # The movement lines need to be indented!
    # Add 4 SPACES to the beginning of each line under while True:
    hero.moveRight()
    hero.moveUp() # ∆ INDENT this line
    hero.moveLeft() # ∆ INDENT this line
    hero.moveDown() # ∆ INDENT this line
