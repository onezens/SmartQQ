//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QROnlinePaymentRequest;

@interface QROnlinePaymentWorker : NSObject
{
    id <QROnlinePaymentWorkerDelegate> _delegate;
    QROnlinePaymentRequest *_request;
}

- (void).cxx_destruct;
- (id)composeBuyChapters:(id)arg1;
@property(nonatomic) id <QROnlinePaymentWorkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doPayment;
@property(retain, nonatomic) QROnlinePaymentRequest *request; // @synthesize request=_request;

@end

