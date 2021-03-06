//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol VSServiceConnectionHandlerDelegate;

__attribute__((visibility("hidden")))
@interface VSServiceConnectionHandler : NSObject
{
    NSXPCConnection *_connection;
    id <VSServiceConnectionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <VSServiceConnectionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_didFinish;

@end

