//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCH3DResourceLoader : NSObject
{
}

+ (id)loader;
- (long long)virtualScreenForContext:(id)arg1;
- (unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(id)arg4;
- (_Bool)shouldReuploadHandle:(id)arg1 config:(id)arg2;
- (void)destroyHandle:(id)arg1 insideContext:(id)arg2;
- (void)postbindHandle:(id)arg1 config:(id)arg2;

@end

