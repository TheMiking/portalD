# ResourceSubsystem Example Blueprint Implementation

## Example: Simple Resource Manager Blueprint

Here's how you can create a Blueprint class that demonstrates the ResourceSubsystem usage:

### 1. Create a Blueprint Class
1. Right-click in Content Browser
2. Create Blueprint Class
3. Choose "Actor" as parent class
4. Name it "BP_ResourceManager"

### 2. Blueprint Implementation

#### Event BeginPlay
```blueprint
Event BeginPlay
├── Get World Subsystem (Resource Subsystem) -> Store in Variable "ResourceSubsystem"
├── Bind Event to OnResourceChanged
│   ├── Target: ResourceSubsystem
│   └── Event: On Resource Changed
└── Bind Event to OnResourceOperationFailed
    ├── Target: ResourceSubsystem
    └── Event: On Resource Operation Failed
```

#### Event OnResourceChanged
```blueprint
Event On Resource Changed
├── Resource Type: FName
├── New Amount: Float
├── Print String
│   ├── In String: "Resource Changed: " + Resource Type + " = " + New Amount
│   └── Print To Screen: True
├── Switch on Resource Type
│   ├── "Biomass": Update Biomass UI
│   ├── "Hide": Update Hide UI
│   ├── "Bones": Update Bones UI
│   ├── "Tendons": Update Tendons UI
│   ├── "Carapace": Update Carapace UI
│   ├── "Organs": Update Organs UI
│   ├── "Scales": Update Scales UI
│   ├── "Keratin": Update Keratin UI
│   └── Default: Update All UI
└── Update UI (custom function)
```

#### Event OnResourceOperationFailed
```blueprint
Event On Resource Operation Failed
├── Error Message: String
├── Print String
│   ├── In String: "Resource Error: " + Error Message
│   ├── Print To Screen: True
│   └── Text Color: Red
└── Show Error UI (custom function)
```

#### Function: Add Test Resources
```blueprint
Function: Add Test Resources
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Biomass
│   └── Amount: 100.0
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Hide
│   └── Amount: 50.0
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Bones
│   └── Amount: 25.0
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Tendons
│   └── Amount: 15.0
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Carapace
│   └── Amount: 10.0
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Organs
│   └── Amount: 5.0
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Scales
│   └── Amount: 8.0
└── Add Resource
    ├── Target: ResourceSubsystem
    ├── Resource Type: Keratin
    └── Amount: 12.0
```

#### Function: Try Purchase Item
```blueprint
Function: Try Purchase Item
├── Inputs:
│   ├── Biomass Cost: Float
│   ├── Hide Cost: Float
│   ├── Bones Cost: Float
│   ├── Tendons Cost: Float
│   ├── Carapace Cost: Float
│   ├── Organs Cost: Float
│   ├── Scales Cost: Float
│   └── Keratin Cost: Float
├── Create Map (Required Resources)
│   ├── Add: Biomass -> Biomass Cost
│   ├── Add: Hide -> Hide Cost
│   ├── Add: Bones -> Bones Cost
│   ├── Add: Tendons -> Tendons Cost
│   ├── Add: Carapace -> Carapace Cost
│   ├── Add: Organs -> Organs Cost
│   ├── Add: Scales -> Scales Cost
│   └── Add: Keratin -> Keratin Cost
├── Can Afford Resources
│   ├── Target: ResourceSubsystem
│   ├── Required Resources: Required Resources Map
│   └── Return Value: Can Afford
├── Branch
│   ├── Condition: Can Afford
│   ├── True: Try Spend Resources
│   │   ├── Target: ResourceSubsystem
│   │   ├── Required Resources: Required Resources Map
│   │   └── Return Value: Success
│   └── False: Print String
│       ├── In String: "Cannot afford item!"
│       └── Print To Screen: True
└── Return Value: Success (from Try Spend Resources)
```

#### Function: Get Resource Display Text
```blueprint
Function: Get Resource Display Text
├── Inputs:
│   └── Resource Type: EResourceType
├── Get Resource Amount
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Resource Type
│   └── Return Value: Amount
├── Switch on Resource Type
│   ├── Biomass: Return "Biomass: " + Amount
│   ├── Hide: Return "Hide: " + Amount
│   ├── Bones: Return "Bones: " + Amount
│   ├── Tendons: Return "Tendons: " + Amount
│   ├── Carapace: Return "Carapace: " + Amount
│   ├── Organs: Return "Organs: " + Amount
│   ├── Scales: Return "Scales: " + Amount
│   ├── Keratin: Return "Keratin: " + Amount
│   └── Default: Return "Unknown: " + Amount
└── Return Value: Display Text
```

### 3. Example Usage in Game Mode

#### Event BeginPlay (Game Mode)
```blueprint
Event BeginPlay
├── Spawn Actor
│   ├── Class: BP_ResourceManager
│   └── Transform: Default
├── Add Test Resources (on spawned actor)
└── Set Timer
    ├── Event: Timer Event
    ├── Time: 1.0
    └── Looping: True
```

