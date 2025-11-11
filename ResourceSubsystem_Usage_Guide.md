# ResourceSubsystem Usage Guide

## Overview
The `UResourceSubsystem` is a robust C++ world subsystem designed for managing resources in your incremental game. It's optimized for Blueprint usage and provides comprehensive resource tracking, validation, and event systems.

## Key Features

### 🎯 **Blueprint-Friendly Design**
- All functions are marked with `UFUNCTION(BlueprintCallable)`
- Resource types are exposed as `UENUM(BlueprintType)`
- Events can be bound in Blueprints for UI updates
- `CallInEditor = true` allows testing in the editor

### 🛡️ **Robust Validation**
- Input validation for all operations
- Error handling with detailed messages
- Resource bounds checking (max amounts, negative values)
- Comprehensive logging for debugging

### ⚡ **Performance Optimized**
- Uses `TMap<EResourceType, FResourceData>` for O(1) lookups
- Efficient batch operations for multiple resources
- Minimal memory overhead

### 🔄 **Event System**
- `OnResourceChanged` - Fired when any resource amount changes
- `OnResourceOperationFailed` - Fired when operations fail
- Perfect for UI updates and game state synchronization

## Resource Types
```cpp
enum class EResourceType : uint8
{
    None = 0,
    Biomass = 1,
    Hide = 2,
    Bones = 3,
    Tendons = 4,
    Carapace = 5,
    Organs = 6,
    Scales = 7,
    Keratin = 8,
    MAX
};
```

## Basic Usage in Blueprints

### 1. Getting the Subsystem
```blueprint
Get World Subsystem (Resource Subsystem)
```

### 2. Adding Resources
```blueprint
Add Resource
├── Resource Type: Biomass
└── Amount: 100.0
```

### 3. Checking Resources
```blueprint
Has Enough Resource
├── Resource Type: Biomass
└── Required Amount: 50.0
```

### 4. Spending Resources
```blueprint
Try Subtract Resource
├── Resource Type: Biomass
└── Amount: 25.0
```

### 5. Getting Resource Amounts
```blueprint
Get Resource Amount
├── Resource Type: Biomass
└── Return Value: 75.0
```

## Advanced Usage

### Batch Operations
```blueprint
// Check if you can afford multiple resources
Can Afford Resources
├── Required Resources: Map
│   ├── Biomass: 100.0
│   └── Hide: 50.0
└── Return Value: True/False

// Spend multiple resources at once
Try Spend Resources
├── Required Resources: Map
│   ├── Biomass: 100.0
│   └── Hide: 50.0
└── Return Value: True/False
```

### Resource Configuration
```blueprint
// Set maximum amount for a resource
Set Resource Max Amount
├── Resource Type: Biomass
└── Max Amount: 1000.0

// Allow resource to go negative
Set Resource Can Go Negative
├── Resource Type: Biomass
└── Can Go Negative: True
```

### Event Binding
```blueprint
// Bind to resource change events
Event On Resource Changed
├── Resource Type: FName
└── New Amount: Float

// Bind to operation failure events
Event On Resource Operation Failed
└── Error Message: String
```

## Convenience Functions (ResourceBlueprintLibrary)

For even easier Blueprint usage, use the convenience functions:

### Adding Resources
```blueprint
Add Biomass
├── World: World Reference
└── Amount: 100.0

Add Hide
├── World: World Reference
└── Amount: 50.0

Add Bones
├── World: World Reference
└── Amount: 25.0

Add Tendons
├── World: World Reference
└── Amount: 15.0

Add Carapace
├── World: World Reference
└── Amount: 10.0

Add Organs
├── World: World Reference
└── Amount: 5.0

Add Scales
├── World: World Reference
└── Amount: 8.0

Add Keratin
├── World: World Reference
└── Amount: 12.0
```

### Getting Resources
```blueprint
Get Biomass
├── World: World Reference
└── Return Value: 100.0

Get Hide
├── World: World Reference
└── Return Value: 50.0

Get Bones
├── World: World Reference
└── Return Value: 25.0

Get Tendons
├── World: World Reference
└── Return Value: 15.0

Get Carapace
├── World: World Reference
└── Return Value: 10.0

Get Organs
├── World: World Reference
└── Return Value: 5.0

Get Scales
├── World: World Reference
└── Return Value: 8.0

Get Keratin
├── World: World Reference
└── Return Value: 12.0
```

### Checking Resources
```blueprint
Has Enough Biomass
├── World: World Reference
├── Required Amount: 25.0
└── Return Value: True/False

Has Enough Bones
├── World: World Reference
├── Required Amount: 10.0
└── Return Value: True/False
```

