//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQPublicAccountSearchRecommendData;

@interface QQPublicAccountSearchDataMgr : NSObject
{
    double _lastRequestTime;
    _Bool _isForbidRecommend;
    _Bool _isRequesting;
    QQPublicAccountSearchRecommendData *_localRecommendData;
    QQPublicAccountSearchRecommendData *_serverRecommendData;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)getRecommendAccounts;
- (id)init;
- (void)insertLocalObjectWithItem:(id)arg1;
- (void)loadData;
@property(retain, nonatomic) QQPublicAccountSearchRecommendData *localRecommendData; // @synthesize localRecommendData=_localRecommendData;
- (void)onAccountChanged:(id)arg1;
- (void)refreshLastRequestTime;
- (_Bool)requestForServerRecommendData;
- (void)responseForServerRecommendData:(id)arg1;
@property(retain, nonatomic) QQPublicAccountSearchRecommendData *serverRecommendData; // @synthesize serverRecommendData=_serverRecommendData;

@end
