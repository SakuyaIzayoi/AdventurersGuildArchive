Feature: Guildmaster's Subsystem

    Scenario: Guildmaster signs in
        Given: The user is a Guildmaster
        When: The user enters "Guildmaster into the main menu"
        Then: The system should prompt him with the Guildmaster menu

    Scenario: Guildmaster Adds an Adventurer
        Given: The guildmaster has selected the option to add an Adventurer
        When: The guildmaster selects his chosen adventurer
        Then: That adventurer should be added to his guild

    Scenario: Guildmaster Wants to View Guild List
        Given: The guildmaster has selected the option to view his Guild Manifest
        When: The guildmaster presses enter to select the option
        Then: The system should print out the Guild Manifest for his Guild
