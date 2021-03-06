//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, UIFeedbackGenerator, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface QQLightFeedBackAnimator : NSObject
{
    UIImpactFeedbackGenerator *impactGenerator0;
    UIImpactFeedbackGenerator *impactGenerator1;
    UIImpactFeedbackGenerator *impactGenerator2;
    UINotificationFeedbackGenerator *notificationGenerator;
    UISelectionFeedbackGenerator *selectionGenerator;
    long long playIndex;
    NSDate *startTime;
    int *P_times;
    int *P_effects;
    int maxCount;
    UIFeedbackGenerator *_generator;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) UIFeedbackGenerator *generator; // @synthesize generator=_generator;
- (id)getGeneratorByType:(unsigned long long)arg1;
- (id)init;
- (void)play;
- (void)play:(unsigned long long)arg1;
- (void)prepare;
- (void)setPlayTimes:(const int *)arg1 Effects:(const int *)arg2 length:(int)arg3;
- (void)start;
- (void)stop;

@end

