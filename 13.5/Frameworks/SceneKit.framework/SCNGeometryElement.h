//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding>
{
    struct __C3DMeshElement *_meshElement;
    NSData *_elementData;
    long long _primitiveType;
    long long _primitiveCount;
    struct _NSRange _primitiveRange;
    long long _indicesChannelCount;
    _Bool _interleavedIndicesChannels;
    long long _bytesPerIndex;
    float _pointSize;
    float _minimumPointScreenSpaceRadius;
    float _maximumPointScreenSpaceRadius;
}

+ (id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(_Bool)arg5 bytesPerIndex:(long long)arg6;
+ (id)geometryElementWithMeshElementRef:(struct __C3DMeshElement *)arg1;
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
- (double)_computeACMR;
- (void)_optimizeTriangleIndices;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DMeshElement *)meshElement;
@property(readonly, nonatomic) long long bytesPerIndex;
@property(nonatomic) double maximumPointScreenSpaceRadius;
@property(nonatomic) double minimumPointScreenSpaceRadius;
@property(nonatomic) double pointSize;
@property(nonatomic) struct _NSRange primitiveRange;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (_Bool)hasInterleavedIndicesChannels;
- (long long)indicesChannelCount;
@property(readonly, nonatomic) long long primitiveCount;
@property(readonly, nonatomic) long long primitiveType;
- (unsigned long long)indexCount;
- (void)_printData;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(_Bool)arg5 bytesPerIndex:(long long)arg6;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithMeshElement:(struct __C3DMeshElement *)arg1;

@end

