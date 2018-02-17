//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, TBAvatarView, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface QQStoryUnreadMessageCell : UITableViewCell
{
    TBAvatarView *_avatarView;
    UILabel *_unreadMsgNumLabel;
    UIImageView *_moreIcon;
    UIView *_view;
    UITapGestureRecognizer *_tapGesture;
    unsigned int _unreadMsgNum;
    int _reqMsgListSeq;
    NSString *_reqUserInfoUnionId;
    NSString *_reqUserInfoUin;
    id <QQStoryUnreadMessageCellDelegate> _delegate;
}

- (void)_didSelectCell;
- (void)_setupUI;
- (void)configureCell:(id)arg1 unreadMsgNum:(unsigned int)arg2;
- (void)dealloc;
@property(nonatomic) id <QQStoryUnreadMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getMessageListSuccess:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)loadUserAvatar:(id)arg1;
- (void)requestUserInfoByUin:(id)arg1;
- (void)requestUserInfoByUnionId:(id)arg1;

@end
