//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSMutableDictionary, NSString, NSURLConnection;

@interface QQGroupNoticeCenterCGIMgr : NSObject <NSURLConnectionDataDelegate>
{
    NSURLConnection *_reqConnection;
    NSMutableData *_responseData;
    NSString *_groupCode;
    NSMutableDictionary *_dictGroupBulletin;
    _Bool _hasGroupBulletinDataPost;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)decodeHTMLString:(id)arg1;
- (id)getAdArgument;
- (int)getBkn;
- (void)handleGroupBulletinGDTAD:(id)arg1;
- (void)handleGroupBulletinList:(id)arg1 isNewGuide:(_Bool)arg2;
- (id)init;
- (id)parseDataForBulletin:(id)arg1 gorupCode:(id)arg2;
- (void)parseDataForFile:(id)arg1 notic:(id)arg2;
- (void)parseDataForMusic:(id)arg1 notic:(id)arg2;
- (id)parseDataForNewType:(id)arg1;
- (id)parseDataForPhoto:(id)arg1;
- (id)parseDataForShareType:(id)arg1;
- (id)parseDataForVideo:(id)arg1;
- (id)parseDataForVoteType:(id)arg1;
- (void)requestGroupBulletin:(id)arg1 isNewNotice:(_Bool)arg2;
- (void)requestGroupBulletinGDTAD:(id)arg1;
- (void)sendPostRequest:(id)arg1 body:(id)arg2;
- (void)sendRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

