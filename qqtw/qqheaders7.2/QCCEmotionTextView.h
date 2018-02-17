//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIFaceKeyBoard, UIView;

@interface QCCEmotionTextView : UITextView
{
    UIFaceKeyBoard *_gtEmotionBoard;
    UIView *_emotionBoardContainer;
    struct _NSRange _selectedRange;
    double _lineSpacing;
    NSString *_topic;
    struct _NSRange _topicRange;
}

- (void).cxx_destruct;
- (void)backSpaceFace;
@property(retain, nonatomic) UIView *emotionBoardContainer; // @synthesize emotionBoardContainer=_emotionBoardContainer;
- (void)faceChoosed:(id)arg1;
- (void)formatTopicText;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)insertEmoji:(id)arg1 toText:(id)arg2 atLocation:(int)arg3;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void)onTextDidChanged:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setText:(id)arg1;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) struct _NSRange topicRange; // @synthesize topicRange=_topicRange;
- (void)showEmotionBoard;
- (void)showKeyBoard;
- (id)textWithOutTopic;

@end

