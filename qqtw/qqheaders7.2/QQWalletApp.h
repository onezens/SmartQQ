//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QQWalletBasic, QQWalletDateRange, QQWalletImageSeq, QQWalletMarket, QQWalletRedPoint, QQWalletText, UIImage;

@interface QQWalletApp : JceObjectV2
{
    UIImage *_iconimage;
}

+ (id)jceType;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconimage; // @synthesize iconimage=_iconimage;
- (_Bool)ifShowAnimating;
- (_Bool)ifShowMarketIcon;
- (_Bool)ifShowText;

// Remaining properties
@property(retain, nonatomic, getter=jce_basic, setter=setJce_basic:) QQWalletBasic *jcev2_p_0_o_basic; // @dynamic jcev2_p_0_o_basic;
@property(retain, nonatomic, getter=jce_redPoint, setter=setJce_redPoint:) QQWalletRedPoint *jcev2_p_10_o_redPoint; // @dynamic jcev2_p_10_o_redPoint;
@property(retain, nonatomic, getter=jce_image, setter=setJce_image:) NSString *jcev2_p_1_o_image; // @dynamic jcev2_p_1_o_image;
@property(retain, nonatomic, getter=jce_market, setter=setJce_market:) QQWalletMarket *jcev2_p_2_o_market; // @dynamic jcev2_p_2_o_market;
@property(retain, nonatomic, getter=jce_text, setter=setJce_text:) QQWalletText *jcev2_p_3_o_text; // @dynamic jcev2_p_3_o_text;
@property(nonatomic, getter=jce_appid, setter=setJce_appid:) long long jcev2_p_4_o_appid; // @dynamic jcev2_p_4_o_appid;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_5_o_type; // @dynamic jcev2_p_5_o_type;
@property(retain, nonatomic, getter=jce_imageSeq, setter=setJce_imageSeq:) QQWalletImageSeq *jcev2_p_6_o_imageSeq; // @dynamic jcev2_p_6_o_imageSeq;
@property(nonatomic, getter=jce_interPlayTime, setter=setJce_interPlayTime:) int jcev2_p_7_o_interPlayTime; // @dynamic jcev2_p_7_o_interPlayTime;
@property(retain, nonatomic, getter=jce_imageSeqRange, setter=setJce_imageSeqRange:) QQWalletDateRange *jcev2_p_8_o_imageSeqRange; // @dynamic jcev2_p_8_o_imageSeqRange;
@property(nonatomic, getter=jce_carryLBS, setter=setJce_carryLBS:) int jcev2_p_9_o_carryLBS; // @dynamic jcev2_p_9_o_carryLBS;

@end

