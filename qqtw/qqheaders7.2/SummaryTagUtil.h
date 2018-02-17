//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SummaryTagUtil : NSObject
{
    NSMutableArray *_tagsClassTitles;
    NSMutableArray *_tagsClassIntros;
    NSMutableArray *_tagsContentArray;
    long long _maxTagNum;
    long long _classesNum;
}

+ (id)getInstance;
- (void)dealloc;
- (id)enCodeTagID:(id)arg1;
- (id)enCodeTags:(id)arg1;
- (id)getClassContents:(int)arg1;
- (id)getClassIntro:(int)arg1;
- (id)getClassTitle:(int)arg1;
- (long long)getClassesNum;
- (long long)getMaxNum;
- (id)init;
- (void)initTagSet;
- (void)insertArray:(id)arg1 withObject:(id)arg2;
- (void)insertDic:(id)arg1 withObject:(id)arg2 forKey:(id)arg3;
- (void)saveTagsRequest:(long long)arg1 tags:(id)arg2;

@end

