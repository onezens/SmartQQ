//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSTimer;

@interface AVFunMulScreenInteractiveItem : NSObject
{
    NSTimer *_waitTimer;
    _Bool _isFullScreen;
    _Bool _isMulScreen;
    _Bool _hasAudio;
    _Bool _isAudioRepeat;
    _Bool _needShowBackImg;
    _Bool _isPersistItem;
    _Bool _isMirror;
    _Bool _isFaceIn;
    _Bool _isWaitTimer;
    int _expType;
    int _frameStep;
    NSString *_folderPath;
    long long _fps;
    double _x;
    double _y;
    double _width;
    double _height;
    NSString *_audioSrc;
    long long _audio_frame_start;
    NSMutableArray *_expressionList;
    NSMutableArray *_decorationList;
    long long _frameDuration;
    long long _max_triger_frame;
    NSString *_itemID;
    long long _initiatorType;
    id <AVFunMulScreeenExpressionItemDelegate> _delegate;
}

- (id)advanceFrame;
@property(copy, nonatomic) NSString *audioSrc; // @synthesize audioSrc=_audioSrc;
@property(nonatomic) long long audio_frame_start; // @synthesize audio_frame_start=_audio_frame_start;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *decorationList; // @synthesize decorationList=_decorationList;
@property(nonatomic) id <AVFunMulScreeenExpressionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int expType; // @synthesize expType=_expType;
@property(retain, nonatomic) NSMutableArray *expressionList; // @synthesize expressionList=_expressionList;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) long long frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) int frameStep; // @synthesize frameStep=_frameStep;
- (id)getBackgroundImg;
@property(nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
@property(nonatomic) double height; // @synthesize height=_height;
- (id)init;
@property(nonatomic) long long initiatorType; // @synthesize initiatorType=_initiatorType;
@property(nonatomic) _Bool isAudioRepeat; // @synthesize isAudioRepeat=_isAudioRepeat;
@property(nonatomic) _Bool isFaceIn; // @synthesize isFaceIn=_isFaceIn;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(nonatomic) _Bool isMulScreen; // @synthesize isMulScreen=_isMulScreen;
@property(nonatomic) _Bool isPersistItem; // @synthesize isPersistItem=_isPersistItem;
@property(nonatomic) _Bool isWaitTimer; // @synthesize isWaitTimer=_isWaitTimer;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long max_triger_frame; // @synthesize max_triger_frame=_max_triger_frame;
@property(nonatomic) _Bool needShowBackImg; // @synthesize needShowBackImg=_needShowBackImg;
- (void)onAVFunMulScreeenExpressionDecoEnd;
- (void)resumeState;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double y; // @synthesize y=_y;
- (void)stopFrame;

@end

