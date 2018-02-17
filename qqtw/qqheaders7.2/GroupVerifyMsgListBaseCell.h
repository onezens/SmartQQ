//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GroupVerifyMsgStructMsgModel, QQAvatarView, UIColor, UIImageView, UILabel, UIView;

@interface GroupVerifyMsgListBaseCell : UITableViewCell
{
    id _groupVerifyMsgControllerDelegate;
    UIView *_bgBodyView;
    UILabel *_nickLabel;
    UIImageView *_certifiedIcon;
    UIColor *_bgBodyColor;
    GroupVerifyMsgStructMsgModel *_msgModel;
    int _msgStyle;
    QQAvatarView *_headImageView;
    int _xo;
}

- (void).cxx_destruct;
- (void)fillCellBeforeAppear;
@property(nonatomic) id groupVerifyMsgControllerDelegate; // @synthesize groupVerifyMsgControllerDelegate=_groupVerifyMsgControllerDelegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHeadImageWithUin:(int)arg1 uin:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(retain, nonatomic) GroupVerifyMsgStructMsgModel *msgModel; // @dynamic msgModel;
@property(nonatomic) int msgStyle; // @dynamic msgStyle;

@end

