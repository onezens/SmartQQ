//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQActivateFriendsIconLayout : NSObject
{
    struct CGSize _contentViewSize;
    struct CGSize _iconViewSize;
    double _iconGapHorizontal;
    double _iconGapVertical;
    long long _iconTotalCount;
    _Bool _isSendMassageView;
    int _xo;
}

- (struct CGPoint)origin2ForIndex:(long long)arg1;
- (struct CGPoint)origin3ForIndex:(long long)arg1;
- (struct CGPoint)origin4ForIndex:(long long)arg1;
- (struct CGPoint)origin5ForIndex:(long long)arg1;
- (struct CGPoint)origin6ForIndex:(long long)arg1;
- (struct CGRect)rectForFriendIconIndex:(long long)arg1;

// Remaining properties
@property(nonatomic) struct CGSize contentViewSize; // @dynamic contentViewSize;
@property(nonatomic) double iconGapHorizontal; // @dynamic iconGapHorizontal;
@property(nonatomic) double iconGapVertical; // @dynamic iconGapVertical;
@property(nonatomic) long long iconTotalCount; // @dynamic iconTotalCount;
@property(nonatomic) struct CGSize iconViewSize; // @dynamic iconViewSize;
@property(nonatomic) _Bool isSendMassageView; // @dynamic isSendMassageView;

@end