#### Timer Event (Idle Production)
```blueprint
Timer Event
├── Get World Subsystem (Resource Subsystem)
├── Add Resource
│   ├── Target: ResourceSubsystem
│   ├── Resource Type: Biomass
│   └── Amount: 10.0 (production per second)
└── Add Resource
    ├── Target: ResourceSubsystem
    ├── Resource Type: Hide
    └── Amount: 5.0 (production per second)
```

### 4. Example UI Integration

#### Widget Blueprint: ResourceDisplay
```blueprint
Event Construct
├── Get World Subsystem (Resource Subsystem) -> Store in Variable
├── Bind Event to OnResourceChanged
│   ├── Target: ResourceSubsystem
│   └── Event: On Resource Changed
└── Update All Resource Displays

Event On Resource Changed
├── Switch on Resource Type
│   ├── Biomass: Set Text (Biomass Text Block) -> "Biomass: " + New Amount
│   ├── Hide: Set Text (Hide Text Block) -> "Hide: " + New Amount
│   ├── Bone: Set Text (Bone Text Block) -> "Bone: " + New Amount
│   └── Default: Update All Resource Displays
```

#### Function: Update All Resource Displays
```blueprint
Function: Update All Resource Displays
├── Get All Resource Amounts
│   ├── Target: ResourceSubsystem
│   └── Return Value: Resource Amounts Map
├── For Each Loop
│   ├── Array: Resource Amounts Map
│   └── Array Element: Resource Amount Pair
│       ├── Get Resource Display Text
│       │   ├── Resource Type: Array Element Key
│       │   └── Return Value: Display Text
│       └── Update UI Element (custom function)
```

### 5. Example Producer System Integration

#### Blueprint: BP_Producer
```blueprint
Variables:
├── Resource Type: EResourceType
├── Production Rate: Float
├── Is Active: Boolean
└── Resource Subsystem: Resource Subsystem Object Reference

Event BeginPlay
├── Get World Subsystem (Resource Subsystem) -> Set Resource Subsystem
└── Set Timer
    ├── Event: Production Timer
    ├── Time: 1.0
    └── Looping: True

Production Timer
├── Branch
│   ├── Condition: Is Active
│   ├── True: Add Resource
│   │   ├── Target: Resource Subsystem
│   │   ├── Resource Type: Resource Type
│   │   └── Amount: Production Rate
│   └── False: (do nothing)

Function: Activate Producer
├── Set Is Active: True
└── Print String: "Producer Activated"

Function: Deactivate Producer
├── Set Is Active: False
└── Print String: "Producer Deactivated"
```

### 6. Example Purchase System

#### Blueprint: BP_PurchasableItem
```blueprint
Variables:
├── Item Name: String
├── Biomass Cost: Float
├── Hide Cost: Float
├── Bone Cost: Float
├── Is Purchased: Boolean
└── Resource Subsystem: Resource Subsystem Object Reference

Event BeginPlay
├── Get World Subsystem (Resource Subsystem) -> Set Resource Subsystem
└── Update Purchase Button State

Function: Try Purchase
├── Branch
│   ├── Condition: Is Purchased
│   ├── True: Print String ("Already purchased!")
│   └── False: Check Affordability
│       ├── Create Map (Required Resources)
│       │   ├── Add: Biomass -> Biomass Cost
│       │   ├── Add: Hide -> Hide Cost
│       │   └── Add: Bone -> Bone Cost
│       ├── Can Afford Resources
│       │   ├── Target: Resource Subsystem
│       │   ├── Required Resources: Required Resources Map
│       │   └── Return Value: Can Afford
│       ├── Branch
│       │   ├── Condition: Can Afford
│       │   ├── True: Complete Purchase
│       │   └── False: Show Error Message
│       └── Return Value: Can Afford

Function: Complete Purchase
├── Create Map (Required Resources)
│   ├── Add: Biomass -> Biomass Cost
│   ├── Add: Hide -> Hide Cost
│   └── Add: Bone -> Bone Cost
├── Try Spend Resources
│   ├── Target: Resource Subsystem
│   ├── Required Resources: Required Resources Map
│   └── Return Value: Success
├── Set Is Purchased: True
├── Update Purchase Button State
└── Print String: "Purchased " + Item Name

Function: Update Purchase Button State
├── Branch
│   ├── Condition: Is Purchased
│   ├── True: Set Button Text ("Purchased")
│   └── False: Set Button Text ("Purchase " + Item Name)
```

## Key Benefits of This Implementation

1. **Event-Driven Updates**: UI automatically updates when resources change
2. **Error Handling**: Comprehensive error messages for failed operations
3. **Modular Design**: Easy to extend with new resource types
4. **Performance**: Efficient batch operations and cached references
5. **Debugging**: Easy to test and debug with print statements
6. **Scalability**: Can handle complex resource interactions

## Next Steps

1. **Compile the C++ code** in Unreal Engine
2. **Create the Blueprint classes** as described above
3. **Test the basic functionality** with the example implementations
4. **Extend the system** with your specific game mechanics
5. **Add UI elements** to display and interact with resources
6. **Integrate with your existing systems** (producers, purchasers, etc.)

This implementation provides a solid foundation for your incremental game's resource management system that's both powerful and easy to use from Blueprints.
