//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QQAvatarView, QQStoryShareToGroupCellModel, UIButton, UILabel, UIView;

@interface QQStoryShareToGroupCell : UITableViewCell
{
    QQStoryShareToGroupCellModel *_model;
    QQAvatarView *_groupAvatar;
    UILabel *_groupName;
    UIButton *_checkBox;
    UIView *_separatorView;
    id <QQStoryShareToGroupCellDelegate> _delegate;
}

- (void)checkBoxClicked:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <QQStoryShareToGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)p_initUI;
- (void)setModel:(id)arg1;

@end

