//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSDate, NSString, QQHotChatModel;

@interface QQHotChatWifiReportModel : QQModel
{
    NSString *_wifiName;
    long long _wifiMac;
    NSDate *_appearDate;
    QQHotChatModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *appearDate; // @synthesize appearDate=_appearDate;
- (_Bool)isDateChanged;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) QQHotChatModel *model; // @synthesize model=_model;
@property(nonatomic) long long wifiMac; // @synthesize wifiMac=_wifiMac;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;

@end

