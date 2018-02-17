//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQHttpClientSession;

@interface VideoChatHidePayLogic : NSObject
{
    QQHttpClientSession *_httpRequest;
    _Bool _isRequestSuccess;
    _Bool _isPayHidden;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool isPayHidden; // @synthesize isPayHidden=_isPayHidden;
- (void)postNotification;
- (void)qqHttpSessionDidLoad:(id)arg1:(id)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)requestIsHidePay;

@end

