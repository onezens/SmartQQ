//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QianhaiBankModelContent;

@interface QianhaiBankModel : NSObject
{
    int _Sub_cmd;
    int _Urgency;
    int _TemplateNo;
    QianhaiBankModelContent *_Content;
    int _xo;
}

- (void).cxx_destruct;
- (id)initWithDic:(int)arg1 urgency:(int)arg2 templateNo:(int)arg3 strContent:(id)arg4;

// Remaining properties
@property(retain, nonatomic) QianhaiBankModelContent *Content; // @dynamic Content;
@property(nonatomic) int Sub_cmd; // @dynamic Sub_cmd;
@property(nonatomic) int TemplateNo; // @dynamic TemplateNo;
@property(nonatomic) int Urgency; // @dynamic Urgency;

@end

