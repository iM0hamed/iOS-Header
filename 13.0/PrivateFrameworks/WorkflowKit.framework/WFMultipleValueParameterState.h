//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState
{
}

+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
- (id)stateByRemovingValueAtIndex:(unsigned long long)arg1;
- (id)stateByAppendingValue:(id)arg1;
- (id)stateByReplacingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (id)stateByTogglingValue:(id)arg1;
- (void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;

@end

