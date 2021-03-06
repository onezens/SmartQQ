//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QRHotWordsManager : NSObject
{
    NSString *_currentBookID;
    long long _buyPageType;
    NSMutableDictionary *_bookTypeDic;
    NSMutableArray *_invalidBooks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *bookTypeDic; // @synthesize bookTypeDic=_bookTypeDic;
@property(nonatomic) long long buyPageType; // @synthesize buyPageType=_buyPageType;
@property(retain, nonatomic) NSString *currentBookID; // @synthesize currentBookID=_currentBookID;
- (void)deleteInvalidChapters;
- (void)getAdInfoWithBookIDStr:(id)arg1 andChapterIDStr:(id)arg2;
- (void)getChapterCommentsAmountWithBookIDStr:(id)arg1;
- (id)getCommentShowTextBaseAmount:(long long)arg1;
- (id)getHotWordsFromLocalWithColumnType:(long long)arg1;
- (void)getInvalidChaptersWithBookIDStr:(id)arg1 andBookName:(id)arg2;
- (id)getLocalCommentShowTextWithBookID:(id)arg1;
- (void)getNewHotWordsFromServerWithColumnType:(long long)arg1;
- (void)handleErrorWithURL:(id)arg1 withParameters:(id)arg2 withHeaders:(id)arg3 andReceiveData:(id)arg4;
- (void)handleSuccessReceiveWithURL:(id)arg1 withParameters:(id)arg2 withHeaders:(id)arg3 andReceiveData:(id)arg4;
- (id)init;
@property(retain, nonatomic) NSMutableArray *invalidBooks; // @synthesize invalidBooks=_invalidBooks;
- (_Bool)isNeedDeleteInvalidChapters;
- (void)reportAdEventWithModuleID:(long long)arg1 withOperType:(long long)arg2 withOperID:(long long)arg3 withObjectID:(id)arg4 withBookID:(id)arg5 withChpaterID:(id)arg6 andAdvertisementID:(id)arg7;
- (void)sendHttpWithURL:(id)arg1 withParameters:(id)arg2 withHeaders:(id)arg3 andBody:(id)arg4;

@end

