//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@interface HCPttSeatModel : QQModel <NSCopying>
{
    CDUnknownBlockType _openBlock;
    _Bool _isOwner;
    _Bool _isOpening;
    _Bool _shouldShowClosed;
    unsigned int _seatID;
    unsigned int _seq;
    unsigned long long _uin;
}

- (void).cxx_destruct;
- (void)closeForSeconds:(unsigned long long)arg1 then:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) unsigned int seatID; // @synthesize seatID=_seatID;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) _Bool shouldShowClosed; // @synthesize shouldShowClosed=_shouldShowClosed;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void)showOpened;

@end

