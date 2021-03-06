//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString, PHPerson;

@interface PGMergeCandidateQuestion : PGSurveyQuestion
{
    unsigned short _type;
    unsigned short _displayType;
    unsigned short _state;
    unsigned short _entityType;
    NSString *_entityIdentifier;
    double _score;
    PHPerson *_person;
    NSDictionary *_additionalInfo;
}

+ (id)questionForPerson:(id)arg1;
- (void).cxx_destruct;
- (id)additionalInfo;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (void)setScore:(double)arg1;
- (double)score;
- (unsigned short)state;
- (id)entityIdentifier;
- (_Bool)isEqualToQuestion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)remove;
- (void)persistWithCreationDate:(id)arg1;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (unsigned short)type;
- (id)initWithPerson:(id)arg1 score:(double)arg2;

@end

