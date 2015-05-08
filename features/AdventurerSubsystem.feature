Feature: Adventurer's Subsystem

    Scenario: Adventurer signs up for the service
        Given: The user is an Adventurer
        When: The user enters "Adventurer" into the system
        Then: The system should prompt the user for his stats

    Scenario: Adventurer inputs his profile
        Given: The Adventurer has input all of his information
        When: The Adventurer hits "Enter" to submit
        Then: His profile should be added to the Adventurer List
        And: His input stats match his stats in the Adventurer List

    Scenario: Bob wants to add himself
        Given: Bob is in the Adventurer subsystem
        When: He types in all of his stats and submits them
        Then: His entry should be listed in the list of adventurers
