//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseMsgHandler.h"

@interface QQTempSessionHandler : QQBaseMsgHandler
{
    id <IMsgObserver> _wpaHandler;
    id <IMsgObserver> _publicPlatformHandler;
    id <IMsgObserver> _groupTmpHandler;
    id <IMsgObserver> _openGroupTmpHandler;
    id <IMsgObserver> _discussTmpHandler;
    id <IMsgObserver> _contactsTmpHandler;
    id <IMsgObserver> _richStatusTmpHandler;
    id <IMsgObserver> _nearbyAccostHandler;
    id <IMsgObserver> _circleTmpHandler;
    id <IMsgObserver> _verifyTmpHandler;
    id <IMsgObserver> _crmWPAHandler;
    id <IMsgObserver> _qqSearchWPAHandler;
    id <IMsgObserver> _appointTmpHandler;
    id <IMsgObserver> _nearbyAssistantHandler;
    id <IMsgObserver> _approvalTmpHandler;
    id <IMsgObserver> _scheduleTmpHandler;
    id <IMsgObserver> _expertMessageHandler;
    id <IMsgObserver> _tribeMessageHandler;
    id <IMsgObserver> _campusCircleMessageHandler;
}

+ (id)getInstance;
- (void)dealloc;
- (id)handleMsg:(const Msg_f948e9b8 *)arg1;
- (id)init;

@end

