//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDCallout2Path : GQDPath
{
    struct CGSize mSize;
    double mCornerRadius;
    struct CGPoint mTailPosition;
    double mTailSize;
    _Bool mTailAtCenter;
}

- (_Bool)tailAtCenter;
- (double)tailSize;
- (struct CGPoint)tailPosition;
- (double)cornerRadius;
- (struct CGSize)size;
- (struct CGPath *)createBezierPath;
- (struct CGPoint)tailCenter;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

