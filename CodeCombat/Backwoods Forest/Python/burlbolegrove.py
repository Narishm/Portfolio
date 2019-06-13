# Don't attack the burls!
# Functions can return a value.
# When a function is called, it will be equal to the value the function returns.
def shouldAttack(target):
    # return False if no `target`
    # return False if target.type == "burl"
    # Otherwise, return True
    if target and target.type != "burl":
        return True
    else:
        return False
while True:
    enemy = hero.findNearestEnemy()
    # Here we use shouldAttack() to decide if we should attack!
    # heroShouldAttack will be assigned the same value that shouldAttack() returns!
    heroShouldAttack = shouldAttack(enemy)
    if heroShouldAttack:
        hero.attack(enemy)
