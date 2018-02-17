//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURLConnection;

@interface AVHttpEngine : NSObject
{
    id <AVHttpEngineDelegate> _delegate;
    int m_type;
    NSString *_sUrl;
    NSMutableData *m_recvData;
    NSURLConnection *m_connection;
    struct dispatch_queue_s *queue;
}

+ (id)GetInstance;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)sendPostMessageWithCmd:(int)arg1 url:(id)arg2 httpBody:(id)arg3 delegate:(id)arg4;
- (void)sendPostMessageWithCmdSync:(int)arg1 uin:(id)arg2 url:(id)arg3 httpBody:(id)arg4 delegate:(id)arg5;

@end

