//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPersonalSignMessageCell.h"

@class GSProfileInfo, GreetingPersonInfoView, UIImageView, UILabel;

@interface QQGreetingMessagePersonCell : QQPersonalSignMessageCell
{
    UIImageView *_vipView;
    GreetingPersonInfoView *_personalInfoView;
    GSProfileInfo *_personInfo;
    UILabel *_commonLabel;
}

+ (int)judVip:(unsigned int)arg1;
- (id)createVoiceOverLocalizedStringNew:(id)arg1 unReadCount:(int)arg2 unReadText:(id)arg3 content:(id)arg4 time:(id)arg5 localizedKeyName:(id)arg6;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) GSProfileInfo *personInfo; // @synthesize personInfo=_personInfo;
- (void)setC2CData:(id)arg1;

@end

