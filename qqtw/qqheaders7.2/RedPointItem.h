//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQAsynUrlImageView, QQMessageReadTagView, QQMessageWordView, UIImageView, UIView;

@interface RedPointItem : NSObject
{
    UIView *_backgroundView;
    UIImageView *_rpNewView;
    UIImageView *_rpDotView;
    QQMessageReadTagView *_rpNumView;
    QQAsynUrlImageView *_rpIconView;
    QQMessageWordView *_rpWordView;
    NSString *_key;
    id <RedPointLayoutDelegate> _delegate;
    int _xo;
    int _rpType;
}

- (void).cxx_destruct;
- (void)createHintViewsIfNeed;
- (id)getRedPointShowInfo;
- (void)hideRedPoint;
- (id)initWithKey:(id)arg1;
@property int rpType; // @synthesize rpType=_rpType;
@property(retain, nonatomic) UIView *backgroundView; // @dynamic backgroundView;
- (void)showRedPoint;

// Remaining properties
@property(nonatomic) id <RedPointLayoutDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) UIImageView *rpDotView; // @dynamic rpDotView;
@property(retain, nonatomic) QQAsynUrlImageView *rpIconView; // @dynamic rpIconView;
@property(retain, nonatomic) UIImageView *rpNewView; // @dynamic rpNewView;
@property(retain, nonatomic) QQMessageReadTagView *rpNumView; // @dynamic rpNumView;
@property(retain, nonatomic) QQMessageWordView *rpWordView; // @dynamic rpWordView;

@end

