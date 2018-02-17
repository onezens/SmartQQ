//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

@class NSMutableDictionary, NSString;

@interface CFT_TPHttpBusiReq : BaseSingleton
{
    NSMutableDictionary *requestDictionary;
    int _session_seq;
    NSString *_msg_no;
}

+ (void)transferBase64Value:(id)arg1;
- (void)HttpPostByQQ:(id)arg1 busiData:(id)arg2;
- (_Bool)checkMainThread;
- (id)createURLwithPath:(id)arg1 busiData:(id)arg2 queryPairs:(id)arg3 encrypt:(_Bool)arg4 needSession:(_Bool)arg5;
- (void)dealloc;
- (id)getBusiData:(id)arg1;
- (id)getMsgNo;
- (id)init;
@property(copy, nonatomic) NSString *msg_no; // @synthesize msg_no=_msg_no;
- (void)removeBusiData:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary;
- (void)respondHttpFailed:(id)arg1 errCode:(id)arg2 sessionHttp:(id)arg3;
- (void)respondHttpFinish:(id)arg1 sessionHttp:(id)arg2;
- (void)sendRequest:(id)arg1 busiData:(id)arg2 queryPath:(id)arg3;
- (void)sendRequest:(id)arg1 prefixPath:(id)arg2 queryPairs:(id)arg3 useSession:(unsigned char)arg4 needEncrypt:(unsigned char)arg5;
@property(nonatomic) int session_seq; // @synthesize session_seq=_session_seq;

@end

