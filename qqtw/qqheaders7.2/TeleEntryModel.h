//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString, TeleCarrier;

@interface TeleEntryModel : QQModel <NSCopying>
{
    _Bool _showEntry;
    int _bindType;
    NSString *_optBufString;
    TeleCarrier *_carrier;
    int _xo;
}

- (void).cxx_destruct;
@property(nonatomic) int bindType; // @synthesize bindType=_bindType;
@property(retain, nonatomic) TeleCarrier *carrier; // @synthesize carrier=_carrier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUIN:(id)arg1;
@property(retain, nonatomic) NSString *optBufString; // @synthesize optBufString=_optBufString;
@property(nonatomic) _Bool showEntry; // @synthesize showEntry=_showEntry;

@end

