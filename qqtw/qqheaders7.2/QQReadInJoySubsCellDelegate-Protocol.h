//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQReadInJoySubsTableViewCell, ReadInJoyChannelArticle;

@protocol QQReadInJoySubsCellDelegate <NSObject>
- (void)jumpByUrl:(NSString *)arg1 from:(unsigned long long)arg2;
- (void)onAvatarClickWithUin:(unsigned long long)arg1 inCell:(QQReadInJoySubsTableViewCell *)arg2;
- (void)onClickFeedbackWithArticle:(ReadInJoyChannelArticle *)arg1;
- (void)onDislikeBtnClickWithCell:(QQReadInJoySubsTableViewCell *)arg1 BtnFrame:(struct CGRect)arg2 ImgSize:(struct CGSize)arg3;
- (void)onSubcribeHeaderClickWith:(NSString *)arg1 inCell:(QQReadInJoySubsTableViewCell *)arg2;
- (void)onTopicFooterClickWith:(NSString *)arg1 url:(NSString *)arg2 inCell:(QQReadInJoySubsTableViewCell *)arg3;
- (void)onTopicHeaderClickWith:(NSString *)arg1 url:(NSString *)arg2 inCell:(QQReadInJoySubsTableViewCell *)arg3;
@end
