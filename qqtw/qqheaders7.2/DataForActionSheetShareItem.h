//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, QQMessageModel, QQURLRichMsgData;

@interface DataForActionSheetShareItem : NSObject
{
    NSString *_content;
    NSURL *_URL;
    NSString *_webPageShareListener;
    NSString *_webPageListenerQQ;
    NSString *_webPageListenerQZne;
    NSString *_webPageListenerWX;
    NSString *_webPageListenerWxZone;
    NSString *_webPageListenerShortcut;
    QQURLRichMsgData *_webPagShareData;
    NSURL *_webpagSetShareURL;
    QQMessageModel *_msgModel;
    int _xo;
    unsigned int _shareAppID;
    id _data;
}

@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void)dealloc;
@property unsigned int shareAppID; // @synthesize shareAppID=_shareAppID;

// Remaining properties
@property(retain, nonatomic) NSURL *URL; // @dynamic URL;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) QQMessageModel *msgModel; // @dynamic msgModel;
@property(retain, nonatomic) QQURLRichMsgData *webPagShareData; // @dynamic webPagShareData;
@property(retain, nonatomic) NSString *webPageListenerQQ; // @dynamic webPageListenerQQ;
@property(retain, nonatomic) NSString *webPageListenerQZne; // @dynamic webPageListenerQZne;
@property(retain, nonatomic) NSString *webPageListenerShortcut; // @dynamic webPageListenerShortcut;
@property(retain, nonatomic) NSString *webPageListenerWX; // @dynamic webPageListenerWX;
@property(retain, nonatomic) NSString *webPageListenerWxZone; // @dynamic webPageListenerWxZone;
@property(retain, nonatomic) NSString *webPageShareListener; // @dynamic webPageShareListener;
@property(retain, nonatomic) NSURL *webpagSetShareURL; // @dynamic webpagSetShareURL;

@end

