//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArkCardViewCell, UIView;

@protocol ArkCardViewCellDelegate <NSObject>
- (void)arkViewCell:(ArkCardViewCell *)arg1 didGotArkViewSize:(struct CGSize)arg2;
- (void)arkViewCell:(ArkCardViewCell *)arg1 didTapedFunctionalButton:(UIView *)arg2;
- (void)arkViewCell:(ArkCardViewCell *)arg1 didTapedSourceButton:(UIView *)arg2;
@end

