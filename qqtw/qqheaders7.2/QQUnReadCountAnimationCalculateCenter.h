//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQUnReadCountAnimationCalculateCenter : NSObject
{
}

+ (struct CGPoint)convertWithPoint:(struct CGPoint)arg1 FromPoint:(struct CGPoint)arg2;
+ (id)getBackAnimationPointArray:(struct CGPoint)arg1 movePoint:(struct CGPoint)arg2 height:(double)arg3;
+ (struct CGPoint)getLeftFirstPointWithParameters:(CDStruct_6d744985)arg1;
+ (struct CGPoint)getLeftLastPointWithParameter:(CDStruct_6d744985)arg1;
+ (struct CGPoint)getLeftSecondPointWithParameters:(CDStruct_6d744985)arg1;
+ (double)getLengthFromTwoPoint:(struct CGPoint)arg1 withPoint:(struct CGPoint)arg2;
+ (double)getLittleRadiusWithStaticPoint:(struct CGPoint)arg1 movePoint:(struct CGPoint)arg2 moveRadius:(double)arg3;
+ (struct CGPoint)getRightFirstPointWithParameters:(CDStruct_6d744985)arg1;
+ (struct CGPoint)getRightLastPointWithParameter:(CDStruct_6d744985)arg1;
+ (struct CGPoint)getRightSecondPointWithParameters:(CDStruct_6d744985)arg1;
+ (double)getRotateAngleWithStaticPoint:(struct CGPoint)arg1 toMovePoint:(struct CGPoint)arg2;

@end
