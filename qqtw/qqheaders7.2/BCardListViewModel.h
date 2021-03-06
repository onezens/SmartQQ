//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BCardListViewModel : NSObject
{
    unsigned long long _currentListSortStyle;
    NSMutableArray *_arrayCardInfos;
}

+ (id)getSortDateFormat:(long long)arg1;
+ (id)getSortLetterFormat:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addArrayFromCardInfos:(id)arg1;
@property(retain, nonatomic) NSMutableArray *arrayCardInfos; // @synthesize arrayCardInfos=_arrayCardInfos;
@property(nonatomic) unsigned long long currentListSortStyle; // @synthesize currentListSortStyle=_currentListSortStyle;
- (void)forceListSort;
- (long long)getCardCount;
- (id)getCardInfo:(long long)arg1;
- (id)getViewTagStatus:(id)arg1;
- (id)init;
- (_Bool)isAlphaViewrow:(unsigned long long)arg1;
- (void)resetArrayCardInfos;
- (void)resetArrayCardInfosWithOutMineCard;
- (void)setMineQQCardModel:(id)arg1;
- (void)sortArray:(unsigned long long)arg1;
- (void)sortArrayByLetter;
- (void)sortArrayByTime;

@end

