//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitMathMLBinaryNode.h>

#import <EquationKit/EQKitLayoutSchemataSubsuperscript-Protocol.h>

@class NSString;

@interface EQKitMathMLMSuperscript : EQKitMathMLBinaryNode <EQKitLayoutSchemataSubsuperscript>
{
}

- (id)schemataSuperscript;
- (id)schemataSubscript;
- (id)schemataKernel;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

