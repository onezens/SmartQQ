//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class CBPeripheral, NSData, NSDate, NSString;

@interface SDPeerInfo : QQGroupPropertyModel
{
    NSData *_mac;
    NSString *_serialNum;
    NSDate *_finalconnectTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *finalconnectTime; // @synthesize finalconnectTime=_finalconnectTime;
@property(retain, nonatomic) NSData *mac; // @synthesize mac=_mac;
@property(copy, nonatomic) NSString *serialNum; // @synthesize serialNum=_serialNum;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) int bleId; // @dynamic bleId;
@property(retain, nonatomic) NSDate *connectTime; // @dynamic connectTime;
@property(retain, nonatomic) NSString *din; // @dynamic din;
@property(nonatomic) _Bool isActionBind; // @dynamic isActionBind;
@property(nonatomic) int lastScanTime; // @dynamic lastScanTime;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) CBPeripheral *peripheral; // @dynamic peripheral;
@property(nonatomic) int pid; // @dynamic pid;
@property(nonatomic) long long status; // @dynamic status;

@end

