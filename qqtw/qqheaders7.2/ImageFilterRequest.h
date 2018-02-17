//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FilterStyle, NSData, NSString;

@interface ImageFilterRequest : NSObject
{
    NSData *_seession_id;
    NSString *_client_ip;
    NSString *_uin;
    FilterStyle *_style;
    double _width;
    double _height;
    NSData *_image_data;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *client_ip; // @synthesize client_ip=_client_ip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSData *image_data; // @synthesize image_data=_image_data;
- (id)initWithseession_id:(id)arg1 client_ip:(id)arg2 uin:(id)arg3 style:(id)arg4 filePath:(id)arg5 image_data:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSData *seession_id; // @synthesize seession_id=_seession_id;
@property(retain, nonatomic) FilterStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) double width; // @synthesize width=_width;

@end

