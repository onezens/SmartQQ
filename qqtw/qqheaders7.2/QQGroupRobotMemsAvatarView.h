//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQGroupMemsAvatarView, UIImageView;

@interface QQGroupRobotMemsAvatarView : UIView
{
    UIImageView *_starHeadView;
    QQGroupMemsAvatarView *_avatarsImgView;
    UIView *_avatarsBgView;
    NSString *_resID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *avatarsBgView; // @synthesize avatarsBgView=_avatarsBgView;
@property(retain, nonatomic) QQGroupMemsAvatarView *avatarsImgView; // @synthesize avatarsImgView=_avatarsImgView;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 memsUin:(id)arg2 withNumLimit:(long long)arg3 resID:(id)arg4;
@property(retain, nonatomic) NSString *resID; // @synthesize resID=_resID;
@property(retain, nonatomic) UIImageView *starHeadView; // @synthesize starHeadView=_starHeadView;
- (void)showAnimation;

@end

