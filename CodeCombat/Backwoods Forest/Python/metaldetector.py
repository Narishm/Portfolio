# The artillery uses coins as a target.
# You'll be the rangefinder for the artillery.
# Write the function.
def coinDistance():
    # Find the nearest coin,
    item = hero.findNearestItem()
    # If there is a coin, return the distance to it.
    if item and item.type == "coin":
        return hero.distanceTo(item)
    # Else, return 0 (zero).
    else:
        return 0
while True:
    distance = coinDistance()
    if distance > 0:
        # Say the `distance`.
        hero.say(distance)
