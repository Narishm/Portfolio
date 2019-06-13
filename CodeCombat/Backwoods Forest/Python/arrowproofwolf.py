# Collect mushrooms.
# First, come to the wolf pet and wake up it (say).
hero.moveXY(12, 34)
hero.say("Wake up Wolf!")
# Next collect mushrooms just usual items.
while True:
    item = hero.findNearestItem()
    if item and item.type == "mushroom":
        hero.moveXY(item.pos.x, item.pos.y)
