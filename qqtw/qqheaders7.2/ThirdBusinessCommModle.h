//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString, ThirdBusinessShowModel;

@interface ThirdBusinessCommModle : QQModel
{
    unsigned int _ver;
    unsigned int _seq;
    unsigned long long _fromuin;
    unsigned long long _touin;
    unsigned int _service;
    ThirdBusinessShowModel *_display;
    int _result;
    NSString *_err_msg;
    unsigned int _platform;
    int _xo;
}

- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(retain, nonatomic) ThirdBusinessShowModel *display; // @dynamic display;
@property(retain, nonatomic) NSString *err_msg; // @dynamic err_msg;
@property(nonatomic) unsigned int platform; // @dynamic platform;
@property(nonatomic) int result; // @dynamic result;
@property(nonatomic) unsigned int seq; // @dynamic seq;
@property(nonatomic) unsigned int service; // @dynamic service;
@property(nonatomic) unsigned long long touin; // @dynamic touin;
@property(nonatomic) unsigned int ver; // @dynamic ver;

@end

