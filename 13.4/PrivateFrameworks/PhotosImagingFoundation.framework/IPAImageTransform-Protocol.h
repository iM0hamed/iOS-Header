//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol IPAImageGeometry, IPAImageTransform;

@protocol IPAImageTransform
- (id <IPAImageTransform>)inverseTransform;
- (_Bool)canAlignToPixelsExactly;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (id <IPAImageGeometry>)intrinsicGeometry;
- (id <IPAImageGeometry>)inputGeometry;
@end

