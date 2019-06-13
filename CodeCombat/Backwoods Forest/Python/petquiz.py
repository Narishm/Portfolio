# Write an event handler function called onHear
# Complete the onHear function
def onHear(event):
    # The pet should say something in onHear.
    pet.say("Yes.")
    pass
pet.on("hear", onHear)
hero.say("Do you understand me?")
hero.say("Are you a cougar?")
hero.say("Are you older than 5?")
# Ask two more questions.
hero.say("Can you read?")
hero.say("Are you just saying 'yes' to everything?")
