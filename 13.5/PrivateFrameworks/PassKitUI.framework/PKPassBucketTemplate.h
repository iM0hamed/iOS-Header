//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassBucketTemplate : NSObject
{
    _Bool _sitsOnStripImage;
    long long _bucketAlignment;
    double _minFieldPadding;
    PKPassFieldTemplate *_defaultFieldTemplate;
    unsigned long long _maxFields;
    NSMutableArray *_fieldTemplates;
    struct CGRect _bucketRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *fieldTemplates; // @synthesize fieldTemplates=_fieldTemplates;
@property(nonatomic) _Bool sitsOnStripImage; // @synthesize sitsOnStripImage=_sitsOnStripImage;
@property(nonatomic) unsigned long long maxFields; // @synthesize maxFields=_maxFields;
@property(retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate; // @synthesize defaultFieldTemplate=_defaultFieldTemplate;
@property(nonatomic) double minFieldPadding; // @synthesize minFieldPadding=_minFieldPadding;
@property(nonatomic) struct CGRect bucketRect; // @synthesize bucketRect=_bucketRect;
@property(nonatomic) long long bucketAlignment; // @synthesize bucketAlignment=_bucketAlignment;
- (id)templateForFieldAtIndex:(unsigned long long)arg1;
- (void)addFieldTemplate:(id)arg1;

@end

