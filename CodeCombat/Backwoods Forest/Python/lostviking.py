# You MUST click on the HELP button to see a detailed description of this level!
# The raven will tell you what to use for your maze parameters!
slide = 9
switch = 5
skip = 7
# Extra Variables
direction = 1
# How many sideSteps north of the Red X you've taken.
sideSteps = 1
# How many steps east of the Red X you've taken.
steps = 1
# Multiply this with steps to determine your X coordinate. DON'T CHANGE THIS!
X_PACE_LENGTH = 4
# Multiply this with sideSteps to determine your Y coordinate. DON'T CHANGE THIS!
Y_PACE_LENGTH = 6
# The maze is 35 steps along the X axis.
while steps <= 35:
    # Moved the multiplication outside of the function call
    xcoord = X_PACE_LENGTH * steps
    ycoord = Y_PACE_LENGTH * sideSteps
    # Take the next step:
    hero.moveXY(xcoord, ycoord)
    # Increment steps and sideSteps as appropriate, taking into account the special rules.
    # Set the North / South Sidestep Switch
    if steps % switch == 0:
        direction = -direction
    # Take the sideStep
    sideSteps += direction
    # Check for the skipStep
    if steps % skip == 0:
        sideSteps += direction
    # Check for the slideStep
    if sideSteps < 1:
        sideSteps = slide
    elif sideSteps > slide:
        sideSteps -= slide
    # Take the Step
    steps += 1
