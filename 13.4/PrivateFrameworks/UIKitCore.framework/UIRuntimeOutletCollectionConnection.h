//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection
{
    NSString *runtimeCollectionClassName;
    _Bool addsContentToExistingCollection;
}

- (void).cxx_destruct;
@property _Bool addsContentToExistingCollection; // @synthesize addsContentToExistingCollection;
@property(copy) NSString *runtimeCollectionClassName; // @synthesize runtimeCollectionClassName;
- (id)description;
- (void)connectForSimulator;
- (void)connect;
- (void)performConnect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

