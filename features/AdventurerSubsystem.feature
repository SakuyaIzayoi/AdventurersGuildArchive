Feature: Adventurer's Subsystem

    Scenario: Adventurer signs up for the service
        Given: The user is an Adventurer
        When: The user enters "Adventurer" into the system
        Then: The system should prompt the user for his stats

    Scenario: Adventurer inputs his profile
        Given: The Adventurer has input all of his information
        When: The Adventurer hits "Enter" to submit
        Then: His profile should be added to the Adventurer List
