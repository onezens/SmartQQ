//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQYPC2BLBSCenter, QQYPC2BMediaPickerWrapper, QQYPC2BQRCodeScanner;

@interface QQYPC2BCommonFunctionsForWeb : NSObject
{
    QQYPC2BLBSCenter *_lbsCenter;
    QQYPC2BQRCodeScanner *_qrCodeScanner;
    QQYPC2BMediaPickerWrapper *_mediaPicker;
}

- (void)asyncGetImg:(id)arg1 url:(id)arg2 srcIdentify:(unsigned long long)arg3;
- (void)asyncGetLBSInfo:(id)arg1 url:(id)arg2;
- (void)asyncGetVideo:(id)arg1 url:(id)arg2 srcIdentify:(unsigned long long)arg3;
- (void)asyncLaunchQRCodeScan:(id)arg1 url:(id)arg2 srcIdentify:(unsigned long long)arg3;
- (void)asyncSendDtmf:(id)arg1 url:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)invokeJSInWebView:(id)arg1 js:(id)arg2;
- (_Bool)preProcessUrl:(id)arg1 url:(id)arg2 srcIdentifier:(unsigned long long)arg3;
- (id)replaceIllegalCharactorInJson:(id)arg1;
- (void)synGetClientAbility:(id)arg1 url:(id)arg2;

@end