### Spending Resources
```blueprint
Try Spend Biomass
├── World: World Reference
├── Amount: 25.0
└── Return Value: True/False

Try Spend Bones
├── World: World Reference
├── Amount: 10.0
└── Return Value: True/False
```

## Common Blueprint Patterns

### 1. Resource Production (Idle Game)
```blueprint
Event Tick
├── Add Biomass
│   ├── World: Get World
│   └── Amount: Production Rate * Delta Time
```

### 2. Purchase Validation
```blueprint
Event On Purchase Button Clicked
├── Can Afford Resources
│   ├── Required Resources: Purchase Cost Map
│   └── Return Value: Can Afford
├── Branch
│   ├── True: Try Spend Resources
│   │   ├── Required Resources: Purchase Cost Map
│   │   └── Return Value: Success
│   └── False: Show Error Message
```

### 3. UI Updates
```blueprint
Event On Resource Changed
├── Switch on Resource Type
│   ├── Biomass: Update Biomass UI
│   ├── Hide: Update Hide UI
│   └── Default: Update All UI
```

### 4. Resource Display
```blueprint
Event On UI Update
├── Get All Resource Amounts
├── For Each Loop
│   ├── Array Element: Resource Amount Pair
│   └── Update UI Element
```

## Error Handling

The subsystem provides comprehensive error handling:

### Common Error Scenarios
1. **Invalid Resource Type**: Trying to use `None` or invalid enum values
2. **Negative Amounts**: Trying to add/subtract negative values
3. **Insufficient Resources**: Trying to spend more than available
4. **Null World**: Passing null world references

### Error Events
- `OnResourceOperationFailed` broadcasts detailed error messages
- All errors are logged to the console
- Functions return `false` for failed operations

## Performance Tips

### 1. Use Batch Operations
Instead of multiple individual operations:
```blueprint
// ❌ Inefficient
Add Resource (Biomass, 100)
Add Resource (Hide, 50)

// ✅ Efficient
Add Resources
├── Resources To Add: Map
│   ├── Biomass: 100
│   └── Hide: 50
```

### 2. Cache Subsystem Reference
```blueprint
// ❌ Inefficient - gets subsystem every time
Get World Subsystem (Resource Subsystem) -> Add Resource

// ✅ Efficient - cache the reference
Begin Play
├── Get World Subsystem (Resource Subsystem) -> Store in Variable
Event Tick
├── Use Cached Subsystem Reference -> Add Resource
```

### 3. Use Events for UI Updates
```blueprint
// ❌ Inefficient - polling every frame
Event Tick
├── Get Resource Amount -> Update UI

// ✅ Efficient - event-driven updates
Event On Resource Changed
├── Update UI
```

## Debugging

### Print All Resources
```blueprint
Print All Resources
```
This will output all current resource amounts to the console.

### Logging
All operations are logged with detailed information:
- Resource additions/subtractions
- Failed operations with reasons
- Configuration changes
- System initialization

## Integration with Your Game

### 1. Producer System Integration
```blueprint
Event On Producer Tick
├── Get Producer Data
├── Add Resources
│   ├── Resources To Add: Producer Output Map
│   └── Multiply by Delta Time
```

### 2. Purchase System Integration
```blueprint
Event On Purchase Attempt
├── Can Afford Resources
│   └── Required Resources: Item Cost
├── Branch
│   ├── True: Complete Purchase
│   └── False: Show Insufficient Resources Message
```

### 3. Save System Integration
```blueprint
Event On Save Game
├── Get All Resource Amounts
├── Save to Save Game Object

Event On Load Game
├── Load Resource Amounts from Save Game
├── Set Resource (for each resource type)
```

## Best Practices

1. **Always validate inputs** - The subsystem does this automatically
2. **Use events for UI updates** - Don't poll every frame
3. **Cache subsystem references** - Don't get it repeatedly
4. **Use batch operations** - More efficient for multiple resources
5. **Handle errors gracefully** - Listen to error events
6. **Test in editor** - Use `CallInEditor = true` functions
7. **Use meaningful resource names** - Update the enum as needed

## Troubleshooting

### Common Issues

1. **Subsystem not found**: Make sure the world is valid
2. **Resources not updating**: Check if events are properly bound
3. **Negative resources**: Check `bCanGoNegative` setting
4. **Resources not saving**: Ensure you're using the same world instance

### Debug Commands
- Use `Print All Resources` to see current state
- Check console logs for detailed operation information
- Use Blueprint debugger to step through operations

This subsystem provides a solid foundation for your incremental game's resource management system. It's designed to be reliable, performant, and easy to use from Blueprints while providing the flexibility to handle complex resource interactions.
